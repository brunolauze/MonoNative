#include <mscorlib/System/Runtime/InteropServices/Expando/mscorlib_System_Runtime_InteropServices_Expando_IExpando.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_FieldInfo.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodInfo.h>
#include <mscorlib/System/mscorlib_System_Delegate.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_PropertyInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MemberInfo.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{
				namespace Expando
				{

					//Public Methods
					mscorlib::System::Reflection::FieldInfo IExpando::AddField(mscorlib::System::String name)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(name).name());
							__parameters__[0] = mono_string_new(Global::GetDomain(), name);
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.Expando", "IExpando", 0, NULL, "AddField", __mscorlib_System_Runtime_InteropServices_Expando_IExpando, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Reflection::FieldInfo(__result__);
					}

					mscorlib::System::Reflection::FieldInfo IExpando::AddField(const char *name)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(name).name());
							__parameters__[0] = mono_string_new(Global::GetDomain(), name);
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.Expando", "IExpando", 0, NULL, "AddField", __mscorlib_System_Runtime_InteropServices_Expando_IExpando, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Reflection::FieldInfo(__result__);
					}

					mscorlib::System::Reflection::MethodInfo IExpando::AddMethod(mscorlib::System::String name, mscorlib::System::Delegate method)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(name).name());
							__parameter_types__[1] = Global::GetType(typeid(method).name());
							__parameters__[0] = mono_string_new(Global::GetDomain(), name);
							__parameters__[1] = (MonoObject*)method;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.Expando", "IExpando", 0, NULL, "AddMethod", __mscorlib_System_Runtime_InteropServices_Expando_IExpando, 2, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Reflection::MethodInfo(__result__);
					}

					mscorlib::System::Reflection::MethodInfo IExpando::AddMethod(const char *name, mscorlib::System::Delegate method)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(name).name());
							__parameter_types__[1] = Global::GetType(typeid(method).name());
							__parameters__[0] = mono_string_new(Global::GetDomain(), name);
							__parameters__[1] = (MonoObject*)method;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.Expando", "IExpando", 0, NULL, "AddMethod", __mscorlib_System_Runtime_InteropServices_Expando_IExpando, 2, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Reflection::MethodInfo(__result__);
					}

					mscorlib::System::Reflection::PropertyInfo IExpando::AddProperty(mscorlib::System::String name)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(name).name());
							__parameters__[0] = mono_string_new(Global::GetDomain(), name);
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.Expando", "IExpando", 0, NULL, "AddProperty", __mscorlib_System_Runtime_InteropServices_Expando_IExpando, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Reflection::PropertyInfo(__result__);
					}

					mscorlib::System::Reflection::PropertyInfo IExpando::AddProperty(const char *name)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(name).name());
							__parameters__[0] = mono_string_new(Global::GetDomain(), name);
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.Expando", "IExpando", 0, NULL, "AddProperty", __mscorlib_System_Runtime_InteropServices_Expando_IExpando, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Reflection::PropertyInfo(__result__);
					}

					void IExpando::RemoveMember(mscorlib::System::Reflection::MemberInfo m)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(m).name());
							__parameters__[0] = (MonoObject*)m;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.Expando", "IExpando", 0, NULL, "RemoveMember", __mscorlib_System_Runtime_InteropServices_Expando_IExpando, 1, __parameter_types__, __parameters__, NULL);
					}


				}
			}
		}
	}
}
