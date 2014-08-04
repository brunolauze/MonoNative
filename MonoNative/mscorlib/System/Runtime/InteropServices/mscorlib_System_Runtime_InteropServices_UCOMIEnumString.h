#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_UCOMIENUMSTRING_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_UCOMIENUMSTRING_H

#include <Global.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		

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

				class UCOMIEnumString
				{
				public:
					UCOMIEnumString(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_InteropServices_UCOMIEnumString = nativeObject;
					};
				
					~UCOMIEnumString()
					{
					};
				

					UCOMIEnumString & operator=(UCOMIEnumString &value) { __mscorlib_System_Runtime_InteropServices_UCOMIEnumString = value.__mscorlib_System_Runtime_InteropServices_UCOMIEnumString; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_UCOMIEnumString; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_UCOMIEnumString = value; return value; };


					virtual mscorlib::System::Int32  Next(mscorlib::System::Int32 celt, std::vector<mscorlib::System::String*> rgelt, mscorlib::System::Int32 pceltFetched);
					virtual mscorlib::System::Int32  Skip(mscorlib::System::Int32 celt);
					virtual mscorlib::System::Int32  Reset();
					virtual void  Clone(mscorlib::System::Runtime::InteropServices::UCOMIEnumString ppenum);


				
				protected:
					MonoObject *__mscorlib_System_Runtime_InteropServices_UCOMIEnumString;
				
				private:
				
				};

			}
		}
	}
}
#endif
