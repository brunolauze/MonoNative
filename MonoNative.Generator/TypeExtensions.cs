using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MonoNative.Generator
{
    public static class TypeExtensions
    {
        public static string SanitizedName(this Type type)
        {
            if (type.Name == "Void") return "void";
			if (type.IsDelegate ()) {
				return "mscorlib::Callback<" + GetDelegateSignature(type) + "> ";
			}
            if (type.IsGenericType)
            {
                int index = type.Name.IndexOf("`");
				if (type.IsNested) {
					return type.DeclaringType.SanitizedName()+ "::" + (index == -1 ? FixTypeName(type) : FixTypeName(type).Substring(0, type.Name.IndexOf("`"))) + "<" + string.Join(",", type.GetGenericArguments().Select(x => x.FullName == null ? x.Name : x.Assembly.GetName().Name + "::" + x.FullName.Replace(x.Namespace, "").Replace(".", "::").Replace("+", "::"))) + ">";
				}
				return type.Assembly.GetName().Name + "::" + type.Namespace.Replace(".", "::") + "::" + (index == -1 ? FixTypeName(type) : FixTypeName(type).Substring(0, type.Name.IndexOf("`"))) + "<" + string.Join(",", type.GetGenericArguments().Select(x => x.FullName == null ? x.Name : x.SanitizedName() /*x.Assembly.GetName().Name + "::" + x.FullName.Replace(".", "::").Replace("+", "::") */)) + ">";
            }
			if (type.FullName == null) return type.Name.Replace("&", "");
			if (type.IsNested || type.FullName.Contains("+")) {
				return FixNestedTypeName(type.Assembly.GetName().Name + "::" + type.FullName.Replace(".", "::").Replace("+", "::").Replace("[]", "**") + (type.IsReallyEnum() ? "::__ENUM__" : ""));
			}
			return type.Assembly.GetName().Name + "::" + type.Namespace.Replace(".", "::") + "::" + FixTypeName(type) + (type.IsReallyEnum() ? "::__ENUM__" : "");
        }

		static string FixNestedTypeName (string str)
		{
			return str.Replace("::ConfiguredTaskAwaitable::", "::ConfiguredTaskAwaitableBase::");
		}

		private static string FixTypeName(Type type)
		{
			if (!type.IsGenericType) {
				if (Type.GetType (type.FullName + "`1") != null) {
					if (type.IsInterface) {
						return "IObject" + type.Name.Substring(1);
					}
					return type.Name + "Base";
				}
			}
			/*
			if (type == typeof(IComparable))
				return "IObjectComparable";
			if (type == typeof(System.Threading.Tasks.Task))
				return "ObjectTask";
			if (type == typeof(System.Threading.Tasks.TaskFactory))
				return "ObjectTaskFactory";
			if (type == typeof(System.Threading.Tasks.TaskAwaiter))
				return "ObjectTaskFactory";
			*/
			return type.Name.Replace("&", "").Replace("[]", "*");
		}

        public static string ClassName(this Type type)
        {
			if (!type.IsGenericType) {
				if (Type.GetType (type.FullName + "`1") != null) {
					if (type.IsInterface) {
						return "IObject" + type.Name.Substring(1);
					}
					return type.Name + "Base";
				}
			}
            if (type.IsGenericType)
            {
                int index = type.Name.IndexOf("`");
                return (index == -1 ? type.Name : type.Name.Substring(0, type.Name.IndexOf("`")));
            }
			return FixTypeName(type);
        }

        public static string SanitizedReference(this Type type)
        {
            if (type.IsArray) return " ";
            if (type.Name == "Void") return " ";
            if (type.IsReallyPrimitive()) return " ";
            return type.IsReallyPrimitive() || type.IsPointer || type.IsReallyEnum() ? " " : " ";
        }

        public static bool IsDelegate(this Type type)
        {
            return typeof(MulticastDelegate).IsAssignableFrom(type.BaseType);
        }

        public static string ToParameterTypeName(this Type type)
        {
			if (type == typeof(void*))
				return "void*";
			if (type.Name.StartsWith("T[]")) return "std::vector<T*> ";
            if (type.IsArray)
            {
                if (type == typeof(char[]))
                {
                    return "std::vector<mscorlib::System::Char*> ";
                }
                return "std::vector<" + type.GetElementType().SanitizedName() + "*> ";
            }
			else if (type == typeof(char)) return "mscorlib::System::Char ";
			if (type.IsDelegate ()) {
				return "mscorlib::Callback<" + GetDelegateSignature(type) + "> ";
			}

			if (type.FullName != null && type.Name.EndsWith ("&")) {
				var refType = Type.GetType (type.FullName.Substring (0, type.FullName.Length - 1));
				if (refType != null) {
					return refType.SanitizedName() + (refType == typeof(void) || refType.IsReallyPrimitive() || refType.IsPointer || refType.IsReallyEnum() ? " " : (refType.IsAbstract ? " " : " "));
				}
			}


			return type.SanitizedName() + (type == typeof(void) || type.IsReallyPrimitive() || type.IsPointer || type.IsReallyEnum() ? " " : (type.IsAbstract ? " " : " "));
        }

		private static string GetDelegateSignature (Type type)
		{
			var invoke = type.GetMethod ("Invoke");
			return invoke.ReturnType.ToParameterTypeName() + " (" + string.Join(", ", invoke.GetParameters().Select(x => x.ParameterType.ToParameterTypeName())) + ")";
		}

		public static Type ToIncludeType(this Type type)
		{
			if (type.Name.EndsWith ("&"))
				return Type.GetType (type.FullName.Replace ("&", "")).ToIncludeType ();
			if (type.Name.EndsWith ("*"))
				return Type.GetType (type.FullName.Replace ("*", "")).ToIncludeType ();
			if (type.IsArray)
				return type.GetElementType ().ToIncludeType ();
			if (type.IsGenericType) {
				return type.GetGenericTypeDefinition ();
			}
			return type;
		}

		public static bool IsReallyPrimitive(this Type type)
		{
			if (type.FullName == null)
				return type.IsPrimitive;
			if (type == typeof(void))
				return true;
			if (type.Name.Contains ("[]"))
				return type.IsPrimitive;
			if (type.Name.EndsWith ("&")) {
				return Type.GetType (type.FullName.Replace ("&", "")).IsReallyPrimitive();
			}
			if (type.Name.EndsWith ("*")) {
				return Type.GetType (type.FullName.Replace ("*", "")).IsReallyPrimitive();
			}

			if (type == typeof(Byte) || type == typeof(SByte) || type == typeof(IntPtr) || type == typeof(UIntPtr))
				return false;

			return type.IsPrimitive;
		}

		public static bool IsReallyEnum(this Type type)
		{
			if (type.FullName == null)
				return type.IsEnum;
			if (type.Name.Contains ("[]"))
				return type.IsEnum;
			if (type.Name.EndsWith ("&"))
				return Type.GetType (type.FullName.Replace ("&", "")).IsEnum;
			return type.IsEnum;
		}

		public static string GetTypePath(this Type type)
		{
			string path = type.Assembly.GetName().Name;
			var names = type.Namespace.Split('.');
			foreach (var name in names)
			{
				path = path + "/" + name;
			}
			string fileName = type.Assembly.GetName ().Name + "_" + type.Namespace.Replace (".", "_") + "_" + type.Name.Replace("`", "_").Replace("&", "");
			path = path + "/" +  fileName;
			return path;
		}

		public static bool IsBaseType(this Type type)
		{
			if (type == null)
				return true;
			if (type.FullName == null)
				return true;
			if (type == typeof(void))
				return true;
			if (type.Name.EndsWith ("&"))
				return Type.GetType (type.FullName.Replace("&", "")).IsBaseType ();

			if (type.Name.EndsWith ("*"))
				return Type.GetType (type.FullName.Replace("*", "")).IsBaseType ();

			if (type.IsArray)
				return type.GetElementType ().IsBaseType ();

			if (type == typeof(Byte) || type == typeof(SByte))
				return false;

			if (type == typeof(IntPtr) || type == typeof(UIntPtr))
				return false;

			if (!type.Name.Equals ("Void") 
				&& !type.IsDelegate () 
				&& !type.IsReallyPrimitive() 
				&& !type.IsPointer 
				&& type != typeof(Char)
				&& type.IsPublic) {
				return !typeof(object).IsAssignableFrom (type);
			}
			return true;
		}

		public static string GetSignature(this System.Reflection.MethodInfo constructor)
		{
			string result = "";
			var parameters = constructor.GetParameters();
			bool first = true;
			foreach (var parameter in parameters)
			{
				if (!first) result += ", ";
				result += parameter.ParameterType.ToParameterTypeName() + parameter.GetName();
				first = false;
			}
			return result;
		}

		public static string GetSignature(this System.Reflection.PropertyInfo property, bool isSet)
		{
			string result = "";
			var parameters = property.GetIndexParameters ();
			bool first = true;
			foreach (var parameter in parameters)
			{
				if (!first) result += ", ";
				result += parameter.ParameterType.ToParameterTypeName() + parameter.GetName();
				first = false;
			}
			if (isSet) {
				if (!first) result += ", ";
				result += property.PropertyType.ToParameterTypeName () + " value";
			}
			return result;
		}

		public static string GetSignature(this System.Reflection.ConstructorInfo constructor, bool isConstructor = false)
		{
			string result = "";
			var parameters = constructor.GetParameters();
			bool first = true;
			foreach(var parameter in parameters)
			{
				if (!first) result += ", ";
				result += parameter.ParameterType.ToParameterTypeName() + (parameter.ParameterType == constructor.DeclaringType ? "&" : "") + parameter.GetName();
				first = false;
			}
			return result;
		}

		public static string ToInterfaceVariableName(this Type type)
		{
			return "__" + type.Assembly.GetName().Name + "_" + type.FullName.Replace(".", "_").Replace("`", "_").Replace("[T]", "");
		}

		public static bool IsDependentOf(this Type type, Type target)
		{
			if (target.BaseType != null) {
				if (target.BaseType == type) return true;
			}
			var constructors = target.GetConstructors ();
			foreach (var constructor in constructors) {
				foreach (var parameter in constructor.GetParameters()) {
					if (parameter.ParameterType == type)
						return true;
				}
			}

			var methods = target.GetMethods (System.Reflection.BindingFlags.Public | System.Reflection.BindingFlags.Instance);
			foreach (var method in methods) {
				if (method.IsGenericMethod) {
					if (method.ReturnType.ToIncludeType () == type)
						return true;
					foreach (var parameter in method.GetParameters()) {
						if (parameter.ParameterType == type)
							return true;
					}
				} else if (method.Name == "GetEnumerator") {
					if (method.ReturnType.ToIncludeType () == type)
						return true;
					if (method.ReturnType.IsGenericType) {
						var genMethods = method.ReturnType.GetGenericArguments ();
						foreach (var item in genMethods) {
							if (item == type)
								return true;
						}
					}
				}
			}

			methods = target.GetMethods (System.Reflection.BindingFlags.Public | System.Reflection.BindingFlags.Static);
			foreach (var method in methods) {
				if (method.IsGenericMethod) {
					if (method.ReturnType.ToIncludeType () == type)
						return true;
					foreach (var parameter in method.GetParameters()) {
						if (parameter.ParameterType == type)
							return true;
					}
				}
			}
			return false;
		}

		public static string ToNativeObjectVariable(this Type type, bool isBase = false)
		{
			if (type.IsInterface) {
				var interfaces = type.GetInterfaces ();
				if (isBase && interfaces.Any ())
					return FindBestInterface(interfaces).ToInterfaceVariableName ();
				else
					return type.ToInterfaceVariableName ();
			}
			return "__native_object__";
		}

		static Type FindBestInterface (Type[] interfaces)
		{
			Type firstInterface = null;
			foreach (var interfaceType in interfaces) {
		        if (interfaceType.IsPublic && !interfaces.Any(x => x != interfaceType && interfaceType.IsAssignableFrom(x)))
		        {
					if (firstInterface == null) firstInterface = interfaceType;
					if (interfaceType.Name.StartsWith("IEnumerable")) return interfaceType.ToIncludeType();
				}
			}
			return  firstInterface.ToIncludeType();
		}

		public static string GetName(this System.Reflection.ParameterInfo paramInfo)
		{
			if (paramInfo.Name  == "asm") return "assembly";
			if (paramInfo.Name  == "or") return "objOr";
			return paramInfo.Name;
		}

    }
}
