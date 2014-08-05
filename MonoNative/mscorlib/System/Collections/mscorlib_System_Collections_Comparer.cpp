#include <mscorlib/System/Collections/mscorlib_System_Collections_Comparer.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			//Public Methods
			mscorlib::System::Int32 Comparer::Compare(mscorlib::System::Object a, mscorlib::System::Object b)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(a).name());
					__parameter_types__[1] = Global::GetType(typeid(b).name());
					__parameters__[0] = (MonoObject*)a;
					__parameters__[1] = (MonoObject*)b;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "Comparer", 0, NULL, "Compare", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void Comparer::GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(info).name());
					__parameter_types__[1] = Global::GetType(typeid(context).name());
					__parameters__[0] = (MonoObject*)info;
					__parameters__[1] = (MonoObject*)context;
					Global::InvokeMethod("mscorlib", "System.Collections", "Comparer", 0, NULL, "GetObjectData", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

				//	Get/Set:Default
			mscorlib::System::Collections::Comparer Comparer::get_Default()
			{
				return Global::GetFieldValue("mscorlib", "System.Collections", "Comparer", 0, NULL, "Default");
			}

			void Comparer::set_Default(mscorlib::System::Collections::Comparer  value)
			{
				throw;
			}

				//	Get/Set:DefaultInvariant
			mscorlib::System::Collections::Comparer Comparer::get_DefaultInvariant()
			{
				return Global::GetFieldValue("mscorlib", "System.Collections", "Comparer", 0, NULL, "DefaultInvariant");
			}

			void Comparer::set_DefaultInvariant(mscorlib::System::Collections::Comparer  value)
			{
				throw;
			}


		}
	}
}
