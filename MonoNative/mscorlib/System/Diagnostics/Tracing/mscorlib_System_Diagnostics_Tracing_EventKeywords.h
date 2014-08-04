#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_TRACING_EVENTKEYWORDS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_TRACING_EVENTKEYWORDS_H
namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{
			namespace Tracing
			{

				class EventKeywords
				{
				public:
					enum __ENUM__
					{
						None = 0,
						WdiContext = 562949953421312,
						WdiDiagnostic = 1125899906842624,
						Sqm = 2251799813685248,
						AuditFailure = 4503599627370496,
						CorrelationHint = 4503599627370496,
						AuditSuccess = 9007199254740992,
						EventLogClassic = 36028797018963968,
					};
				};

			}
		}
	}
}
#endif
