#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_UCOMIENUMVARIANT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_UCOMIENUMVARIANT_H

#include <Global.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				class UCOMIEnumVARIANT
				{
				public:
					UCOMIEnumVARIANT(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_InteropServices_UCOMIEnumVARIANT = nativeObject;
					};
				
					~UCOMIEnumVARIANT()
					{
					};
				

					UCOMIEnumVARIANT & operator=(UCOMIEnumVARIANT &value) { __mscorlib_System_Runtime_InteropServices_UCOMIEnumVARIANT = value.__mscorlib_System_Runtime_InteropServices_UCOMIEnumVARIANT; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_UCOMIEnumVARIANT; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_UCOMIEnumVARIANT = value; return value; };


					virtual mscorlib::System::Int32  Next(mscorlib::System::Int32 celt, mscorlib::System::Int32 rgvar, mscorlib::System::Int32 pceltFetched);
					virtual mscorlib::System::Int32  Skip(mscorlib::System::Int32 celt);
					virtual mscorlib::System::Int32  Reset();
					virtual void  Clone(mscorlib::System::Int32 ppenum);


				
				protected:
					MonoObject *__mscorlib_System_Runtime_InteropServices_UCOMIEnumVARIANT;
				
				private:
				
				};

			}
		}
	}
}
#endif
