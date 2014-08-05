#include <mscorlib/System/Collections/mscorlib_System_Collections_CaseInsensitiveComparer.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			Property<mscorlib::System::Collections::CaseInsensitiveComparer , mscorlib::System::Collections::CaseInsensitiveComparer> mscorlib::System::Collections::CaseInsensitiveComparer::Default(&mscorlib::System::Collections::CaseInsensitiveComparer::get_Default, &mscorlib::System::Collections::CaseInsensitiveComparer::set_Default);
			Property<mscorlib::System::Collections::CaseInsensitiveComparer , mscorlib::System::Collections::CaseInsensitiveComparer> mscorlib::System::Collections::CaseInsensitiveComparer::DefaultInvariant(&mscorlib::System::Collections::CaseInsensitiveComparer::get_DefaultInvariant, &mscorlib::System::Collections::CaseInsensitiveComparer::set_DefaultInvariant);
			//Public Methods
			mscorlib::System::Int32 CaseInsensitiveComparer::Compare(mscorlib::System::Object a, mscorlib::System::Object b)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(a).name());
					__parameter_types__[1] = Global::GetType(typeid(b).name());
					__parameters__[0] = (MonoObject*)a;
					__parameters__[1] = (MonoObject*)b;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "CaseInsensitiveComparer", 0, NULL, "Compare", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			//Get Set Static Properties Methods
			//	Get:Default
			mscorlib::System::Collections::CaseInsensitiveComparer  CaseInsensitiveComparer::get_Default()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "CaseInsensitiveComparer", 0, NULL, "get_Default", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::CaseInsensitiveComparer(__result__);
			}

			void CaseInsensitiveComparer::set_Default(mscorlib::System::Collections::CaseInsensitiveComparer  value)
			{
				throw;
			}


			//	Get:DefaultInvariant
			mscorlib::System::Collections::CaseInsensitiveComparer  CaseInsensitiveComparer::get_DefaultInvariant()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "CaseInsensitiveComparer", 0, NULL, "get_DefaultInvariant", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::CaseInsensitiveComparer(__result__);
			}

			void CaseInsensitiveComparer::set_DefaultInvariant(mscorlib::System::Collections::CaseInsensitiveComparer  value)
			{
				throw;
			}




		}
	}
}
