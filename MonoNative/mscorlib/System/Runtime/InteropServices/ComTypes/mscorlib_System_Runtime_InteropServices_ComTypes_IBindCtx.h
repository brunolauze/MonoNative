#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IBINDCTX_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IBINDCTX_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_IRunningObjectTable.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_IEnumString.h>

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

					class BIND_OPTS;
					

				}
			}
		}
	}
}
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
				namespace ComTypes
				{

					class IBindCtx
					{
					public:
						IBindCtx(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_InteropServices_ComTypes_IBindCtx = nativeObject;
						};
					
						~IBindCtx()
						{
						};
					

						IBindCtx & operator=(IBindCtx &value) { __mscorlib_System_Runtime_InteropServices_ComTypes_IBindCtx = value.__mscorlib_System_Runtime_InteropServices_ComTypes_IBindCtx; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_ComTypes_IBindCtx; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_ComTypes_IBindCtx = value; return value; };


						virtual void  RegisterObjectBound(mscorlib::System::Object punk);
						virtual void  RevokeObjectBound(mscorlib::System::Object punk);
						virtual void  ReleaseBoundObjects();
						virtual void  SetBindOptions(mscorlib::System::Runtime::InteropServices::ComTypes::BIND_OPTS pbindopts);
						virtual void  GetBindOptions(mscorlib::System::Runtime::InteropServices::ComTypes::BIND_OPTS pbindopts);
						virtual void  GetRunningObjectTable(mscorlib::System::Runtime::InteropServices::ComTypes::IRunningObjectTable pprot);
						virtual void  RegisterObjectParam(mscorlib::System::String pszKey, mscorlib::System::Object punk);
						virtual void  GetObjectParam(mscorlib::System::String pszKey, mscorlib::System::Object ppunk);
						virtual void  EnumObjectParam(mscorlib::System::Runtime::InteropServices::ComTypes::IEnumString ppenum);
						virtual mscorlib::System::Int32  RevokeObjectParam(mscorlib::System::String pszKey);


					
					protected:
						MonoObject *__mscorlib_System_Runtime_InteropServices_ComTypes_IBindCtx;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
