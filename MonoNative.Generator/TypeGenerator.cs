using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Reflection;

namespace MonoNative.Generator
{
	public static class TypeGenerator
	{
		public static void Generate(Type type)
		{
			RenderHeader (type);
			if (!type.IsGenericType && !type.IsReallyEnum()) {
				RenderImpl (type);
			}
			if (!type.IsReallyEnum ()) {
				RenderFixture (type);
			}
		}

		private static void RenderHeader (Type type)
		{
			var sb = new StringBuilder ();
			var defineName = "__MONO_NATIVE_" + type.Assembly.GetName ().Name.ToUpper () + "_" + type.FullName.Replace (".", "_").Replace ("`", "_").ToUpper () + "_H";
			sb.AppendLine ("#ifndef " + defineName);
			sb.AppendLine ("#define " + defineName);
			AddIncludes (type, sb);
			NameSpaceWriter.Write (type, sb, RenderClass);
			sb.AppendLine ("#endif");
			FileGenerator.SaveHeader (type, sb.ToString());
		}

		private static void RenderFixture (Type type)
		{
			var sb = new StringBuilder ();
			AddFixtureComments (type, sb);
			sb.AppendLine ("#include <gtest/gtest.h>");
			if (type.IsGenericType) {
				sb.AppendLine ("#include <mscorlib.h>");
				sb.AppendLine ();
				sb.AppendLine ();
			} else {
				AddImplIncludes (type, sb);
			}
			NameSpaceWriter.Write (type, sb, RenderFixture);
			FileGenerator.SaveFixture (type, sb.ToString());
		}

		private static void RenderFixture (Type type, StringBuilder sb, string indent)
		{
			string fixtureName = type.Assembly.GetName ().Name + "_" + type.Namespace.Replace (".", "_") + "_" + type.Name.Replace("`", "_") + "_Fixture";

			AddConstructorFixtures (type, sb, indent, fixtureName);
			AddMethodFixtures (type, sb, indent, fixtureName);
			AddPropertiesFixtures (type, sb, indent, fixtureName);
		}

		static void AddConstructorFixtures (Type type, StringBuilder sb, string indent, string fixtureName)
		{
			var constructors = type.GetConstructors ();
			if (constructors.Any ()) {
				sb.AppendLine (indent + "//Constructors Tests");
				sb.AppendLine (indent);
			}
			int i = 1;
			foreach (var constructor in constructors) {
				sb.AppendLine (indent + "//" + type.ClassName() + "(" + constructor.GetSignature() + ")");
				sb.AppendLine (indent + "TEST(" + fixtureName + "," + GetConstructorTestName (constructor, i++) + ")");
				sb.AppendLine (indent + "{");
				sb.AppendLine (indent + "\t");

				if (type.IsGenericType) {

				} else if (type.GetConstructors().Any(x => !x.GetParameters().Any())) {
					sb.AppendLine(indent + "\t" + type.SanitizedName () + " *value = new " + type.SanitizedName () + "();");
					sb.AppendLine(indent + "\t" + "EXPECT_NE(NULL, value->GetNativeObject());");
				}

				sb.AppendLine (indent + "\t");
				sb.AppendLine (indent + "\t");
				sb.AppendLine (indent + "}");
				sb.AppendLine (indent);
			}
		}

		private static string GetConstructorTestName (ConstructorInfo constructor, int i)
		{
			if (constructor.GetParameters ().Any ())
				return "Constructor_" + i.ToString ();
			return "DefaultConstructor";
		}

		private static void AddFixtureComments (Type type, StringBuilder sb)
		{
			sb.AppendLine ("// Mono Native Fixture");
			sb.AppendLine ("// Assembly: " + type.Assembly.ToString());
			sb.AppendLine ("// Namespace: " + type.Namespace);
			sb.AppendLine ("// Name: " + type.Name);
			sb.AppendLine ("// C++ Typed Name: " + type.SanitizedName());
			sb.AppendLine ();
			sb.AppendLine ();
		}

		private static void AddMethodFixtures (Type type, StringBuilder sb, string indent, string fixtureName)
		{
			var methods = type.GetMethods (BindingFlags.Public | BindingFlags.Instance).Where(x => !x.IsSpecialName);
			if (methods.Any ()) {
				sb.AppendLine (indent + "//Public Methods Tests");
				sb.AppendLine (indent);
			}

			Dictionary<string, MethodInfo> methodContainer = new Dictionary<string, MethodInfo>();

			foreach (var method in methods) {
				if (method.Name == "Finalize") continue;
				if (method.DeclaringType != type) continue;
				if (IsCircularMethod (method))
					continue;

				if (methodContainer.ContainsKey (method.Name)) {
					var tmpMethod = methodContainer [method.Name];
					methodContainer.Remove (method.Name);
					methodContainer.Add (method.Name + "_1", tmpMethod);
					methodContainer.Add (method.Name + "_2", method);
				} else {
					var methodCount = methodContainer.Count (x => x.Key.Contains (method.Name + "_"));
					if (methodCount == 0) {
						methodContainer.Add (method.Name, method);
					} else {
						methodContainer.Add (method.Name + "_" + (methodCount + 1).ToString (), method);
					}
				}
			}
			foreach (var methodItem in methodContainer) {
				sb.AppendLine (indent + "// Method " + methodItem.Value.Name);
				sb.AppendLine (indent + "//\t\tSignature: " + methodItem.Value.GetSignature());
				sb.AppendLine (indent + "TEST(" + fixtureName + "," + methodItem.Key + "_Test)");
				sb.AppendLine (indent + "{");
				sb.AppendLine (indent + "\t");
				sb.AppendLine (indent + "\t");
				sb.AppendLine (indent + "}");
				sb.AppendLine ();
			}

			methods = type.GetMethods (BindingFlags.Public | BindingFlags.Static).Where(x => !x.IsSpecialName);
			if (methods.Any ()) {
				sb.AppendLine (indent + "//Public Static Methods Tests");
				sb.AppendLine (indent);
			}

			methodContainer = new Dictionary<string, MethodInfo>();
			foreach (var method in methods) {
				if (method.Name == "Finalize") continue;
				if (method.DeclaringType != type) continue;

				if (IsCircularMethod (method))
					continue;
				if (methodContainer.ContainsKey (method.Name)) {
					var tmpMethod = methodContainer [method.Name];
					methodContainer.Remove (method.Name);
					methodContainer.Add (method.Name + "_1", tmpMethod);
					methodContainer.Add (method.Name + "_2", method);
				} else {
					var methodCount = methodContainer.Count (x => x.Key.Contains (method.Name + "_"));
					if (methodCount == 0) {
						methodContainer.Add (method.Name, method);
					} else {
						methodContainer.Add (method.Name + "_" + (methodCount + 1).ToString (), method);
					}
				}
			}

			foreach (var methodItem in methodContainer) {
				sb.AppendLine (indent + "// Method " + methodItem.Value.Name);
				sb.AppendLine (indent + "//\t\tSignature: " + methodItem.Value.GetSignature());
				sb.AppendLine (indent + "TEST(" + fixtureName + "," + methodItem.Key + "_StaticTest)");
				sb.AppendLine (indent + "{");
				sb.AppendLine (indent + "\t");
				sb.AppendLine (indent + "\t");
				sb.AppendLine (indent + "}");
				sb.AppendLine ();
			}
		}

		private static void AddPropertiesFixtures (Type type, StringBuilder sb, string indent, string fixtureName)
		{
			var properties = type.GetProperties (BindingFlags.Public | BindingFlags.Instance);
			if (properties.Any ()) {
				sb.AppendLine (indent + "//Public Properties Tests");
				sb.AppendLine (indent);
			}

			Dictionary<string, PropertyInfo> propertyContainer = new Dictionary<string, PropertyInfo>();
			foreach (var property in properties) {
				if (IsCircularProperty (property))
					continue;
				if (propertyContainer.ContainsKey (property.Name)) {
					var tmpMethod = propertyContainer [property.Name];
					propertyContainer.Remove (property.Name);
					propertyContainer.Add (property.Name + "_1", tmpMethod);
					propertyContainer.Add (property.Name + "_2", property);
				} else {
					var methodCount = propertyContainer.Count (x => x.Key.Contains (property.Name + "_"));
					if (methodCount == 0) {
						propertyContainer.Add (property.Name, property);
					} else {
						propertyContainer.Add (property.Name + "_" + (methodCount + 1).ToString (), property);
					}
				}
			}

			foreach (var propertyItem in propertyContainer) {
				sb.AppendLine (indent + "// Property " + propertyItem.Value.Name);
				sb.AppendLine (indent + "//\t\tReturn Type: " + propertyItem.Value.PropertyType.SanitizedName());
				sb.AppendLine (indent + "//\t\t\tProperty Get Method");
				sb.AppendLine (indent + "TEST(" + fixtureName + ",get_" + propertyItem.Key + "_Test)");
				sb.AppendLine (indent + "{");
				sb.AppendLine (indent + "\t");
				sb.AppendLine (indent + "\t");
				sb.AppendLine (indent + "}");
				sb.AppendLine ();

				if (propertyItem.Value.CanWrite) {
					sb.AppendLine (indent + "// Property " + propertyItem.Value.Name);
					sb.AppendLine (indent + "//\t\tReturn Type: " + propertyItem.Value.PropertyType.SanitizedName());
					sb.AppendLine (indent + "//\t\t\tProperty Set Method");
					sb.AppendLine (indent + "TEST(" + fixtureName + ",set_" + propertyItem.Key + "_Test)");
					sb.AppendLine (indent + "{");
					sb.AppendLine (indent + "\t");
					sb.AppendLine (indent + "\t");
					sb.AppendLine (indent + "}");
					sb.AppendLine ();
				}
			}

			properties = type.GetProperties (BindingFlags.Public | BindingFlags.Static);
			propertyContainer = new Dictionary<string, PropertyInfo>();
			foreach (var property in properties) {
				if (IsCircularProperty (property))
					continue;
				if (propertyContainer.ContainsKey (property.Name)) {
					var tmpMethod = propertyContainer [property.Name];
					propertyContainer.Remove (property.Name);
					propertyContainer.Add (property.Name + "_1", tmpMethod);
					propertyContainer.Add (property.Name + "_2", property);
				} else {
					var methodCount = propertyContainer.Count (x => x.Key.Contains (property.Name + "_"));
					if (methodCount == 0) {
						propertyContainer.Add (property.Name, property);
					} else {
						propertyContainer.Add (property.Name + "_" + (methodCount + 1).ToString (), property);
					}
				}
			}

			foreach (var propertyItem in propertyContainer) {
				sb.AppendLine (indent + "// Property " + propertyItem.Value.Name);
				sb.AppendLine (indent + "//\t\tReturn Type: " + propertyItem.Value.PropertyType.SanitizedName());
				sb.AppendLine (indent + "//\t\t\tProperty Get Method");
				sb.AppendLine (indent + "TEST(" + fixtureName + ",get_" + propertyItem.Key + "_Test)");
				sb.AppendLine (indent + "{");
				sb.AppendLine (indent + "\t");
				sb.AppendLine (indent + "\t");
				sb.AppendLine (indent + "}");
				sb.AppendLine ();

				if (propertyItem.Value.CanWrite) {
					sb.AppendLine (indent + "// Property " + propertyItem.Value.Name);
					sb.AppendLine (indent + "//\t\tReturn Type: " + propertyItem.Value.PropertyType.SanitizedName());
					sb.AppendLine (indent + "//\t\t\tProperty Set Method");
					sb.AppendLine (indent + "TEST(" + fixtureName + ",set_" + propertyItem.Key + "_Test)");
					sb.AppendLine (indent + "{");
					sb.AppendLine (indent + "\t");
					sb.AppendLine (indent + "\t");
					sb.AppendLine (indent + "}");
					sb.AppendLine ();
				}
			}
		}

		private static void AddIncludes (Type type, StringBuilder sb)
		{
			if (type.IsReallyEnum())
				return;
			sb.AppendLine ();

			if (typeof(object) == type) {
				sb.AppendLine ("#include <Global.h>");
				sb.AppendLine ();
				NameSpaceWriter.Write (typeof(string), sb, (targetType, StringBuilder, indent) => {
					sb.AppendLine (indent + "class String;");
					sb.AppendLine (indent + "class Type;");
				});
				sb.AppendLine ();
				return;
			}

			HashSet<Type> types = new HashSet<Type> ();

			AddIncludes (type, types);

			types.RemoveWhere (x => x == type || x == typeof(char));

			if (type == typeof(System.Threading.Tasks.Task))
				types.RemoveWhere (x => x == typeof(System.Threading.Tasks.Task<>));
			if (type == typeof(System.Collections.Concurrent.Partitioner))
				types.RemoveWhere (x => x == typeof(System.Collections.Concurrent.OrderablePartitioner<>));
			if (type == typeof(System.Threading.Tasks.Parallel))
				types.RemoveWhere (x => x == typeof(System.Collections.Concurrent.OrderablePartitioner<>));

			var incTypes = types.ToList ();

			ArrangeIncludes (type, types);

			foreach (var target in types) {
				sb.AppendLine ("#include <" + target.GetTypePath() + ".h>");
			}

			if (!types.Any () || types.All(x => x.IsReallyEnum())) {
				sb.AppendLine ("#include <Global.h>");
			}
			sb.AppendLine ();

			ForwardManager.Forward (type, sb);
			ForwardManager.DoForward (type, sb, incTypes.Except(types).ToList());
		}

		public static void AddIncludes (Type type, HashSet<Type> types)
		{
			if (!type.IsInterface) {
				if (type.BaseType != null)
					types.Add (type.BaseType);
				var constructors = type.GetConstructors ();
				foreach (var constructor in constructors) {
					foreach (var parameter in constructor.GetParameters ()) {
						AddGenericDelegateTypes (types, parameter.ParameterType);
						if (!parameter.ParameterType.IsBaseType ()) {
							types.Add (parameter.ParameterType.ToIncludeType ());
							AddGenericInclude (types, parameter.ParameterType);
						}
					}
				}

				var nestedTypes = type.GetNestedTypes ();
				foreach (var nestedType in nestedTypes) {
					AddIncludes (nestedType, types);
				}
			}
			var interfaces = type.GetInterfaces ().Where (x => x.IsPublic);
			foreach (var interfaceType in interfaces) {
				if (interfaceType.IsPublic) // && !interfaces.Any (x => x != interfaceType && interfaceType.IsAssignableFrom (x))) 
				{
					if (!interfaceType.ToIncludeType ().IsBaseType ()) {
						types.Add (interfaceType.ToIncludeType ());
						AddGenericInclude (types, interfaceType);
					}
				}
			}
			var methods = type.GetMethods (System.Reflection.BindingFlags.Public | System.Reflection.BindingFlags.Instance);
			foreach (var method in methods) {
				AddGenericDelegateTypes (types, method.ReturnType);
				if (!method.ReturnType.IsBaseType ()) {
					types.Add (method.ReturnType.ToIncludeType ());
					AddGenericInclude (types, method.ReturnType);
				}
				foreach (var parameter in method.GetParameters ()) {
					AddGenericDelegateTypes (types, parameter.ParameterType);
					if (!parameter.ParameterType.IsBaseType ()) {
						types.Add (parameter.ParameterType.ToIncludeType ());
						AddGenericInclude (types, parameter.ParameterType);
					}
				}
			}
			methods = type.GetMethods (System.Reflection.BindingFlags.Public | System.Reflection.BindingFlags.Static);
			foreach (var method in methods) {
				AddGenericDelegateTypes (types, method.ReturnType);
				if (!method.ReturnType.IsBaseType ()) {
					types.Add (method.ReturnType.ToIncludeType ());
				}
				foreach (var parameter in method.GetParameters ()) {
					AddGenericDelegateTypes (types, parameter.ParameterType);
					if (parameter.ParameterType.Name.EndsWith ("*")) {
						var pointerType = Type.GetType (parameter.ParameterType.FullName.Replace ("*", ""));
						if (!pointerType.IsBaseType ()) {
							types.Add (pointerType.ToIncludeType ());
							AddGenericInclude (types, pointerType.ToIncludeType ());
						}
					}
					else if (!parameter.ParameterType.IsBaseType ()) {
						types.Add (parameter.ParameterType.ToIncludeType ());
						AddGenericInclude (types, parameter.ParameterType.ToIncludeType ());
					}
				}
			}
			var properties = type.GetProperties (System.Reflection.BindingFlags.Public | System.Reflection.BindingFlags.Instance);
			foreach (var property in properties) {
				AddGenericDelegateTypes (types, property.PropertyType);
				if (!property.PropertyType.IsBaseType ()) {
					types.Add (property.PropertyType.ToIncludeType ());
					AddGenericInclude (types, property.PropertyType);
				}
			}
			properties = type.GetProperties (System.Reflection.BindingFlags.Public | System.Reflection.BindingFlags.Static);
			foreach (var property in properties) {
				AddGenericDelegateTypes (types, property.PropertyType);
				if (!property.PropertyType.IsBaseType ()) {
					types.Add (property.PropertyType.ToIncludeType ());
					AddGenericInclude (types, property.PropertyType);
				}
			}
			var fields = type.GetFields (System.Reflection.BindingFlags.Public | System.Reflection.BindingFlags.Instance);
			foreach (var field in fields) {
				if (!field.FieldType.IsBaseType ()) {
					types.Add (field.FieldType.ToIncludeType ());
					AddGenericInclude (types, field.FieldType);
				}
			}
			fields = type.GetFields (System.Reflection.BindingFlags.Public | System.Reflection.BindingFlags.Static);
			foreach (var field in fields) {
				if (!field.FieldType.IsBaseType ()) {
					types.Add (field.FieldType.ToIncludeType ());
					AddGenericInclude (types, field.FieldType);
				}
			}
		}

		static void AddGenericInclude (HashSet<Type> types, Type type)
		{
			if (type.IsGenericType)
			{
				var genericTypes = type.GetGenericArguments();
				foreach(var genericType in genericTypes)
				{
					if (!genericType.IsBaseType())
					{
						types.Add(genericType.ToIncludeType());
					}
				}
			}
		}

		static void AddGenericDelegateTypes(HashSet<Type> types, Type type)
		{
			if (type.IsDelegate ()) {
				if (type.IsGenericType) {
					var genericTypes = type.GetGenericArguments ();
					foreach (var genericType in genericTypes) {
						if (!genericType.IsBaseType ()) {
							types.Add (genericType.ToIncludeType ());
						}
					}
				} else {
					var delegateMethod = type.GetMethod ("Invoke");
					if (delegateMethod != null) {
						if (!delegateMethod.ReturnType.IsBaseType ()) {
							types.Add (delegateMethod.ReturnType.ToIncludeType ());
						}
						foreach (var parameter in delegateMethod.GetParameters()) {
							if (!parameter.ParameterType.IsBaseType ()) {
								types.Add (parameter.ParameterType.ToIncludeType ());
							}
						}
					}
				}
			}
		}

		public static void ArrangeIncludes (Type type, HashSet<Type> types)
		{
			IncludesFilter.Filter (type, types);
		}

		private static void RenderClass(Type type, StringBuilder sb, string indent)
		{
			if (type.IsReallyEnum()) {
				RenderEnum (type, sb, indent);
			} else {
				if (type.IsGenericType) {
					string typenames = string.Join(", ",  type.GetGenericArguments().Select(x => "typename " + x.Name));
					sb.AppendLine(indent + "template<" + typenames + ">");
				}
				sb.AppendLine (indent + "class " + type.ClassName ());
				AddDerived (type, sb, indent);
				sb.AppendLine (indent + "{");
				sb.AppendLine (indent + "public:");
				AddPublicMembers (type, sb, indent);
				sb.AppendLine (indent + "");
				sb.AppendLine (indent + "protected:");
				AddProtectedMembers (type, sb, indent);
				sb.AppendLine (indent + "");
				sb.AppendLine (indent + "private:");
				AddPrivateMembers (type, sb, indent);
				sb.AppendLine (indent + "");
				sb.AppendLine (indent + "};");
			}
		}

		static void AddDerived (Type type, StringBuilder sb, string indent)
		{
			bool first = true;
			if (type.BaseType != null) {
				sb.AppendLine (indent + "\t: public " + type.BaseType.SanitizedName ());
				first = false;
			}
			var interfaces = type.GetInterfaces ();
			foreach (var interfaceType in interfaces) {
				if (interfaceType.IsPublic) // && !interfaces.Any (x => x != interfaceType && interfaceType.IsAssignableFrom (x))) 
				{
					sb.AppendLine (indent + "\t" + (first ? ":" : ",") + " public virtual " + interfaceType.SanitizedName ());
					first = false;
				}
			}
		}

		private static void AddPublicMembers (Type type, StringBuilder sb, string indent)
		{
			AddNestedTypes (type, sb, indent);
			AddConstructors (type, sb, indent);
			AddOperators (type, sb, indent);
			AddMethods (type, sb, indent);
			AddProperties (type, sb, indent);
		}

		static void AddConstructors (Type type, StringBuilder sb, string indent)
		{
			if (!type.IsInterface) {
				var constructors = type.GetConstructors ();

				if (type == typeof(string)) {
					sb.AppendLine(indent + "\t" + type.ClassName() + "(" + "const char *value" + ")");
					CallBaseConstructor (type, sb, indent, false);
					sb.AppendLine (indent + "\t{");
					sb.AppendLine (indent + "\t\t__native_object__ = (MonoObject*)mono_string_new(Global::GetDomain(), value);");
					sb.AppendLine (indent + "\t};");
					sb.AppendLine (indent);
				}

				foreach (var constructor in constructors) {
					sb.AppendLine(indent + "\t" + type.ClassName() + "(" + constructor.GetSignature(true) + ")");
					CallBaseConstructor (type, sb, indent, false);
					sb.AppendLine (indent + "\t{");
					AddNewCall (type, constructor, sb, indent);
					sb.AppendLine (indent + "\t};");
					sb.AppendLine (indent);
				}

				sb.AppendLine (indent + "\t" + type.ClassName () + "(mscorlib::NativeTypeInfo *nativeTypeInfo)");
				CallBaseNativeTypeInfo (type, sb, indent);
				sb.AppendLine (indent + "\t{");
				if (typeof(object) == type) {
					sb.AppendLine (indent + "\t\t__native_object__ = NULL;");
					sb.AppendLine (indent + "\t\t__native_type_info__ = nativeTypeInfo;");
				}
				sb.AppendLine (indent + "\t};");
				sb.AppendLine (indent);

			}

			sb.AppendLine (indent + "\t" + type.ClassName () + "(MonoObject *nativeObject)");
			CallBaseNativeObject (type, sb, indent);
			sb.AppendLine (indent + "\t{");
			if (typeof(object) == type) {
				sb.AppendLine (indent + "\t\t__native_object__ = nativeObject;");
			} else if (type.IsInterface) {
				if (!type.GetInterfaces ().Any ()) {
					sb.AppendLine (indent + "\t\t" + type.ToInterfaceVariableName() + " = nativeObject;");
				}
			}
			sb.AppendLine (indent + "\t};");
			sb.AppendLine (indent);

			sb.AppendLine (indent + "\t~" + type.ClassName () + "()");
			sb.AppendLine (indent + "\t{");
			if (type == typeof(object)) {
				sb.AppendLine (indent + "\t\t__native_object__ = NULL;");
				sb.AppendLine (indent + "\t\t__native_type_info__ = NULL;");
			}
			sb.AppendLine (indent + "\t};");
			sb.AppendLine (indent);
		}

		static void AddOperators (Type type, StringBuilder sb, string indent)
		{
			if (type.IsInterface) {
				sb.AppendLine();
				var interfaces = type.GetInterfaces();
				if (interfaces.Any())
				{
					sb.AppendLine(indent + "\t__declspec(property(get=get_" + type.ToInterfaceVariableName() + ", put=set_" + type.ToInterfaceVariableName() + ")) MonoObject *" + type.ToInterfaceVariableName() + ";");
					sb.AppendLine(indent + "\tMonoObject* get_" + type.ToInterfaceVariableName() + "() const");
                	sb.AppendLine(indent + "\t{");
        			sb.AppendLine(indent + "\t\treturn " + type.ClassName() + "::" + type.ToNativeObjectVariable(true) + ";");
					sb.AppendLine(indent + "\t}");
					sb.AppendLine(indent + "\tvoid set_" + type.ToInterfaceVariableName() + "(MonoObject *value)");
					sb.AppendLine(indent + "\t{");
					sb.AppendLine(indent + "\t\t" + type.ClassName() + "::" + type.ToNativeObjectVariable(true) + " = value;");
					sb.AppendLine(indent + "\t}");
				}
				sb.AppendLine(indent + "\t" + type.ClassName() + " & operator=(" + type.ClassName() + " &value) { " + type.ToInterfaceVariableName() + " = value." + type.ToInterfaceVariableName() + "; return value; };");
				sb.AppendLine(indent + "\toperator MonoObject*() { return " + type.ToInterfaceVariableName() + "; };");
				sb.AppendLine(indent + "\tMonoObject* operator=(MonoObject* value) { " + type.ToInterfaceVariableName() + " = value; return value; };");
				sb.AppendLine();
			} else {
				sb.AppendLine();

				sb.AppendLine(indent + "\t" + type.ClassName() + " & operator=(" + type.ClassName() + " &value) { " + GetNativeObjectPrefix(type) + "__native_object__ = value.GetNativeObject(); return value; };");

				sb.AppendLine(indent + "\tbool operator==(" + type.ClassName() + " &value) { return mscorlib::System::Object::Equals(value); };");


				sb.AppendLine(indent + "\toperator MonoObject*() { return " + GetNativeObjectPrefix(type) + "__native_object__; };");
				sb.AppendLine(indent + "\tMonoObject* operator=(MonoObject* value) { return " + GetNativeObjectPrefix(type) + "__native_object__ = value; };");

				if (type == typeof(string)) {
					sb.AppendLine (indent + "\toperator MonoString*() { return mono_object_to_string(__native_object__, NULL); };");
					sb.AppendLine (indent + "\tMonoString* operator=(MonoString* value) { __native_object__ = (MonoObject*)value; return value; };");

					sb.AppendLine (indent + "\toperator const char*() { return mono_string_to_utf8(mono_object_to_string(__native_object__, NULL)); };");
					sb.AppendLine (indent + "\tString & operator=(const char* value) { __native_object__ = (MonoObject*)mono_string_new(Global::GetDomain(), value); return *this; };");
					sb.AppendLine (indent + "\tString & operator+=(const char* value)");
					sb.AppendLine (indent + "\t{");
					sb.AppendLine (indent + "\t\tstd::string original(mono_string_to_utf8(mono_object_to_string(__native_object__, NULL)));");
					sb.AppendLine (indent + "\t\toriginal.append(value);");
					sb.AppendLine (indent + "\t\t__native_object__ = (MonoObject*)mono_string_new(Global::GetDomain(), original.c_str()); return *this;");
					sb.AppendLine (indent + "\t};");
					sb.AppendLine (indent + "\toperator std::string() { return std::string(mono_string_to_utf8(mono_object_to_string(__native_object__, NULL))); };");
					sb.AppendLine (indent + "\tString & operator=(std::string value) { __native_object__ = (MonoObject*)mono_string_new(Global::GetDomain(), value.c_str()); return *this; };");
					sb.AppendLine (indent + "\tString & operator+=(std::string value)");
					sb.AppendLine (indent + "\t{");
					sb.AppendLine (indent + "\t\tstd::string original(mono_string_to_utf8(mono_object_to_string(__native_object__, NULL)));");
					sb.AppendLine (indent + "\t\toriginal.append(value);");
					sb.AppendLine (indent + "\t__native_object__ = (MonoObject*)mono_string_new(Global::GetDomain(), value.c_str()); return *this;");
					sb.AppendLine (indent + "\t};");
				} else {
					/*
					sb.AppendLine (indent + "\toperator MonoString*() { return ToString(); };");
					sb.AppendLine (indent + "\toperator const char*() { return ToString(); };");
					sb.AppendLine (indent + "\toperator std::string() { return ToString(); };");
					*/
				}


				sb.AppendLine();
			}
		}

		static void CallBaseConstructor (Type type, StringBuilder sb, string indent, bool isObject)
		{
			bool first = true;
			if (type.BaseType != null) {
				sb.AppendLine (indent + "\t: " + type.BaseType.SanitizedName () + (isObject ? "(nativeObject)" : "(mscorlib::NativeTypeInfo::GetTypeInfo(\"" + type.Assembly.GetName ().Name + "\",\"" + type.FullName + "\"))"));
				first = false;
			}
			var interfaces = type.GetInterfaces ();
			foreach (var interfaceType in interfaces) {
				if (interfaceType.IsPublic) // && !interfaces.Any (x => x != interfaceType && interfaceType.IsAssignableFrom (x))) 
				{
					sb.AppendLine (indent + "\t" + (first ? ":" : ",") + " " + interfaceType.SanitizedName () + "(" + (isObject ? "nativeObject" : "NULL") + ")");
					first = false;
				}
			}
		}

		static void CallBaseNativeTypeInfo (Type type, StringBuilder sb, string indent)
		{
			bool first = true;
			if (type.BaseType != null) {
				sb.AppendLine (indent + "\t: " + type.BaseType.SanitizedName () + "(nativeTypeInfo)");
				first = false;
			}
			var interfaces = type.GetInterfaces ();
			foreach (var interfaceType in interfaces) {
				if (interfaceType.IsPublic) // && !interfaces.Any (x => x != interfaceType && interfaceType.IsAssignableFrom (x))) 
				{
					sb.AppendLine (indent + "\t" + (first ? ":" : ",") + " " + interfaceType.SanitizedName () + "(NULL)");
					first = false;
				}
			}
		}

		static void CallBaseNativeObject (Type type, StringBuilder sb, string indent)
		{
			bool first = true;
			if (type.BaseType != null) {
				sb.AppendLine (indent + "\t: " + type.BaseType.SanitizedName () + "(nativeObject)");
				first = false;
			}
			var interfaces = type.GetInterfaces ();
			foreach (var interfaceType in interfaces) {
				if (interfaceType.IsPublic) // && !interfaces.Any (x => x != interfaceType && interfaceType.IsAssignableFrom (x))) 
				{
					sb.AppendLine (indent + "\t" + (first ? ":" : ",") + " " + interfaceType.SanitizedName () + "(nativeObject)");
					first = false;
				}
			}
		}

		static void AddNewCall (Type type, System.Reflection.ConstructorInfo constructor, StringBuilder sb, string indent)
		{
			var parameters = constructor.GetParameters ();
			if (type.IsGenericType) {
				var genericTypes = type.GetGenericArguments();
				sb.AppendLine(indent + "\t\tMonoType *__generic_types__[" + genericTypes.Count() + "];");
				for (int i = 0; i < genericTypes.Count(); i++)
				{
					sb.AppendLine(indent + "\t\t__generic_types__[" + i + "] = Global::GetType(typeid(" +  genericTypes[i].Name + ").name());");
				}
				if (!parameters.Any ()) {
					sb.AppendLine(indent + "\t\t__native_object__ = Global::New(\"" + type.Assembly.GetName().Name + "\", \"" + type.Namespace + "\", \"" + type.Name + "\", " + genericTypes.Count() + ", __generic_types__, 0, NULL, NULL);");
				} else {
					WriteParameters (type, parameters, sb, indent + "\t", true);
					sb.AppendLine(indent + "\t\t__native_object__ = Global::New(\"" + type.Assembly.GetName().Name + "\", \"" + type.Namespace + "\", \"" + type.Name + "\", " + genericTypes.Count() + ", __generic_types__, __parameters__);");
				}
			} else {
				if (!parameters.Any ()) {
					sb.AppendLine (indent + "\t\t__native_object__ = Global::New(\"" + type.Assembly.GetName ().Name + "\", \"" + type.Namespace + "\", \"" + type.Name + "\");");
				} else {
					WriteParameters (type, parameters, sb, indent + "\t", true);
					sb.AppendLine(indent + "\t\t__native_object__ = Global::New(\"" + type.Assembly.GetName().Name + "\", \"" + type.Namespace + "\", \"" + type.Name + "\", " + parameters.Count() + ", __parameter_types__, __parameters__);");
				}
			}
		}

		static void AddNestedTypes (Type type, StringBuilder sb, string indent)
		{
			var nestedTypes = type.GetNestedTypes ();

			foreach (var nestedType in nestedTypes) {
				if (!nestedType.IsDelegate ()) {
					RenderClass (nestedType, sb, indent + "\t");
					sb.AppendLine (indent + "\t");
				}
			}

		}

		static void AddMethods (Type type, StringBuilder sb, string indent)
		{
			sb.AppendLine ();
			var methods = type.GetMethods(BindingFlags.Public | BindingFlags.Instance | BindingFlags.Static).Where(x => !x.IsSpecialName);
			foreach(var method in methods)
			{
				if (method.Name == "Finalize") continue;
                if (method.DeclaringType != type) continue;
				if (AddCustomMethod (type, method, sb, indent))
					continue;
				if (IsCircularMethod (method))
					continue;
                if (method.IsGenericMethod)
                    sb.AppendLine(indent + "\ttemplate<" + string.Join(", ", method.GetGenericArguments().Select(x => "typename " + (x.FullName == null ? x.Name : x.FullName))) + ">");
				sb.AppendLine(indent + "\t" + (method.IsStatic ? "static " : "") + (method.IsVirtual ? "virtual " : "") + method.ReturnType.ToParameterTypeName() + (method.Name == "GetEnumerator" ? "* " : " ") + method.Name + "(" + method.GetSignature() + ")" + (method.GetBaseDefinition() != method ? " override" : "") + (type.IsGenericType || method.IsGenericMethod ? "" : ";"));
				if (type.IsGenericType || method.IsGenericMethod)
				{
					sb.AppendLine(indent + "\t{");
					WriteInvoke(type, sb, indent, method);
					sb.AppendLine(indent + "\t};");
					sb.AppendLine (indent + "\t");
				}

				if (method.GetParameters ().Any (x => x.ParameterType == typeof(string))) {
					if (method.IsGenericMethod)
						sb.AppendLine(indent + "\ttemplate<" + string.Join(", ", method.GetGenericArguments().Select(x => "typename " + (x.FullName == null ? x.Name : x.FullName))) + ">");
					sb.AppendLine(indent + "\t" + (method.IsStatic ? "static " : "") + (method.IsVirtual ? "virtual " : "") + method.ReturnType.ToParameterTypeName() + (method.Name == "GetEnumerator" ? "* " : " ") + method.Name + "(" + method.GetSignature().Replace("mscorlib::System::String ", "const char *") + ")" + (method.GetBaseDefinition() != method ? " override" : "") + (type.IsGenericType || method.IsGenericMethod ? "" : ";"));
					if (type.IsGenericType || method.IsGenericMethod)
					{
						sb.AppendLine(indent + "\t{");
						WriteInvoke(type, sb, indent, method, true);
						sb.AppendLine(indent + "\t};");
						sb.AppendLine (indent + "\t");
					}
				}

            }

			if (!type.IsInterface) {
				sb.AppendLine (indent + "\tvirtual MonoObject* GetNativeObject() " + (type == typeof(object) ? "" : " override ") + " { return " + GetNativeObjectPrefix(type) + "__native_object__; };");
			}
			sb.AppendLine ();
		}

		static bool IsCircularMethod (MethodInfo method)
		{
			if (method.DeclaringType == typeof(System.Threading.Tasks.Task) && (method.IsGenericMethod || method.ReturnType.IsGenericType)) {
				return true;
			}
			if (method.DeclaringType == typeof(System.Collections.Concurrent.Partitioner) && method.IsStatic) {
				return true;
			}

			if (method.DeclaringType == typeof(System.Threading.Tasks.Parallel) && method.GetParameters().Any(x => x.ParameterType.ToIncludeType() == typeof(System.Collections.Concurrent.OrderablePartitioner<>)) ) {
				return true;
			}

			return false;
		}

		static bool AddCustomMethod (Type type, MethodInfo method, StringBuilder sb, string indent)
		{

			if (typeof(Dictionary<,>.ValueCollection) == type && method.Name == "GetEnumerator") {
				sb.AppendLine (indent + "\tEnumerator<TKey,TValue> * GetEnumerator()");
				sb.AppendLine(indent + "\t{");
				sb.AppendLine (indent + "\t\tMonoType *__generic_types__[2];");
				sb.AppendLine (indent + "\t\t__generic_types__[0] = Global::GetType(typeid(TKey).name());");
				sb.AppendLine (indent + "\t\t__generic_types__[1] = Global::GetType(typeid(TValue).name());");
				sb.AppendLine (indent + "\t\tMonoObject *__result__ = Global::InvokeMethod(\"mscorlib\", \"System.Collections.Generic\", \"Dictionary`2+ValueCollection[TKey,TValue]\", 2, __generic_types__, \"GetEnumerator\", __native_object__, 0, NULL, NULL, NULL);");
				sb.AppendLine (indent + "\t\treturn new Enumerator<TKey,TValue>(__result__);");
				sb.AppendLine (indent + "\t};");
				sb.AppendLine (indent + "\t");
				return true;
			}

			if (typeof(Dictionary<,>.KeyCollection) == type && method.Name == "GetEnumerator") {
				sb.AppendLine (indent + "\tEnumerator<TKey,TValue> * GetEnumerator()");
				sb.AppendLine(indent + "\t{");
				sb.AppendLine (indent + "\t\tMonoType *__generic_types__[2];");
				sb.AppendLine (indent + "\t\t__generic_types__[0] = Global::GetType(typeid(TKey).name());");
				sb.AppendLine (indent + "\t\t__generic_types__[1] = Global::GetType(typeid(TValue).name());");
				sb.AppendLine (indent + "\t\tMonoObject *__result__ = Global::InvokeMethod(\"mscorlib\", \"System.Collections.Generic\", \"Dictionary`2+KeyCollection[TKey,TValue]\", 2, __generic_types__, \"GetEnumerator\", __native_object__, 0, NULL, NULL, NULL);");
				sb.AppendLine (indent + "\t\treturn new Enumerator<TKey,TValue>(__result__);");
				sb.AppendLine (indent + "\t};");
				sb.AppendLine (indent + "\t");
				return true;
			}

			return false;
		}

		static void AddProperties (Type type, StringBuilder sb, string indent)
		{
			var properties = type.GetProperties(BindingFlags.Public | BindingFlags.Instance).Where(x => !x.IsSpecialName);
			if (properties.Count() > 0)
			{
				sb.AppendLine ();
				sb.AppendLine(indent + "\t//Public Properties");
			}
			bool isItemAdded = false;
			foreach (var property in properties)
			{
				if (isItemAdded)
					continue;
				var parameters = property.GetIndexParameters ();
				if (property.Name == "Item")
					isItemAdded = true;
				sb.AppendLine(indent + "\t__declspec(property(get=get_" + property.Name + (property.CanWrite ? ", put=set_" + property.Name : "") + ")) " + property.PropertyType.ToParameterTypeName() + " " + property.Name + (parameters.Any() ? "[]" : "") + ";");
			}
			var fields = type.GetFields(BindingFlags.Public | BindingFlags.Instance).Where(x => !x.IsSpecialName);
			if (fields.Count() > 0)
			{
				sb.AppendLine ();
				sb.AppendLine(indent + "\t//Public Fields");
			}
			foreach (var field in fields)
			{
				sb.AppendLine(indent + "\t__declspec(property(get=get_" + field.Name + (!field.IsInitOnly ? ", put=set_" + field.Name : "") + ")) " + field.FieldType.ToParameterTypeName() + " " + field.Name + ";");
			}

			//Static 

			properties = type.GetProperties(BindingFlags.Public | BindingFlags.Static).Where(x => !x.IsSpecialName);
			if (properties.Count() > 0)
			{
				sb.AppendLine ();
				sb.AppendLine(indent + "\t//Public Static Properties");
			}
			foreach (var property in properties)
			{
				if (!IsCircularProperty(property))
				{
					sb.AppendLine(indent + "\tstatic Property<" + property.PropertyType.ToParameterTypeName() + ", " + type.SanitizedName() + "> " + property.Name + ";");
				}
			}
			fields = type.GetFields(BindingFlags.Public | BindingFlags.Static).Where(x => !x.IsSpecialName);
			if (fields.Count() > 0)
			{
				sb.AppendLine ();
				sb.AppendLine(indent + "\t//Public Static Fields");
			}
			foreach (var field in fields)
			{
				sb.AppendLine(indent + "\tstatic Property<" + field.FieldType.ToParameterTypeName() + ", " + type.SanitizedName() + "> " + field.Name + ";");
			}

			sb.AppendLine ();
			if (type.IsGenericType) {
				//Do total implementation
				AddPropertyGenericImpl (type, sb, indent);
			} else {
				// Just declare it
				AddPropertyDeclaration (type, sb, indent);
			}

		}

		static void AddPropertyDeclaration (Type type, StringBuilder sb, string indent)
		{
			var properties = type.GetProperties(BindingFlags.Public | BindingFlags.Instance).Where(x => !x.IsSpecialName);
			if (properties.Count() > 0)
			{
				sb.AppendLine(indent + "\t//Get Set Properties Methods");
			}
			foreach (var property in properties)
			{
				sb.AppendLine(indent + "\t//\tGet" + (property.CanWrite ? "/Set:" : ":") + property.Name);
				sb.AppendLine(indent + "\t" + property.PropertyType.ToParameterTypeName() + " get_" + property.Name + "(" + property.GetSignature(false) + ") const;");
				if (property.CanWrite)
					sb.AppendLine(indent + "\tvoid set_" + property.Name + "(" + property.GetSignature(true) + ");");
				sb.AppendLine();
			}

			//Static
			properties = type.GetProperties(BindingFlags.Public | BindingFlags.Static).Where(x => !x.IsSpecialName);
			if (properties.Count() > 0)
			{
				sb.AppendLine(indent + "\t//Get Set Static Properties Methods");
			}
			foreach (var property in properties)
			{
				sb.AppendLine(indent + "\t//\tGet" + (property.CanWrite ? "/Set:" : ":") + property.Name);
				sb.AppendLine(indent + "\tstatic " + property.PropertyType.ToParameterTypeName() + " get_" + property.Name + "();");
				sb.AppendLine(indent + "\tstatic void set_" + property.Name + "(" + property.PropertyType.ToParameterTypeName() + " value);");
				sb.AppendLine();
			}
			if (properties.Count() > 0)
			{
				sb.AppendLine();
			}

			var fields = type.GetFields(BindingFlags.Public | BindingFlags.Instance).Where(x => !x.IsSpecialName);
			foreach (var field in fields)
			{
				sb.AppendLine(indent + "\t//\tGet/Set:" + field.Name);
				sb.AppendLine(indent + "\t" + field.FieldType.ToParameterTypeName() + " get_" + field.Name + "() const;");
				if (!field.IsInitOnly)
					sb.AppendLine(indent + "\tvoid set_" + field.Name + "(" + field.FieldType.ToParameterTypeName() + " value);");
				sb.AppendLine();
			}
			fields = type.GetFields(BindingFlags.Public | BindingFlags.Static).Where(x => !x.IsSpecialName);
			foreach (var field in fields)
			{
				sb.AppendLine(indent + "\t//\tGet/Set:" + field.Name);
				sb.AppendLine(indent + "\tstatic " + field.FieldType.ToParameterTypeName() + " get_" + field.Name + "();");
				sb.AppendLine(indent + "\tstatic void set_" + field.Name + "(" + field.FieldType.ToParameterTypeName() + " value);");
				sb.AppendLine();
			}
		}

		static void AddPropertyGenericImpl (Type type, StringBuilder sb, string indent)
		{
			var properties = type.GetProperties(BindingFlags.Public | BindingFlags.Instance).Where(x => !x.IsSpecialName);
			if (properties.Count() > 0)
			{
				sb.AppendLine(indent + "\t//Get Set Properties Methods");
			}
			foreach (var property in properties)
			{
				if (!IsCircularProperty (property)) {
					sb.AppendLine (indent + "\t//\tGet" + (property.CanWrite ? "/Set:" : ":") + property.Name);
					sb.AppendLine (indent + "\t" + property.PropertyType.ToParameterTypeName () + " get_" + property.Name + "(" + property.GetSignature (false) + ") const");
					sb.AppendLine (indent + "\t{");
					WriteInvoke (type, sb, indent, property.GetGetMethod (true));
					sb.AppendLine (indent + "\t}");
					if (property.CanWrite) {
						sb.AppendLine (indent + "\tvoid set_" + property.Name + "(" + property.GetSignature (true) + ")");
						sb.AppendLine (indent + "\t{");
						WriteInvoke (type, sb, indent, GetSetMethod (property));
						sb.AppendLine (indent + "\t}");
						sb.AppendLine (indent);
					}
					sb.AppendLine ();
				}
			}

			//Static
			properties = type.GetProperties(BindingFlags.Public | BindingFlags.Static).Where(x => !x.IsSpecialName);
			if (properties.Count() > 0)
			{
				sb.AppendLine(indent + "\t//Get Set Static Properties Methods");
			}
			foreach (var property in properties)
			{
				if (!IsCircularProperty (property)) {
					sb.AppendLine (indent + "\t//\tGet" + (property.CanWrite ? "/Set:" : ":") + property.Name);
					sb.AppendLine (indent + "\tstatic " + property.PropertyType.ToParameterTypeName () + " get_" + property.Name + "()");
					sb.AppendLine (indent + "\t{");
					WriteInvoke (type, sb, indent, property.GetGetMethod (true));
					sb.AppendLine (indent + "\t}");
					sb.AppendLine (indent);
					if (property.CanWrite) {
						sb.AppendLine (indent + "\tstatic void set_" + property.Name + "(" + property.PropertyType.ToParameterTypeName () + " value)");
						sb.AppendLine (indent + "\t{");
						WriteInvoke (type, sb, indent, GetSetMethod (property));
						sb.AppendLine (indent + "\t}");
						sb.AppendLine (indent);
					}
					sb.AppendLine ();
				}
			}
			if (properties.Count() > 0)
			{
				sb.AppendLine();
			}

			var fields = type.GetFields(BindingFlags.Public | BindingFlags.Instance).Where(x => !x.IsSpecialName);
			foreach (var field in fields)
			{
				sb.AppendLine(indent + "\t//\tGet/Set:" + field.Name);
				sb.AppendLine(indent + "\t" + field.FieldType.ToParameterTypeName() + " get_" + field.Name + "()");
				sb.AppendLine (indent + "\t{");
				WriteGetField (type, field, sb, indent + "\t");
				sb.AppendLine (indent + "\t}");
				sb.AppendLine (indent);
				if (!field.IsInitOnly) {
					sb.AppendLine (indent + "\tvoid set_" + field.Name + "(" + field.FieldType.ToParameterTypeName () + " value)");
					sb.AppendLine (indent + "\t{");
					WriteSetField(type, field, sb, indent + "\t");
					sb.AppendLine (indent + "\t}");
					sb.AppendLine (indent);
				}

				sb.AppendLine();
			}
			fields = type.GetFields(BindingFlags.Public | BindingFlags.Static).Where(x => !x.IsSpecialName);
			foreach (var field in fields)
			{
				sb.AppendLine(indent + "\t//\tGet/Set:" + field.Name);
				sb.AppendLine(indent + "\tstatic " + field.FieldType.ToParameterTypeName() + " get_" + field.Name + "()");
				sb.AppendLine (indent + "\t{");
				WriteGetField(type, field, sb, indent + "\t");
				sb.AppendLine (indent + "\t}");
				sb.AppendLine (indent);
				if (!field.IsInitOnly) {
					sb.AppendLine (indent + "\tstatic void set_" + field.Name + "(" + field.FieldType.ToParameterTypeName () + " value)");
					sb.AppendLine (indent + "\t{");
					WriteSetField(type, field, sb, indent + "\t");
					sb.AppendLine (indent + "\t}");
					sb.AppendLine (indent);
				}
				sb.AppendLine();
			}
		}


		static void AddProtectedMembers (Type type, StringBuilder sb, string indent)
		{
			if (type == typeof(object)) {
				sb.AppendLine (indent + "\tMonoObject *__native_object__;");
				sb.AppendLine (indent + "\tmscorlib::NativeTypeInfo *__native_type_info__;");
			}
			else if (type.IsInterface) {
				if (!type.GetInterfaces ().Any ()) {
					sb.AppendLine (indent + "\tMonoObject *" + type.ToInterfaceVariableName() + ";");
				}
			}
		}

		static void AddPrivateMembers (Type type, StringBuilder sb, string indent)
		{
			
		}

		static bool IsCircularProperty (PropertyInfo property)
		{
			if (property.DeclaringType == typeof(System.Threading.Tasks.Task<>)
			    && property.Name == "Factory")
				return true;

			if (property.GetGetMethod (true).IsStatic && property.GetIndexParameters ().Any ())
				return true;

			return false;
		}

		static void WriteReturnArray (StringBuilder sb, string indent, Type arrayType)
		{
			//sb.AppendLine (indent + "\tif (__result__ == NULL) return " + arrayType.ToParameterTypeName () + "(0);");
			sb.AppendLine (indent + "\tMonoArray *__array_ptr__ = (MonoArray*)__result__;");
			sb.AppendLine (indent + "\tuintptr_t __array_length__ = mono_array_length(__array_ptr__);");
			sb.AppendLine (indent + "\t" + arrayType.ToParameterTypeName () + " __array_result__(__array_length__);");
			sb.AppendLine (indent + "\tfor(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)");
			sb.AppendLine (indent + "\t{");
			sb.AppendLine (indent + "\t\tMonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);");
			if (arrayType.GetElementType ().IsReallyPrimitive() || arrayType.GetElementType ().IsPointer) {
				sb.AppendLine (indent + "\t\t__array_result__.push_back((" + arrayType.GetElementType ().ToParameterTypeName () + "*)mono_object_unbox(__array_item__));");
			}
			else {
				sb.AppendLine (indent + "\t\t__array_result__.push_back(new " + arrayType.GetElementType ().ToParameterTypeName () + "(__array_item__));");
			}
			sb.AppendLine (indent + "\t}");
			sb.AppendLine (indent + "\treturn __array_result__;");
		}

		private static void WriteInvoke(Type type, StringBuilder sb, string indent, MethodInfo method, bool withNativeCharPtr = false)
		{
			indent += "\t";
			if (WriteCustomInvoke (type, sb, indent, method))
				return;
			var parameters = method.GetParameters();
			if (parameters.Count() > 0)
			{
				WriteParameters (type, parameters, sb, indent, false, withNativeCharPtr);
			}
			if (method.DeclaringType.IsGenericType)
			{
				var genericTypes = method.DeclaringType.GetGenericArguments();
				sb.AppendLine(indent + "\tMonoType *__generic_types__[" + genericTypes.Count() + "];");
				for (int i = 0; i < genericTypes.Count(); i++)
				{
					sb.AppendLine(indent + "\t__generic_types__[" + i + "] = Global::GetType(typeid(" + genericTypes[i].Name + ").name());");
				}
				if (method.IsGenericMethod)
				{
					var genericTypesMethod = method.GetGenericArguments();
					sb.AppendLine (indent + "\tMonoType *__generic_types__method__[" + genericTypesMethod.Count () + "];");
					for (int j = 0; j < genericTypesMethod.Count (); j++) {
						sb.AppendLine (indent + "\t__generic_types__method__[" + j + "] = Global::GetType(typeid(" + genericTypesMethod[j].Name + ").name());");
					}
					sb.AppendLine(indent + "\t" + (method.ReturnType != typeof(void) ? "MonoObject *__result__ = " : "") + "Global::InvokeMethod(\"" + method.DeclaringType.Assembly.GetName().Name + "\", \"" + method.DeclaringType.Namespace + "\", \"" + method.DeclaringType.FullName.Replace(method.DeclaringType.Namespace + ".", "") + "\", " + genericTypes.Count() + ", __generic_types__, \"" + method.Name + "\", " + (method.IsStatic ? "NullMonoObject" : GetNativeObjectPrefix(type) + type.ToNativeObjectVariable()) + ", " + genericTypesMethod.Count() + ", __generic_types__method__, " + parameters.Count() + ", " + (parameters.Count() == 0 ? "NULL" : "__parameter_types__") + ", " + (parameters.Count() == 0 ? "NULL" : "__parameters__") + ", NULL);");
					if (method.ReturnType != typeof(void))
					{
						if (method.ReturnType == typeof(void*)) {
							sb.AppendLine (indent + "\treturn mono_object_unbox (__result__);");
						}
						else 
							sb.AppendLine(indent + "\treturn " + (method.Name == "GetEnumerator" ? "new " : "") + (method.ReturnType.IsReallyEnum() || method.ReturnType.IsReallyPrimitive() ? "*(" + method.ReturnType.SanitizedName() + "*)mono_object_unbox(__result__)" : method.ReturnType.SanitizedName() + "(__result__)") + ";");
					}
				}
				else
				{
					sb.AppendLine(indent + "\t" + (method.ReturnType != typeof(void) ? "MonoObject *__result__ = " : "") + "Global::InvokeMethod(\"" + method.DeclaringType.Assembly.GetName().Name + "\", \"" + method.DeclaringType.Namespace + "\", \"" + method.DeclaringType.FullName.Replace(method.DeclaringType.Namespace + ".", "") + "\", " + genericTypes.Count() + ", __generic_types__, \"" + method.Name + "\", " + (method.IsStatic ? "NullMonoObject" : GetNativeObjectPrefix(type) + type.ToNativeObjectVariable()) + ", " + parameters.Count() + ", " + (parameters.Count() == 0 ? "NULL" : "__parameter_types__") + ", " + (parameters.Count() == 0 ? "NULL" : "__parameters__") + ", NULL);");
					if (method.ReturnType != typeof(void))
					{
						if (method.ReturnType.IsArray) {
							var arrayType = method.ReturnType;
							WriteReturnArray (sb, indent, arrayType);
						} else if (method.ReturnType == typeof(void*)) {
							sb.AppendLine (indent + "\treturn mono_object_unbox (__result__);");
						}
						else {
							sb.AppendLine (indent + "\treturn " + (method.Name == "GetEnumerator" ? "new " : "") + (method.ReturnType.IsReallyEnum() || method.ReturnType.IsReallyPrimitive() ? "*(" + method.ReturnType.SanitizedName () + "*)mono_object_unbox(__result__)" : method.ReturnType.SanitizedName () + "(__result__)") + ";");
						}
					}
				}
			}
			else
			{
				if (method.IsGenericMethod) {
					var genericTypes = method.GetGenericArguments();
					sb.AppendLine (indent + "\tMonoType *__generic_types__[" + genericTypes.Count () + "];");
					for (int j = 0; j < genericTypes.Count (); j++) {
						sb.AppendLine (indent + "\t__generic_types__[" + j + "] = Global::GetType(typeid(" + genericTypes[j].Name + ").name());");
					}
					sb.AppendLine(indent + "\t" + (method.ReturnType != typeof(void) ? "MonoObject *__result__ = " : "") + "Global::InvokeMethod(\"" + method.DeclaringType.Assembly.GetName().Name + "\", \"" + method.DeclaringType.Namespace + "\", \"" + method.DeclaringType.FullName.Replace(method.DeclaringType.Namespace + ".", "") + "\", 0, NULL, \"" + method.Name + "\", " + (method.IsStatic ? "NullMonoObject" : GetNativeObjectPrefix(type) + type.ToNativeObjectVariable()) + ", " + genericTypes.Count() + ", __generic_types__, " + parameters.Count() + ", " + (parameters.Count() == 0 ? "NULL" : "__parameter_types__") + ", " + (parameters.Count() == 0 ? "NULL" : "__parameters__") + ", NULL);");
					if (method.ReturnType != typeof(void))
					{
						if (method.ReturnType.IsArray) {
							var arrayType = method.ReturnType;
							WriteReturnArray (sb, indent, arrayType);
						} else if (method.ReturnType == typeof(void*) || method.ReturnType == typeof(IntPtr)) {
							sb.AppendLine (indent + "\treturn mono_object_unbox (__result__);");
						}
						else {
							sb.AppendLine (indent + "\treturn " + (method.Name == "GetEnumerator" ? "new " : "") + (method.ReturnType.IsReallyEnum() || method.ReturnType.IsReallyPrimitive() ? "*(" + method.ReturnType.SanitizedName () + "*)mono_object_unbox(__result__)" : method.ReturnType.SanitizedName () + "(__result__)") + ";");
						}
					}
				}
				else {
					sb.AppendLine (indent + "\t" + (method.ReturnType != typeof(void) ? "MonoObject *__result__ = " : "") + "Global::InvokeMethod(\"" + method.DeclaringType.Assembly.GetName ().Name + "\", \"" + method.DeclaringType.Namespace + "\", \"" + method.DeclaringType.FullName.Replace (method.DeclaringType.Namespace + ".", "") + "\", 0, NULL, \"" + method.Name + "\", " + (method.IsStatic ? "NullMonoObject" : type.ToNativeObjectVariable ()) + ", " + parameters.Count () + ", " + (parameters.Count () == 0 ? "NULL" : "__parameter_types__") + ", " + (parameters.Count () == 0 ? "NULL" : "__parameters__") + ", NULL);");
					if (method.ReturnType != typeof(void)) {
						if (method.ReturnType.IsDelegate ()) {
							sb.AppendLine (indent + "\tvoid* __delegate_result__ = mono_object_unbox(__result__);");
							sb.AppendLine (indent + "\treturn " + method.ReturnType.SanitizedName () + "();");
						} else if (method.ReturnType.IsArray) {
							var arrayType = method.ReturnType;

							WriteReturnArray (sb, indent, arrayType);
						} else if (method.ReturnType == typeof(void*) || method.ReturnType == typeof(IntPtr)) {
							sb.AppendLine (indent + "\treturn mono_object_unbox (__result__);");
						} else if (method.ReturnType.IsReallyEnum ()) {
							sb.AppendLine (indent + "\treturn static_cast<" + method.ReturnType.SanitizedName () + ">(*(mscorlib::System::Int32*)mono_object_unbox(__result__)" + ");");
						} else {
							sb.AppendLine (indent + "\treturn " + (method.Name == "GetEnumerator" || method.ReturnType.Name.EndsWith ("*") ? "new " : "") + (method.ReturnType.IsReallyEnum () || method.ReturnType.IsReallyPrimitive () ? "*(" + method.ReturnType.SanitizedName () + "*)mono_object_unbox(__result__)" : method.ReturnType.SanitizedName ().Replace ("*", "") + "(__result__)") + ";");
						}
					}
				}
			}
		}

		private static void WriteParameters (Type type, ParameterInfo[] parameters, StringBuilder sb, string indent, bool isConstructor = false, bool withNativeCharPtr = false)
		{
			sb.AppendLine (indent + "\tMonoType *__parameter_types__[" + parameters.Count () + "];");
			sb.AppendLine (indent + "\tvoid *__parameters__[" + parameters.Count () + "];");
			for (int i = 0; i < parameters.Count (); i++) {
				var parameter = parameters [i];
				if (parameter.ParameterType.IsArray) {
					var arrayType = parameter.ParameterType.GetElementType ();
					sb.AppendLine (indent + "\t__parameter_types__[" + i + "] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType(\"" + arrayType.Assembly.GetName ().Name + "\", \"" + arrayType.Namespace + "\", \"" + arrayType.Name + "\")), 1));");
				}
				else {
					if (isConstructor) {
						if (parameter.ParameterType.IsGenericType && !type.IsGenericType) {
							var genericTypes = parameter.ParameterType.GetGenericArguments ();
							sb.AppendLine (indent + "\tMonoType *__generic_types__" + parameter.GetName () + "__[" + genericTypes.Count () + "];");
							for (int j = 0; j < genericTypes.Count (); j++) {
								sb.AppendLine (indent + "\t__generic_types__" + parameter.GetName () + "__[" + j + "] = Global::GetType(\"" + parameter.ParameterType.Assembly.GetName ().Name + "\", \"" + parameter.ParameterType.Namespace + "\", \"" + parameter.ParameterType.Name + "\");");
							}
							sb.AppendLine (indent + "\t__parameter_types__[" + i + "] = Global::GetType(\"" + parameter.ParameterType.Assembly.GetName ().Name + "\", \"" + parameter.ParameterType.Namespace + "\", \"" + parameter.ParameterType.Name + "\", " + genericTypes.Count () + ",__generic_types__" + parameter.GetName () + "__);");
						} else {
							sb.AppendLine (indent + "\t__parameter_types__[" + i + "] = Global::GetType(\"" + parameter.ParameterType.Assembly.GetName ().Name + "\", \"" + parameter.ParameterType.Namespace + "\", \"" + parameter.ParameterType.Name + "\");");
						}
					} else if (parameter.ParameterType == typeof(string) && withNativeCharPtr) {
						sb.AppendLine (indent + "\t__parameter_types__[" + i + "] = Global::GetType(\"mscorlib\", \"System\", \"String\");");
					} else {
						sb.AppendLine (indent + "\t__parameter_types__[" + i + "] = Global::GetType(typeid(" + parameter.GetName () + ").name());");
					}
				}
			}
			for (int i = 0; i < parameters.Count (); i++) {
				var parameter = parameters [i];
				if (parameter.ParameterType == typeof(string) && withNativeCharPtr) {
					sb.AppendLine (indent + "\t__parameters__[" + i + "] = mono_string_new(Global::GetDomain(), " + parameter.GetName () + ");");
				} else if (parameter.ParameterType == typeof(bool)) {
					sb.AppendLine (indent + "\t__parameters__[" + i + "] = reinterpret_cast<void*>(" + parameter.GetName () + ");");
				} else if (parameter.ParameterType.IsReallyEnum ()) {
					sb.AppendLine (indent + "\tmscorlib::System::Int32 __param_" + parameter.GetName () + "__ = " + parameter.GetName () + ";");
					sb.AppendLine (indent + "\t__parameters__[" + i + "] = &__param_" + parameter.GetName () + "__;");
				} else if (parameter.ParameterType.IsArray) {
					var arrayType = parameter.ParameterType.GetElementType ();
					if (arrayType == typeof(char) || arrayType.IsReallyPrimitive ()) {
						sb.AppendLine (indent + "\t__parameters__[" + i + "] = Global::FromPrimitiveArray<" + parameter.ParameterType.GetElementType ().SanitizedName () + "*>(" + parameter.GetName () + ", typeid(" + arrayType.SanitizedName () + ").name());");
					} else {
						if (isConstructor) {
							sb.AppendLine (indent + "\t__parameters__[" + i + "] = " + (arrayType.IsDelegate () ? "NULL; //" : "") + "Global::FromArray<" + parameter.ParameterType.GetElementType ().SanitizedName () + "*>(" + parameter.GetName () + ", \"" + arrayType.Assembly.GetName ().Name + "\", \"" + arrayType.Namespace + "\", \"" + arrayType.Name + "\");");
						} else {
							sb.AppendLine (indent + "\t__parameters__[" + i + "] = " + (arrayType.IsDelegate () ? "NULL; //" : "") + "Global::FromArray<" + parameter.ParameterType.GetElementType ().SanitizedName () + "*>(" + parameter.GetName () + ", typeid(" + arrayType.SanitizedName () + ").name());");
						}
					}
				} else if (parameter.ParameterType == typeof(IntPtr) || parameter.ParameterType.IsPointer || parameter.ParameterType.Name.EndsWith ("*")) {
					sb.AppendLine (indent + "\t__parameters__[" + i + "] = " + parameter.GetName () + (parameter.ParameterType.IsReallyPrimitive () ? "" : "->GetNativeObject()") + ";");
				} else {
					sb.AppendLine (indent + "\t__parameters__[" + i + "] = " + (parameter.ParameterType.IsDelegate () || parameter.ParameterType.IsReallyEnum () || parameter.ParameterType.IsReallyPrimitive () ? "&" : "(MonoObject*)") + parameter.GetName () + ";");
				}
			}
		}

		static void RenderEnum (Type type, StringBuilder sb, string indent)
		{
			sb.AppendLine(indent + "class " + type.ClassName());
			sb.AppendLine(indent + "{");
			sb.AppendLine(indent + "public:");
			sb.AppendLine(indent + "\tenum __ENUM__");
			sb.AppendLine(indent + "\t{");
			var enumNames = Enum.GetNames(type);
			var enumValues = Enum.GetValues(type);
			for(int i=0;i<enumNames.Length;i++)
			{
				var enumName = enumNames[i];
				sb.AppendLine(indent + "\t\t" + enumName + " = " + Convert.ToInt64(enumValues.GetValue(i)) + ",");
			}
			sb.AppendLine(indent + "\t};");
			sb.AppendLine(indent + "};");
		}

		private static void RenderImpl (Type type)
		{
			var sb = new StringBuilder ();
			AddImplIncludes (type, sb);
			NameSpaceWriter.Write (type, sb, (targetType, sbuilder, indent) => {
				AddStaticMembersImpl(targetType, sbuilder, indent);
				AddMethodImpl (targetType, sbuilder, indent);
				AddPropertiesImpl(targetType, sbuilder, indent);
				AddNestedImpl(targetType, sbuilder, indent);
			});

			FileGenerator.SaveImpl (type, sb.ToString ());
		}

		private static void AddImplIncludes (Type type, StringBuilder sb)
		{
			sb.AppendLine ("#include <" + type.GetTypePath () + ".h>");
			HashSet<Type> types = new HashSet<Type> ();
			AddIncludes (type, types);
			types.RemoveWhere (x => x == type || x == typeof(char));
			if (type == typeof(System.Threading.Tasks.Task))
				types.RemoveWhere (x => x == typeof(System.Threading.Tasks.Task<>));
			if (type == typeof(System.Collections.Concurrent.Partitioner))
				types.RemoveWhere (x => x == typeof(System.Collections.Concurrent.OrderablePartitioner<>));
			ForwardManager.IncludeForwaredTypes (type, sb, types);
			sb.AppendLine ();
			sb.AppendLine ();
		}

		static void AddNestedImpl (Type type, StringBuilder sb, string indent)
		{
			var nestedTypes = type.GetNestedTypes ();
			foreach (var nestedType in nestedTypes) {
				if (nestedType.IsEnum || nestedType.IsDelegate()) continue;
				sb.AppendLine (indent + "//" + nestedType.ClassName () + " Nested Type Implementation");
				AddMethodImpl (nestedType, sb, indent, type.ClassName() + "::");
				AddPropertiesImpl(nestedType, sb, indent, type.ClassName() + "::");
			}

		}

		static void AddMethodImpl (Type type, StringBuilder sb, string indent, string classPrefix = "")
		{

			var methods = type.GetMethods(BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance | BindingFlags.Static).Where(x => x.IsPublic && !x.IsSpecialName);
			if (methods.Any ()) {
				sb.AppendLine(indent + "//Public Methods");
			}
			foreach (var method in methods)
			{
				if (method.Name == "Finalize") continue;
				if (method.DeclaringType != type) continue;
				if (method.IsGenericMethod || IsCircularMethod(method))
					continue;
				sb.AppendLine(indent + "" + method.ReturnType.ToParameterTypeName().Trim() + (method.Name == "GetEnumerator" ? "* " : " ") + classPrefix + type.ClassName() + "::" + method.Name + "(" + method.GetSignature() + ")");
				sb.AppendLine(indent + "{");
				WriteInvoke(type, sb, indent, method);
				sb.AppendLine(indent + "}");
				sb.AppendLine ();

				if (method.GetParameters ().Any (x => x.ParameterType == typeof(string))) {
					sb.AppendLine(indent + "" + method.ReturnType.ToParameterTypeName().Trim() + (method.Name == "GetEnumerator" ? "* " : " ") + classPrefix + type.ClassName() + "::" + method.Name + "(" + method.GetSignature().Replace("mscorlib::System::String ", "const char *") + ")");
					sb.AppendLine(indent + "{");
					WriteInvoke(type, sb, indent, method, true);
					sb.AppendLine(indent + "}");
					sb.AppendLine ();
				}

			}
		}

		static void AddPropertiesImpl (Type type, StringBuilder sb, string indent, string classPrefix = "")
		{
			var properties = type.GetProperties(BindingFlags.Public | BindingFlags.Instance).Where(x => !x.IsSpecialName);
			if (properties.Count() > 0)
			{
				sb.AppendLine(indent + "//Get Set Properties Methods");
			}
			foreach (var property in properties)
			{
				if (IsCircularProperty (property))
					continue;
				sb.AppendLine(indent + "//\tGet" + (property.CanWrite ? "/Set:" : ":") + property.Name);
				sb.AppendLine(indent + property.PropertyType.ToParameterTypeName() + " " + classPrefix + type.ClassName() + "::get_" + property.Name + "(" + property.GetSignature(false) + ") const");
				sb.AppendLine(indent + "{");
				WriteInvoke(type, sb, indent.Substring(0, indent.Length - 1), property.GetGetMethod());
				sb.AppendLine(indent + "}");
				sb.AppendLine();
				if (property.CanWrite)
				{
					sb.AppendLine(indent + "void " + classPrefix + type.ClassName() + "::set_" + property.Name + "(" + property.GetSignature(true) + ")");
					sb.AppendLine(indent + "{");
					WriteInvoke(type, sb, indent.Substring(0, indent.Length - 1), GetSetMethod(property));
					sb.AppendLine(indent + "}");
					sb.AppendLine();
				}
				sb.AppendLine();
			}

			//Static
			properties = type.GetProperties(BindingFlags.Public | BindingFlags.Static).Where(x => !x.IsSpecialName);
			if (properties.Count() > 0)
			{
				sb.AppendLine(indent + "//Get Set Static Properties Methods");
			}
			foreach (var property in properties)
			{
				if (IsCircularProperty (property))
					continue;
				sb.AppendLine(indent + "//\tGet" + (property.CanWrite ? "/Set:" : ":") + property.Name);
				sb.AppendLine(indent + property.PropertyType.ToParameterTypeName() + " " + classPrefix + type.ClassName() + "::get_" + property.Name + "(" + property.GetSignature(false) + ")");
				sb.AppendLine(indent + "{");
				WriteInvoke(type, sb, indent.Substring(0, indent.Length - 1), property.GetGetMethod());
				sb.AppendLine(indent + "}");
				sb.AppendLine();
				sb.AppendLine(indent + "void " + classPrefix + type.ClassName() + "::set_" + property.Name + "(" + property.GetSignature(true) + ")");
				sb.AppendLine(indent + "{");
				if (property.CanWrite) {
					WriteInvoke (type, sb, indent.Substring (0, indent.Length - 1), GetSetMethod (property));
				} else {
					sb.AppendLine (indent + "\tthrow;");
				}
				sb.AppendLine(indent + "}");
				sb.AppendLine();
				sb.AppendLine();
			}
			if (properties.Count() > 0)
			{
				sb.AppendLine();
			}
			var fields = type.GetFields(BindingFlags.Public | BindingFlags.Instance).Where(x => !x.IsSpecialName);
			foreach (var field in fields)
			{
				sb.AppendLine(indent + "//\tGet/Set:" + field.Name);
				sb.AppendLine(indent + field.FieldType.ToParameterTypeName() + classPrefix + type.ClassName() + "::get_" + field.Name + "() const");
				sb.AppendLine(indent + "{");
				WriteGetField(type, field, sb, indent);
				sb.AppendLine(indent + "}");
				sb.AppendLine();
				if (!field.IsInitOnly)
				{
					sb.AppendLine(indent + "void " + classPrefix + type.ClassName() + "::set_" + field.Name + "(" + field.FieldType.ToParameterTypeName() + " value)");
					sb.AppendLine(indent + "{");
					WriteSetField(type, field, sb, indent);
					sb.AppendLine(indent + "}");
				}
				sb.AppendLine();
			}
			fields = type.GetFields(BindingFlags.Public | BindingFlags.Static).Where(x => !x.IsSpecialName);
			foreach (var field in fields)
			{
				sb.AppendLine(indent + "\t//\tGet/Set:" + field.Name);
				sb.AppendLine(indent + field.FieldType.ToParameterTypeName() + classPrefix + type.ClassName() + "::get_" + field.Name + "()");
				sb.AppendLine(indent + "{");
				WriteGetField(type, field, sb, indent);
				sb.AppendLine(indent + "}");
				sb.AppendLine();
				sb.AppendLine(indent + "void " + classPrefix + type.ClassName() + "::set_" + field.Name + "(" + field.FieldType.ToParameterTypeName() + " value)");
				sb.AppendLine(indent + "{");
				if (!field.IsInitOnly) {
					WriteSetField (type, field, sb, indent);
				}
				else {
					sb.AppendLine (indent + "\tthrow;");
				}
				sb.AppendLine(indent + "}");
				sb.AppendLine();
			}
		}

		private static void AddStaticMembersImpl (Type type, StringBuilder sb, string indent)
		{
			var properties = type.GetProperties (BindingFlags.Public | BindingFlags.Static);
			foreach (var property in properties) {
				if (IsCircularProperty (property))
					continue;
				sb.AppendLine (indent + "Property<" + property.PropertyType.ToParameterTypeName() + ", " + type.SanitizedName() + "> " + type.SanitizedName() + "::" + property.Name + "(&" + type.SanitizedName () + "::get_" + property.Name + ", &" + type.SanitizedName () + "::set_" + property.Name + ");");
			}
		}

		private static MethodInfo GetSetMethod(PropertyInfo property)
		{
			MethodInfo method = property.GetSetMethod ();
			if (method == null) {
				method = property.DeclaringType.GetProperty (property.Name).GetSetMethod (true);
			}
			return method;
		}

		private static void WriteSetField(Type type, FieldInfo field, StringBuilder sb, string indent)
		{
			if (field.IsStatic)
			{

			}
			else
			{

			}
		}

		private static void WriteGetField(Type type, FieldInfo field, StringBuilder sb, string indent)
		{
			if (field.IsStatic) {
				if (field.DeclaringType.IsGenericType) {
					var genericTypes = field.DeclaringType.GetGenericArguments ();
					sb.AppendLine (indent + "\tMonoType *__generic_types__[" + genericTypes.Count () + "];");
					for (int i = 0; i < genericTypes.Count (); i++) {
						sb.AppendLine (indent + "\t__generic_types__[" + i + "] = Global::GetType(typeid(" + genericTypes [i].Name + ").name());");
					}
					if (field.FieldType.IsReallyEnum()) {
						sb.AppendLine (indent + "\treturn static_cast<" + field.FieldType.ToParameterTypeName().Trim() + ">(Global::GetFieldInt32Value(\"" + type.Assembly.GetName ().Name + "\", \"" + type.Namespace + "\", \"" + type.Name + "\", " + genericTypes.Count () + ", __generic_types__, \"" + field.Name + "\"));");
					} else if (field.FieldType.IsReallyPrimitive()) {
						sb.AppendLine (indent + "\treturn Global::GetField" + field.FieldType.Name.Replace ("&", "") + "Value(\"" + type.Assembly.GetName ().Name + "\", \"" + type.Namespace + "\", \"" + type.Name + "\", " + genericTypes.Count () + ", __generic_types__, \"" + field.Name + "\");");
					} else if (field.FieldType == typeof(string)) {
						sb.AppendLine (indent + "\treturn mscorlib::System::String((MonoObject*)Global::GetFieldStringValue(\"" + type.Assembly.GetName ().Name + "\", \"" + type.Namespace + "\", \"" + type.Name + "\", " + genericTypes.Count () + ", __generic_types__, \"" + field.Name + "\"));");
					} else if (field.FieldType.IsDelegate ()) {
						sb.AppendLine (indent + "\tMonoObject *__result__ = Global::GetFieldValue(\"" + type.Assembly.GetName ().Name + "\", \"" + type.Namespace + "\", \"" + type.Name + "\", " + genericTypes.Count () + ", __generic_types__, \"" + field.Name + "\");");
						sb.AppendLine (indent + "\treturn " + field.FieldType.ToParameterTypeName () + "();");
					}  else if (field.FieldType.IsArray) {
						sb.AppendLine (indent + "\tMonoObject *__result__ = Global::GetFieldValue(\"" + type.Assembly.GetName ().Name + "\", \"" + type.Namespace + "\", \"" + type.Name + "\", 0, NULL, \"" + field.Name + "\");");
						WriteReturnArray (sb, indent, field.FieldType);
					} else {
						sb.AppendLine (indent + "\treturn Global::GetFieldValue(\"" + type.Assembly.GetName ().Name + "\", \"" + type.Namespace + "\", \"" + type.Name + "\", " + genericTypes.Count () + ", __generic_types__, \"" + field.Name + "\");");
					}
				} else {
					if (field.FieldType.IsReallyEnum()) {
						sb.AppendLine (indent + "\treturn static_cast<" + field.FieldType.ToParameterTypeName().Trim() + ">(Global::GetFieldInt32Value(\"" + type.Assembly.GetName ().Name + "\", \"" + type.Namespace + "\", \"" + type.Name + "\", 0, NULL, \"" + field.Name + "\"));");
					} else if (field.FieldType.IsReallyPrimitive()) {
						sb.AppendLine (indent + "\treturn Global::GetField" + field.FieldType.Name.Replace ("&", "") + "Value(\"" + type.Assembly.GetName ().Name + "\", \"" + type.Namespace + "\", \"" + type.Name + "\", 0, NULL, \"" + field.Name + "\");");
					} else if (field.FieldType == typeof(string)) {
						sb.AppendLine (indent + "\treturn mscorlib::System::String((MonoObject*)Global::GetFieldStringValue(\"" + type.Assembly.GetName ().Name + "\", \"" + type.Namespace + "\", \"" + type.Name + "\", 0, NULL, \"" + field.Name + "\"));");
					} else if (field.FieldType.IsDelegate()) {
						sb.AppendLine (indent + "\tMonoObject *__result__ = Global::GetFieldValue(\"" + type.Assembly.GetName ().Name + "\", \"" + type.Namespace + "\", \"" + type.Name + "\", 0, NULL, \"" + field.Name + "\");");
						sb.AppendLine (indent + "\treturn " + field.FieldType.ToParameterTypeName () + "();");
					} else if (field.FieldType.IsArray) {
						sb.AppendLine (indent + "\tMonoObject *__result__ = Global::GetFieldValue(\"" + type.Assembly.GetName ().Name + "\", \"" + type.Namespace + "\", \"" + type.Name + "\", 0, NULL, \"" + field.Name + "\");");
						WriteReturnArray (sb, indent, field.FieldType);
					} else {
						sb.AppendLine (indent + "\treturn Global::GetFieldValue(\"" + type.Assembly.GetName ().Name + "\", \"" + type.Namespace + "\", \"" + type.Name + "\", 0, NULL, \"" + field.Name + "\");");
					}
				}   
			}
			else if (field.FieldType.IsReallyEnum()) {
				sb.AppendLine (indent + "\treturn static_cast<" + field.FieldType.ToParameterTypeName().Trim() + ">(Global::GetFieldInt32Value(__native_object__, \"" + field.Name + "\"));");
			}
			else if (field.FieldType.IsReallyPrimitive())
			{
				sb.AppendLine (indent + "\treturn Global::GetField" + field.FieldType.Name.Replace("&", "") + "Value(__native_object__, \"" + field.Name + "\");");
			}
			else if (field.FieldType == typeof(string))
			{
				sb.AppendLine(indent + "\treturn mscorlib::System::String((MonoObject*)Global::GetFieldStringValue(__native_object__, \"" + field.Name + "\"));");
			} else if (field.FieldType.IsDelegate()) {
				sb.AppendLine (indent + "\tMonoObject *__result__ = Global::GetFieldValue(\"" + type.Assembly.GetName ().Name + "\", \"" + type.Namespace + "\", \"" + type.Name + "\", 0, NULL, \"" + field.Name + "\");");
				sb.AppendLine (indent + "\treturn " + field.FieldType.ToParameterTypeName () + "();");
			} else if (field.FieldType.IsArray) {
				sb.AppendLine (indent + "\tMonoObject *__result__ = Global::GetFieldValue(\"" + type.Assembly.GetName ().Name + "\", \"" + type.Namespace + "\", \"" + type.Name + "\", 0, NULL, \"" + field.Name + "\");");
				WriteReturnArray (sb, indent, field.FieldType);
			} else
			{
				sb.AppendLine(indent + "\treturn Global::GetFieldValue(__native_object__, \"" + field.Name + "\");");
			}
		}

		static bool WriteCustomInvoke (Type type, StringBuilder sb, string indent, MethodInfo method)
		{
			if (type == typeof(object) && method.Name == "GetHashCode") {
				sb.AppendLine (indent + "return mono_object_hash(__native_object__);");
				return true;
			}

			if (type == typeof(object) && method.Name == "ToString") {
				sb.AppendLine (indent + "return mscorlib::System::String((MonoObject*)mono_object_to_string(__native_object__, NULL));");
				return  true;
			}


			if (type == typeof(string) && method.Name == "Equals" && method.GetParameters().Count() == 1 && method.GetParameters()[0].ParameterType == typeof(string)) {
				sb.AppendLine (indent + "return mono_string_equal(mono_object_to_string(__native_object__, NULL), (MonoString*)value);");
				return true;
			}


			if (type == typeof(string) && method.Name == "Equals" && method.GetParameters().All(x => x.ParameterType == typeof(string))) {
				sb.AppendLine (indent + "return mono_string_equal((MonoString*)a, (MonoString*)b);");
				return true;
			}

			if (type == typeof(Pointer) && method.Name == "Unbox") {
				sb.AppendLine (indent + "return mono_object_unbox((MonoObject*)ptr);");
				return true;
			}

			if (type == typeof(Pointer) && method.Name == "Box") {
				sb.AppendLine (indent + "return mscorlib::System::Object(mono_value_box(Global::GetDomain(), mono_type_get_class(mono_reflection_type_get_type((MonoReflectionType*)type.GetNativeObject())), ptr));");
				return true;
			}

			return false;
		}

		static string GetNativeObjectPrefix (Type type)
		{
			if (type == typeof(System.Collections.ObjectModel.KeyedCollection<,>))
				return type.BaseType.SanitizedName () + "::";

			return string.Empty;
		}
	}
}

