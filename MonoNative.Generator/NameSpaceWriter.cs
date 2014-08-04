using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MonoNative.Generator
{
    public class NameSpaceWriter
    {
        public static void Write(Type type, StringBuilder sb, Action<Type, StringBuilder, string> bodyAction)
		{
			Write(type.Assembly.GetName().Name, type.Namespace, sb, (sbuilder, indent) => { bodyAction(type, sbuilder, indent); });
		}

		public static void Write(string assemblyName, string nameSpace, StringBuilder sb,  Action<StringBuilder, string> bodyAction)
		{
            string[] spaces = nameSpace.Split('.');
            var tabs = "";
            sb.AppendLine(tabs + "namespace " + assemblyName + Environment.NewLine + tabs + "{");
            tabs += "\t";
            foreach(var space in spaces)
            {
                sb.AppendLine(tabs + "namespace " + space + Environment.NewLine + tabs + "{");
                tabs += "\t";
            }
            sb.AppendLine();
            bodyAction(sb, tabs);
            sb.AppendLine();
            if (tabs.Length > 0) tabs = tabs.Remove(tabs.Length - 1, 1);
            for(int i = 0; i < spaces.Length; i++)
            {
                sb.AppendLine(tabs + "}");
                if (tabs.Length > 0) tabs = tabs.Remove(tabs.Length - 1, 1);
            }
            sb.AppendLine("}");
        }
    }
}
