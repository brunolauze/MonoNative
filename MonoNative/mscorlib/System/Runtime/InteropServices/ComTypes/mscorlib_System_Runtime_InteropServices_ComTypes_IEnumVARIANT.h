#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IENUMVARIANT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IENUMVARIANT_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class IntPtr;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{
				namespace ComTypes
				{

					class IEnumVARIANT
					{
					public:
						IEnumVARIANT(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_InteropServices_ComTypes_IEnumVARIANT = nativeObject;
						};
					
						~IEnumVARIANT()
						{
						};
					

						IEnumVARIANT & operator=(IEnumVARIANT &value) { __mscorlib_System_Runtime_InteropServices_ComTypes_IEnumVARIANT = value.__mscorlib_System_Runtime_InteropServices_ComTypes_IEnumVARIANT; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_ComTypes_IEnumVARIANT; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_ComTypes_IEnumVARIANT = value; return value; };


						virtual mscorlib::System::Int32  Next(mscorlib::System::Int32 celt, std::vector<mscorlib::System::Object*> rgVar, mscorlib::System::IntPtr pceltFetched);
						virtual mscorlib::System::Int32  Skip(mscorlib::System::Int32 celt);
						virtual mscorlib::System::Int32  Reset();
						virtual mscorlib::System::Runtime::InteropServices::ComTypes::IEnumVARIANT  Clone();


					
					protected:
						MonoObject *__mscorlib_System_Runtime_InteropServices_ComTypes_IEnumVARIANT;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
