using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using System.Text;
using System.Threading.Tasks;

namespace MonoNative.Generator
{
    public static class AssemblyParser
    {
		public static void Parse(Assembly assembly)
        {
			var sb = new StringBuilder ();
            var types = assembly.GetTypes().Where(x => x.IsPublic);
            foreach(var type in types)
            {
				if (type == typeof(System.Collections.Concurrent.OrderablePartitioner<>))
					continue;
				if (type.Name.StartsWith ("Tuple"))
					continue;
				if (!type.IsBaseType ()) {
					TypeGenerator.Generate (type);
					sb.AppendLine ("#include <" + type.GetTypePath () + ".h>");
				}
            }
			System.IO.File.WriteAllText (System.IO.Path.Combine (FileGenerator.GetRootPath (), assembly.GetName ().Name + ".h"), sb.ToString());
        }
    }
}
