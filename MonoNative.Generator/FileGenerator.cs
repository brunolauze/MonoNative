using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MonoNative.Generator
{
    public static class FileGenerator
    {
		private static bool useProd = true;

		static string GetTypePath(Type type, string rootFolder = "MonoNative")
        {
            string path = Environment.CurrentDirectory;

			if (useProd) {
				path = new System.IO.DirectoryInfo (path).Parent.Parent.Parent.FullName;
				path = System.IO.Path.Combine (path, rootFolder);
			}
			else {
				if (!System.IO.Directory.Exists (System.IO.Path.Combine (path, "Source"))) {
					System.IO.Directory.CreateDirectory (System.IO.Path.Combine (path, "Source"));
				}
				path = System.IO.Path.Combine(path, "Source");
			}
            if (!System.IO.Directory.Exists(System.IO.Path.Combine(path, type.Assembly.GetName().Name)))
            {
                System.IO.Directory.CreateDirectory(System.IO.Path.Combine(path, type.Assembly.GetName().Name));
            }
            path = System.IO.Path.Combine(path, type.Assembly.GetName().Name);
            var names = type.Namespace.Split('.');
            foreach(var name in names)
            {
                if (!System.IO.Directory.Exists(System.IO.Path.Combine(path, name)))
                {
                    System.IO.Directory.CreateDirectory(System.IO.Path.Combine(path, name));
                }
                path = System.IO.Path.Combine(path, name);
            }
            
			string fileName = type.Assembly.GetName ().Name + "_" + type.Namespace.Replace (".", "_") + "_" + type.Name.Replace("`", "_");
			path = System.IO.Path.Combine(path, fileName);

            return path;
        }

		public static string GetRootPath(string rootFolder = "MonoNative")
		{
			string path = Environment.CurrentDirectory;
			if (useProd) {
				path = new System.IO.DirectoryInfo (path).Parent.Parent.Parent.FullName;
				path = System.IO.Path.Combine (path, rootFolder);
			}
			else {
				if (!System.IO.Directory.Exists (System.IO.Path.Combine (path, "Source"))) {
					System.IO.Directory.CreateDirectory (System.IO.Path.Combine (path, "Source"));
				}
				path = System.IO.Path.Combine(path, "Source");
			}
			return path;
		}

        public static void SaveHeader(Type type, string result)
        {
            string path = GetTypePath(type) + ".h";
            System.IO.File.WriteAllText(path, result);
        }

        public static void SaveImpl(Type type, string result)
        {
            string path = GetTypePath(type) + ".cpp";
            System.IO.File.WriteAllText(path, result);
        }

		public static void SaveFixture (Type type, string result)
		{
			string path = GetTypePath(type, "MonoNative.Tests") + "_Fixture.cpp";
			System.IO.File.WriteAllText(path, result);
		}
    }
}
