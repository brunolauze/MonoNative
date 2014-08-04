using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MonoNative.Generator
{
    class Program
    {
        static void Main(string[] args)
        {
			if (args.Count () > 0) {
				TypeGenerator.Generate (Type.GetType (args [0]));
				return;
			}

			//TypeGenerator.Generate (typeof(System.Runtime.InteropServices.WindowsRuntime.EventRegistrationTokenTable<>));

			/*
			TypeGenerator.Generate (typeof(Type));
			TypeGenerator.Generate (typeof(System.Reflection.MemberInfo));
			TypeGenerator.Generate (typeof(System.Reflection.Module));
			TypeGenerator.Generate (typeof(System.Reflection.ICustomAttributeProvider));
			TypeGenerator.Generate (typeof(System.Runtime.InteropServices._MemberInfo));
			TypeGenerator.Generate (typeof(System.Runtime.InteropServices._Module));
			TypeGenerator.Generate (typeof(System.Runtime.Serialization.ISerializable));
			*/


            AssemblyParser.Parse(typeof(string).Assembly);
            
            //Console.ReadLine();
        }
    }
}
