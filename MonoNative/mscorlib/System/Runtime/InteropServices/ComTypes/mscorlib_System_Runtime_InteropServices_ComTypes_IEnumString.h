#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IENUMSTRING_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IENUMSTRING_H

#include <Global.h>

namespace mscorlib
{
	namespace System
	{

		class String;
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

					class IEnumString
					{
					public:
						IEnumString(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_InteropServices_ComTypes_IEnumString = nativeObject;
						};
					
						~IEnumString()
						{
						};
					

						IEnumString & operator=(IEnumString &value) { __mscorlib_System_Runtime_InteropServices_ComTypes_IEnumString = value.__mscorlib_System_Runtime_InteropServices_ComTypes_IEnumString; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_ComTypes_IEnumString; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_ComTypes_IEnumString = value; return value; };


						virtual mscorlib::System::Int32  Next(mscorlib::System::Int32 celt, std::vector<mscorlib::System::String*> rgelt, mscorlib::System::IntPtr pceltFetched);
						virtual mscorlib::System::Int32  Skip(mscorlib::System::Int32 celt);
						virtual void  Reset();
						virtual void  Clone(mscorlib::System::Runtime::InteropServices::ComTypes::IEnumString ppenum);


					
					protected:
						MonoObject *__mscorlib_System_Runtime_InteropServices_ComTypes_IEnumString;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
