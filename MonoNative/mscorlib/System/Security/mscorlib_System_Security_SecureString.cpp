#include <mscorlib/System/Security/mscorlib_System_Security_SecureString.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			//Public Methods
			void SecureString::AppendChar(mscorlib::System::Char c)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(c).name());
					__parameters__[0] = &c;
					Global::InvokeMethod("mscorlib", "System.Security", "SecureString", 0, NULL, "AppendChar", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void SecureString::Clear()
			{
					Global::InvokeMethod("mscorlib", "System.Security", "SecureString", 0, NULL, "Clear", __native_object__, 0, NULL, NULL, NULL);
			}

			mscorlib::System::Security::SecureString SecureString::Copy()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecureString", 0, NULL, "Copy", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::SecureString(__result__);
			}

			void SecureString::Dispose()
			{
					Global::InvokeMethod("mscorlib", "System.Security", "SecureString", 0, NULL, "Dispose", __native_object__, 0, NULL, NULL, NULL);
			}

			void SecureString::InsertAt(mscorlib::System::Int32 index, mscorlib::System::Char c)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameter_types__[1] = Global::GetType(typeid(c).name());
					__parameters__[0] = &index;
					__parameters__[1] = &c;
					Global::InvokeMethod("mscorlib", "System.Security", "SecureString", 0, NULL, "InsertAt", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Boolean SecureString::IsReadOnly()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecureString", 0, NULL, "IsReadOnly", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void SecureString::MakeReadOnly()
			{
					Global::InvokeMethod("mscorlib", "System.Security", "SecureString", 0, NULL, "MakeReadOnly", __native_object__, 0, NULL, NULL, NULL);
			}

			void SecureString::RemoveAt(mscorlib::System::Int32 index)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameters__[0] = &index;
					Global::InvokeMethod("mscorlib", "System.Security", "SecureString", 0, NULL, "RemoveAt", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void SecureString::SetAt(mscorlib::System::Int32 index, mscorlib::System::Char c)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameter_types__[1] = Global::GetType(typeid(c).name());
					__parameters__[0] = &index;
					__parameters__[1] = &c;
					Global::InvokeMethod("mscorlib", "System.Security", "SecureString", 0, NULL, "SetAt", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			//Get Set Properties Methods
			//	Get:Length
			mscorlib::System::Int32  SecureString::get_Length() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecureString", 0, NULL, "get_Length", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}



		}
	}
}
