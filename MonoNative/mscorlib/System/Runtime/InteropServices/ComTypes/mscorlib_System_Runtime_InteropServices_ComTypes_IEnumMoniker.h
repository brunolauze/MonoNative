#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IENUMMONIKER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IENUMMONIKER_H

#include <Global.h>

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

					class IMoniker;
					

				}
			}
		}
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

					class IEnumMoniker
					{
					public:
						IEnumMoniker(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_InteropServices_ComTypes_IEnumMoniker = nativeObject;
						};
					
						~IEnumMoniker()
						{
						};
					

						IEnumMoniker & operator=(IEnumMoniker &value) { __mscorlib_System_Runtime_InteropServices_ComTypes_IEnumMoniker = value.__mscorlib_System_Runtime_InteropServices_ComTypes_IEnumMoniker; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_ComTypes_IEnumMoniker; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_ComTypes_IEnumMoniker = value; return value; };


						virtual mscorlib::System::Int32  Next(mscorlib::System::Int32 celt, std::vector<mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker*> rgelt, mscorlib::System::IntPtr pceltFetched);
						virtual mscorlib::System::Int32  Skip(mscorlib::System::Int32 celt);
						virtual void  Reset();
						virtual void  Clone(mscorlib::System::Runtime::InteropServices::ComTypes::IEnumMoniker ppenum);


					
					protected:
						MonoObject *__mscorlib_System_Runtime_InteropServices_ComTypes_IEnumMoniker;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
