#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_DEBUGGERBROWSABLESTATE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_DEBUGGERBROWSABLESTATE_H
namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{

			class DebuggerBrowsableState
			{
			public:
				enum __ENUM__
				{
					Never = 0,
					Collapsed = 2,
					RootHidden = 3,
				};
			};

		}
	}
}
#endif
