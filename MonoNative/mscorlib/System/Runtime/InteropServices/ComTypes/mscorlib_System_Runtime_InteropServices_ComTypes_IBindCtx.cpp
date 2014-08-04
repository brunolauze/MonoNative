#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_IBindCtx.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_BIND_OPTS.h>
#include <mscorlib/System/mscorlib_System_String.h>



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

					//Public Methods
					void IBindCtx::RegisterObjectBound(mscorlib::System::Object punk)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(punk).name());
							__parameters__[0] = (MonoObject*)punk;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IBindCtx", 0, NULL, "RegisterObjectBound", __mscorlib_System_Runtime_InteropServices_ComTypes_IBindCtx, 1, __parameter_types__, __parameters__, NULL);
					}

					void IBindCtx::RevokeObjectBound(mscorlib::System::Object punk)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(punk).name());
							__parameters__[0] = (MonoObject*)punk;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IBindCtx", 0, NULL, "RevokeObjectBound", __mscorlib_System_Runtime_InteropServices_ComTypes_IBindCtx, 1, __parameter_types__, __parameters__, NULL);
					}

					void IBindCtx::ReleaseBoundObjects()
					{
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IBindCtx", 0, NULL, "ReleaseBoundObjects", __mscorlib_System_Runtime_InteropServices_ComTypes_IBindCtx, 0, NULL, NULL, NULL);
					}

					void IBindCtx::SetBindOptions(mscorlib::System::Runtime::InteropServices::ComTypes::BIND_OPTS pbindopts)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(pbindopts).name());
							__parameters__[0] = (MonoObject*)pbindopts;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IBindCtx", 0, NULL, "SetBindOptions", __mscorlib_System_Runtime_InteropServices_ComTypes_IBindCtx, 1, __parameter_types__, __parameters__, NULL);
					}

					void IBindCtx::GetBindOptions(mscorlib::System::Runtime::InteropServices::ComTypes::BIND_OPTS pbindopts)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(pbindopts).name());
							__parameters__[0] = (MonoObject*)pbindopts;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IBindCtx", 0, NULL, "GetBindOptions", __mscorlib_System_Runtime_InteropServices_ComTypes_IBindCtx, 1, __parameter_types__, __parameters__, NULL);
					}

					void IBindCtx::GetRunningObjectTable(mscorlib::System::Runtime::InteropServices::ComTypes::IRunningObjectTable pprot)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(pprot).name());
							__parameters__[0] = (MonoObject*)pprot;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IBindCtx", 0, NULL, "GetRunningObjectTable", __mscorlib_System_Runtime_InteropServices_ComTypes_IBindCtx, 1, __parameter_types__, __parameters__, NULL);
					}

					void IBindCtx::RegisterObjectParam(mscorlib::System::String pszKey, mscorlib::System::Object punk)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(pszKey).name());
							__parameter_types__[1] = Global::GetType(typeid(punk).name());
							__parameters__[0] = (MonoObject*)pszKey;
							__parameters__[1] = (MonoObject*)punk;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IBindCtx", 0, NULL, "RegisterObjectParam", __mscorlib_System_Runtime_InteropServices_ComTypes_IBindCtx, 2, __parameter_types__, __parameters__, NULL);
					}

					void IBindCtx::GetObjectParam(mscorlib::System::String pszKey, mscorlib::System::Object ppunk)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(pszKey).name());
							__parameter_types__[1] = Global::GetType(typeid(ppunk).name());
							__parameters__[0] = (MonoObject*)pszKey;
							__parameters__[1] = (MonoObject*)ppunk;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IBindCtx", 0, NULL, "GetObjectParam", __mscorlib_System_Runtime_InteropServices_ComTypes_IBindCtx, 2, __parameter_types__, __parameters__, NULL);
					}

					void IBindCtx::EnumObjectParam(mscorlib::System::Runtime::InteropServices::ComTypes::IEnumString ppenum)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(ppenum).name());
							__parameters__[0] = (MonoObject*)ppenum;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IBindCtx", 0, NULL, "EnumObjectParam", __mscorlib_System_Runtime_InteropServices_ComTypes_IBindCtx, 1, __parameter_types__, __parameters__, NULL);
					}

					mscorlib::System::Int32 IBindCtx::RevokeObjectParam(mscorlib::System::String pszKey)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(pszKey).name());
							__parameters__[0] = (MonoObject*)pszKey;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IBindCtx", 0, NULL, "RevokeObjectParam", __mscorlib_System_Runtime_InteropServices_ComTypes_IBindCtx, 1, __parameter_types__, __parameters__, NULL);
							return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}


				}
			}
		}
	}
}
