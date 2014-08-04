#include <mscorlib/System/Globalization/mscorlib_System_Globalization_IdnMapping.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			//Public Methods
			mscorlib::System::Boolean IdnMapping::Equals(mscorlib::System::Object obj)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameters__[0] = (MonoObject*)obj;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "IdnMapping", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 IdnMapping::GetHashCode()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "IdnMapping", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::String IdnMapping::GetAscii(mscorlib::System::String unicode)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(unicode).name());
					__parameters__[0] = (MonoObject*)unicode;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "IdnMapping", 0, NULL, "GetAscii", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String IdnMapping::GetAscii(mscorlib::System::String unicode, mscorlib::System::Int32 index)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(unicode).name());
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameters__[0] = (MonoObject*)unicode;
					__parameters__[1] = &index;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "IdnMapping", 0, NULL, "GetAscii", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String IdnMapping::GetAscii(mscorlib::System::String unicode, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(unicode).name());
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = (MonoObject*)unicode;
					__parameters__[1] = &index;
					__parameters__[2] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "IdnMapping", 0, NULL, "GetAscii", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String IdnMapping::GetUnicode(mscorlib::System::String ascii)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(ascii).name());
					__parameters__[0] = (MonoObject*)ascii;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "IdnMapping", 0, NULL, "GetUnicode", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String IdnMapping::GetUnicode(mscorlib::System::String ascii, mscorlib::System::Int32 index)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(ascii).name());
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameters__[0] = (MonoObject*)ascii;
					__parameters__[1] = &index;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "IdnMapping", 0, NULL, "GetUnicode", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String IdnMapping::GetUnicode(mscorlib::System::String ascii, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(ascii).name());
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = (MonoObject*)ascii;
					__parameters__[1] = &index;
					__parameters__[2] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "IdnMapping", 0, NULL, "GetUnicode", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			//Get Set Properties Methods
			//	Get/Set:AllowUnassigned
			mscorlib::System::Boolean  IdnMapping::get_AllowUnassigned()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "IdnMapping", 0, NULL, "get_AllowUnassigned", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void IdnMapping::set_AllowUnassigned(mscorlib::System::Boolean  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				Global::InvokeMethod("mscorlib", "System.Globalization", "IdnMapping", 0, NULL, "set_AllowUnassigned", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:UseStd3AsciiRules
			mscorlib::System::Boolean  IdnMapping::get_UseStd3AsciiRules()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "IdnMapping", 0, NULL, "get_UseStd3AsciiRules", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void IdnMapping::set_UseStd3AsciiRules(mscorlib::System::Boolean  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				Global::InvokeMethod("mscorlib", "System.Globalization", "IdnMapping", 0, NULL, "set_UseStd3AsciiRules", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}



		}
	}
}
