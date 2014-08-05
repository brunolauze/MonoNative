#include <mscorlib/System/Collections/mscorlib_System_Collections_CaseInsensitiveHashCodeProvider.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			Property<mscorlib::System::Collections::CaseInsensitiveHashCodeProvider , mscorlib::System::Collections::CaseInsensitiveHashCodeProvider> mscorlib::System::Collections::CaseInsensitiveHashCodeProvider::Default(&mscorlib::System::Collections::CaseInsensitiveHashCodeProvider::get_Default, &mscorlib::System::Collections::CaseInsensitiveHashCodeProvider::set_Default);
			Property<mscorlib::System::Collections::CaseInsensitiveHashCodeProvider , mscorlib::System::Collections::CaseInsensitiveHashCodeProvider> mscorlib::System::Collections::CaseInsensitiveHashCodeProvider::DefaultInvariant(&mscorlib::System::Collections::CaseInsensitiveHashCodeProvider::get_DefaultInvariant, &mscorlib::System::Collections::CaseInsensitiveHashCodeProvider::set_DefaultInvariant);
			//Public Methods
			mscorlib::System::Int32 CaseInsensitiveHashCodeProvider::GetHashCode(mscorlib::System::Object obj)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameters__[0] = (MonoObject*)obj;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "CaseInsensitiveHashCodeProvider", 0, NULL, "GetHashCode", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			//Get Set Static Properties Methods
			//	Get:Default
			mscorlib::System::Collections::CaseInsensitiveHashCodeProvider  CaseInsensitiveHashCodeProvider::get_Default()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "CaseInsensitiveHashCodeProvider", 0, NULL, "get_Default", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::CaseInsensitiveHashCodeProvider(__result__);
			}

			void CaseInsensitiveHashCodeProvider::set_Default(mscorlib::System::Collections::CaseInsensitiveHashCodeProvider  value)
			{
				throw;
			}


			//	Get:DefaultInvariant
			mscorlib::System::Collections::CaseInsensitiveHashCodeProvider  CaseInsensitiveHashCodeProvider::get_DefaultInvariant()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "CaseInsensitiveHashCodeProvider", 0, NULL, "get_DefaultInvariant", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::CaseInsensitiveHashCodeProvider(__result__);
			}

			void CaseInsensitiveHashCodeProvider::set_DefaultInvariant(mscorlib::System::Collections::CaseInsensitiveHashCodeProvider  value)
			{
				throw;
			}




		}
	}
}
