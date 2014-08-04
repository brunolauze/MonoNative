using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace MonoNative.Generator
{
	public static class ForwardManager
	{
		public static void Forward(Type type, StringBuilder sb)
		{
			if (typeof(string) == type) {
				NameSpaceWriter.Write (typeof(string), sb, (targetType, StringBuilder, indent) => {
					sb.AppendLine (indent + "class Type;");
					sb.AppendLine (indent + "class Array;");
					sb.AppendLine (indent);
				});

				NameSpaceWriter.Write (typeof(System.Globalization.CultureInfo), sb, (targetType, StringBuilder, indent) => {
					sb.AppendLine (indent + "class CultureInfo;");
					sb.AppendLine (indent);
				});
			}

			if (typeof(IFormatProvider) == type ||
				typeof(System.Reflection.ICustomAttributeProvider) == type ||
				typeof(System.Runtime.InteropServices._MemberInfo) == type) {
				NameSpaceWriter.Write (typeof(string), sb, (targetType, StringBuilder, indent) => {
					sb.AppendLine (indent + "class Type;");
					sb.AppendLine (indent);
				});
			}
		}

		public static void IncludeForwaredTypes(Type type, StringBuilder sb, HashSet<Type> types)
		{
			if (typeof(string) == type) {
				sb.AppendLine ("#include <" + typeof(Type).GetTypePath () + ".h>");
				sb.AppendLine ("#include <" + typeof(Array).GetTypePath () + ".h>");
				sb.AppendLine ("#include <" + typeof(System.Globalization.CultureInfo).GetTypePath () + ".h>");
				sb.AppendLine ();
			}
			else if (typeof(Enum) == type) {
				sb.AppendLine ("#include <" + typeof(Type).GetTypePath () + ".h>");
				sb.AppendLine ("#include <" + typeof(Array).GetTypePath () + ".h>");
				sb.AppendLine ();
			} 
			else if (typeof(IFormatProvider) == type ||
			         typeof(System.Reflection.ICustomAttributeProvider) == type ||
			         typeof(System.Runtime.InteropServices._MemberInfo) == type) {
				sb.AppendLine ("#include <" + typeof(Type).GetTypePath () + ".h>");
				sb.AppendLine ();
			} else {
				var incTypes = types.ToList ();
				IncludesFilter.Filter (type, types);

				if (type == typeof(System.Runtime.InteropServices.UCOMIMoniker)) {
					incTypes.Add (typeof(System.Runtime.InteropServices.UCOMIStream));
					incTypes.Add (typeof(System.Runtime.InteropServices.UCOMIBindCtx));
				}
				if (type == typeof(System.Runtime.InteropServices.ComTypes.IMoniker)) {
					incTypes.Add (typeof(System.Runtime.InteropServices.ComTypes.IStream));
					incTypes.Add (typeof(System.Runtime.InteropServices.ComTypes.IBindCtx));
				}

				//var targetTypes = types.Where (x => x != typeof(Object) && x != typeof(ValueType) && !IsBaseType(x,  type) && !x.IsInterface && !x.IsReallyEnum() && !x.IsGenericType && !x.IsDependentOf (type));
				foreach (var includeType in incTypes.Except(types)) {
					sb.AppendLine ("#include <" + includeType.GetTypePath () + ".h>");
				}
				sb.AppendLine ();
			}
		}

		public static void Forward(Type type, StringBuilder sb, IEnumerable<Type> types)
		{
			if (typeof(string) == type || typeof(Enum) == type || typeof(IFormatProvider) == type ||
			    typeof(System.Reflection.ICustomAttributeProvider) == type ||
			    typeof(System.Runtime.InteropServices._MemberInfo) == type) {

			} else if (type.IsGenericType && !type.IsInterface) {
				/* Should be really integrated */
				/* There should not be any concrete generic types with circular dependency */
			}
			else {
				DoForward(type, sb, types.Where(x => x != typeof(Object) && x != typeof(ValueType) && !IsValidInterface(x,type)));
			}
		}

		public static void DoForward(Type type, StringBuilder sb, IEnumerable<Type> types)
		{
			DoForward_(type, sb, types.Where(x => !x.IsReallyEnum() && !IsValidGeneric(x, type) && !x.IsDependentOf(type)));
		}

		public static bool IsValidGeneric(Type type, Type targetType)
		{
			if (type.IsGenericType) {
				if (targetType == typeof(System.Threading.Tasks.Task<>)) {
					return type != typeof(System.Threading.Tasks.TaskFactory<>);
				}
				return true;
			}
			return false;
		}

		public static bool IsValidInterface(Type type, Type targetType)
		{
			if (type.IsInterface) {
				if (type.Name.StartsWith("ISymbol")) return false;
				return true;
			}
			return false;
		}

		public static void DoForward_(Type type, StringBuilder sb, IEnumerable<Type> types)
		{
			var assemblies = types.Select (x => x.Assembly.GetName ().Name).Distinct();

			foreach (var assembly in assemblies) {
				var ns = types.Where (x => x.Assembly.GetName ().Name == assembly).Select (x => x.Namespace).Distinct ();
				foreach (var nsItem in ns) {
					NameSpaceWriter.Write (assembly, nsItem, sb, (sbuilder, indent) => {
						var nsTypes = types.Where (x => x.Assembly.GetName ().Name == assembly && x.Namespace == nsItem);
						foreach(var typeItem in nsTypes)
						{
							if (typeItem.IsGenericType)
								sb.AppendLine(indent + "\ttemplate<" + string.Join(", ", typeItem.GetGenericArguments().Select(x => "typename " + (x.FullName == null ? x.Name : x.FullName))) + ">");
							sbuilder.AppendLine(indent + "class " + typeItem.ClassName() + ";");
						}
						sb.AppendLine (indent);
					});
				}
			}

		}
			
		static bool IsBaseType (Type type, Type targetType)
		{
			if (targetType.BaseType != null)
				return targetType.BaseType == type;
			return  false;
		}


	}
}

