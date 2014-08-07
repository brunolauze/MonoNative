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

			Predicate<string> test = (s) => { Console.WriteLine(s); return true; };
		 	IntPtr ptr = System.Runtime.InteropServices.Marshal.GetFunctionPointerForDelegate (test);

			var method = typeof(System.Runtime.InteropServices.Marshal).GetMethod ("GetDelegateForFunctionPointerInternal", System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Static);

			try { 
				var obj = method.Invoke (null, new object[] { ptr, typeof(Action) });
				Predicate<string> test2 = (Predicate<string>)obj;

				bool result = test2("TEST");
				if (result)
				{
					Console.WriteLine("TEST2");
				}
			}
			catch(Exception e) {
				Console.WriteLine (e.Message);
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


            //AssemblyParser.Parse(typeof(string).Assembly);
            
            //Console.ReadLine();
        }
    }
}
