#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_UCOMIBINDCTX_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_UCOMIBINDCTX_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_UCOMIRunningObjectTable.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_UCOMIEnumString.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				class BIND_OPTS;
				

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

				class UCOMIBindCtx
				{
				public:
					UCOMIBindCtx(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_InteropServices_UCOMIBindCtx = nativeObject;
					};
				
					~UCOMIBindCtx()
					{
					};
				

					UCOMIBindCtx & operator=(UCOMIBindCtx &value) { __mscorlib_System_Runtime_InteropServices_UCOMIBindCtx = value.__mscorlib_System_Runtime_InteropServices_UCOMIBindCtx; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_UCOMIBindCtx; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_UCOMIBindCtx = value; return value; };


					virtual void  RegisterObjectBound(mscorlib::System::Object punk);
					virtual void  RevokeObjectBound(mscorlib::System::Object punk);
					virtual void  ReleaseBoundObjects();
					virtual void  SetBindOptions(mscorlib::System::Runtime::InteropServices::BIND_OPTS pbindopts);
					virtual void  GetBindOptions(mscorlib::System::Runtime::InteropServices::BIND_OPTS pbindopts);
					virtual void  GetRunningObjectTable(mscorlib::System::Runtime::InteropServices::UCOMIRunningObjectTable pprot);
					virtual void  RegisterObjectParam(mscorlib::System::String pszKey, mscorlib::System::Object punk);
					virtual void  RegisterObjectParam(const char *pszKey, mscorlib::System::Object punk);
					virtual void  GetObjectParam(mscorlib::System::String pszKey, mscorlib::System::Object ppunk);
					virtual void  GetObjectParam(const char *pszKey, mscorlib::System::Object ppunk);
					virtual void  EnumObjectParam(mscorlib::System::Runtime::InteropServices::UCOMIEnumString ppenum);
					virtual void  RevokeObjectParam(mscorlib::System::String pszKey);
					virtual void  RevokeObjectParam(const char *pszKey);


				
				protected:
					MonoObject *__mscorlib_System_Runtime_InteropServices_UCOMIBindCtx;
				
				private:
				
				};

			}
		}
	}
}
#endif
