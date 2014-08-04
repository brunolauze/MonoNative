using System;
using System.Collections.Generic;
using System.Linq;

namespace MonoNative.Generator
{
	public static class IncludesFilter
	{
		public static void Filter(Type type, HashSet<Type> types, bool isInCircularMode = false)
		{
			if (typeof(string) == type || typeof(Enum) == type) {
				types.RemoveWhere (x => 
					x == typeof(Type)
				|| x == typeof(Array)
				|| x == typeof(System.Globalization.CultureInfo)
				);
			} else if (typeof(IFormatProvider) == type ||
			         typeof(System.Reflection.ICustomAttributeProvider) == type ||
			         typeof(System.Runtime.InteropServices._MemberInfo) == type) {
				types.RemoveWhere (x => x == typeof(Type));
			} else if (type.IsGenericType && !type.IsInterface) {
				if (!isInCircularMode)
					RemoveGenericCircularDependencies (type, types);
			}
			else types.RemoveWhere (x => x != typeof(Object) && x != typeof(ValueType) && !IsBaseType(x,  type) && !x.IsReallyEnum() && !ForwardManager.IsValidInterface(x, type) && !ForwardManager.IsValidGeneric(x, type) && !x.IsDependentOf(type)); 

			if (type == typeof(System.Collections.Concurrent.Partitioner))
				types.RemoveWhere (x => x == typeof(System.Collections.Concurrent.OrderablePartitioner<>));

			if (!type.IsGenericType && !isInCircularMode) {
				RemoveCircularDependencies (type, types);
			}

		}

		static void RemoveCircularDependencies (Type type, HashSet<Type> types)
		{
			var incTypes = types.Where(x => x != typeof(Object) 
											&& x != typeof(ValueType) 
											&& !IsBaseType(x,  type) && !x.IsReallyEnum()).ToList ();
			foreach (var subType in incTypes) {
				HashSet<Type> subTypes = new HashSet<Type> ();

				TypeGenerator.AddIncludes (subType, subTypes);

				subTypes.RemoveWhere (x => x == subType || x == typeof(char));
				if (subType == typeof(System.Threading.Tasks.Task))
					subTypes.RemoveWhere (x => x == typeof(System.Threading.Tasks.Task<>));
					
				Filter (subType, subTypes, true);

				if (subTypes.Contains (type) && !IsEnumeratorOf(subType, type))
					types.RemoveWhere (x => x == subType);
			}

			if (type == typeof(System.Runtime.InteropServices.UCOMIMoniker)) {
				types.RemoveWhere (x => x == typeof(System.Runtime.InteropServices.UCOMIStream) || x == typeof(System.Runtime.InteropServices.UCOMIBindCtx));
			}
			if (type == typeof(System.Runtime.InteropServices.ComTypes.IMoniker)) {
				types.RemoveWhere (x => x == typeof(System.Runtime.InteropServices.ComTypes.IStream) || x == typeof(System.Runtime.InteropServices.ComTypes.IBindCtx));
			}

		}

		private static bool IsEnumeratorOf (Type subType, Type type)
		{
			var method = type.GetMethod ("GetEnumerator");
			if (method == null)
				return false;
			return method.ReturnType.ToIncludeType() == subType;
		}

		static bool IsBaseType (Type type, Type targetType)
		{
			if (targetType.BaseType != null)
				return targetType.BaseType == type;
			return  false;
		}

		static void RemoveGenericCircularDependencies (Type type, HashSet<Type> types)
		{
			if (type == typeof(System.Threading.Tasks.Task<>))
				types.RemoveWhere (x => x == typeof(System.Threading.Tasks.TaskFactory<>));
		}
	}
}

