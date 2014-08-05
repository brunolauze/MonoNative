#include <mscorlib/System/Runtime/Versioning/mscorlib_System_Runtime_Versioning_VersioningHelper.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Versioning
			{

				//Public Methods
				mscorlib::System::String VersioningHelper::MakeVersionSafeName(mscorlib::System::String name, mscorlib::System::Runtime::Versioning::ResourceScope::__ENUM__ from, mscorlib::System::Runtime::Versioning::ResourceScope::__ENUM__ to)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(from).name());
						__parameter_types__[2] = Global::GetType(typeid(to).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						int __param_from__ = from;
						__parameters__[1] = &__param_from__;
						int __param_to__ = to;
						__parameters__[2] = &__param_to__;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Versioning", "VersioningHelper", 0, NULL, "MakeVersionSafeName", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::String(__result__);
				}

				mscorlib::System::String VersioningHelper::MakeVersionSafeName(const char *name, mscorlib::System::Runtime::Versioning::ResourceScope::__ENUM__ from, mscorlib::System::Runtime::Versioning::ResourceScope::__ENUM__ to)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(from).name());
						__parameter_types__[2] = Global::GetType(typeid(to).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						int __param_from__ = from;
						__parameters__[1] = &__param_from__;
						int __param_to__ = to;
						__parameters__[2] = &__param_to__;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Versioning", "VersioningHelper", 0, NULL, "MakeVersionSafeName", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::String(__result__);
				}

				mscorlib::System::String VersioningHelper::MakeVersionSafeName(mscorlib::System::String name, mscorlib::System::Runtime::Versioning::ResourceScope::__ENUM__ from, mscorlib::System::Runtime::Versioning::ResourceScope::__ENUM__ to, mscorlib::System::Type type)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(from).name());
						__parameter_types__[2] = Global::GetType(typeid(to).name());
						__parameter_types__[3] = Global::GetType(typeid(type).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						int __param_from__ = from;
						__parameters__[1] = &__param_from__;
						int __param_to__ = to;
						__parameters__[2] = &__param_to__;
						__parameters__[3] = (MonoObject*)type;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Versioning", "VersioningHelper", 0, NULL, "MakeVersionSafeName", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::String(__result__);
				}

				mscorlib::System::String VersioningHelper::MakeVersionSafeName(const char *name, mscorlib::System::Runtime::Versioning::ResourceScope::__ENUM__ from, mscorlib::System::Runtime::Versioning::ResourceScope::__ENUM__ to, mscorlib::System::Type type)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(from).name());
						__parameter_types__[2] = Global::GetType(typeid(to).name());
						__parameter_types__[3] = Global::GetType(typeid(type).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						int __param_from__ = from;
						__parameters__[1] = &__param_from__;
						int __param_to__ = to;
						__parameters__[2] = &__param_to__;
						__parameters__[3] = (MonoObject*)type;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Versioning", "VersioningHelper", 0, NULL, "MakeVersionSafeName", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::String(__result__);
				}


			}
		}
	}
}
