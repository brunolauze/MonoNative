#include <mscorlib/System/Globalization/mscorlib_System_Globalization_SortVersion.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			//Public Methods
			mscorlib::System::Boolean SortVersion::Equals(mscorlib::System::Object obj)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameters__[0] = (MonoObject*)obj;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "SortVersion", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 SortVersion::GetHashCode()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "SortVersion", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean SortVersion::Equals(mscorlib::System::Globalization::SortVersion other)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(other).name());
					__parameters__[0] = (MonoObject*)other;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "SortVersion", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			//Get Set Properties Methods
			//	Get/Set:SortId
			mscorlib::System::Guid  SortVersion::get_SortId() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "SortVersion", 0, NULL, "get_SortId", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Guid(__result__);
			}

			void SortVersion::set_SortId(mscorlib::System::Guid  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "SortVersion", 0, NULL, "set_SortId", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:FullVersion
			mscorlib::System::Int32  SortVersion::get_FullVersion() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "SortVersion", 0, NULL, "get_FullVersion", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void SortVersion::set_FullVersion(mscorlib::System::Int32  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "SortVersion", 0, NULL, "set_FullVersion", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}



		}
	}
}
