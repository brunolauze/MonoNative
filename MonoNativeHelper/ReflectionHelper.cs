using System;

namespace System
{




	public static class ReflectionHelper
	{
		public static Type MakeGenericType(Type type, params Type[] types)
		{
			string typeName = type.FullName + Environment.NewLine;
			System.IO.File.WriteAllText ("/usr/home/bruno/test1.txt", typeName);

			return typeof(System.Collections.Generic.List<>).MakeGenericType (types);
		}

		public static Type GetType(string typeName)
		{
			var type = Type.GetType(typeName);
			if (type == null) {
				throw new System.Exception (typeName);
			}
			return type;
		}

		public static Type Test(Type type, params Type[] types)
		{
			/*
			Type typeL = Type.GetType(type.Replace("?", "`"));

			if (typeL == null)
				throw new Exception (type);
			*/
			//typeof(System.Collections.Generic.List<>)
			return type.MakeGenericType (types);
		}
	}
}

