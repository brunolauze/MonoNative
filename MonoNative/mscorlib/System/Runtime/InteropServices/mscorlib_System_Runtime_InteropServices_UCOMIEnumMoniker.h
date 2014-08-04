#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_UCOMIENUMMONIKER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_UCOMIENUMMONIKER_H

#include <Global.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				class UCOMIMoniker;
				

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

				class UCOMIEnumMoniker
				{
				public:
					UCOMIEnumMoniker(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_InteropServices_UCOMIEnumMoniker = nativeObject;
					};
				
					~UCOMIEnumMoniker()
					{
					};
				

					UCOMIEnumMoniker & operator=(UCOMIEnumMoniker &value) { __mscorlib_System_Runtime_InteropServices_UCOMIEnumMoniker = value.__mscorlib_System_Runtime_InteropServices_UCOMIEnumMoniker; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_UCOMIEnumMoniker; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_UCOMIEnumMoniker = value; return value; };


					virtual mscorlib::System::Int32  Next(mscorlib::System::Int32 celt, std::vector<mscorlib::System::Runtime::InteropServices::UCOMIMoniker*> rgelt, mscorlib::System::Int32 pceltFetched);
					virtual mscorlib::System::Int32  Skip(mscorlib::System::Int32 celt);
					virtual mscorlib::System::Int32  Reset();
					virtual void  Clone(mscorlib::System::Runtime::InteropServices::UCOMIEnumMoniker ppenum);


				
				protected:
					MonoObject *__mscorlib_System_Runtime_InteropServices_UCOMIEnumMoniker;
				
				private:
				
				};

			}
		}
	}
}
#endif
