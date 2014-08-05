#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_ITypeLibConverter.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Assembly.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_AssemblyBuilder.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_StrongNameKeyPair.h>
#include <mscorlib/System/mscorlib_System_Version.h>
#include <mscorlib/System/mscorlib_System_Guid.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Public Methods
				mscorlib::System::Object ITypeLibConverter::ConvertAssemblyToTypeLib(mscorlib::System::Reflection::Assembly assembly, mscorlib::System::String typeLibName, mscorlib::System::Runtime::InteropServices::TypeLibExporterFlags::__ENUM__ flags, mscorlib::System::Runtime::InteropServices::ITypeLibExporterNotifySink notifySink)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(assembly).name());
						__parameter_types__[1] = Global::GetType(typeid(typeLibName).name());
						__parameter_types__[2] = Global::GetType(typeid(flags).name());
						__parameter_types__[3] = Global::GetType(typeid(notifySink).name());
						__parameters__[0] = (MonoObject*)assembly;
						__parameters__[1] = mono_string_new(Global::GetDomain(), typeLibName);
						int __param_flags__ = flags;
						__parameters__[2] = &__param_flags__;
						__parameters__[3] = (MonoObject*)notifySink;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "ITypeLibConverter", 0, NULL, "ConvertAssemblyToTypeLib", __mscorlib_System_Runtime_InteropServices_ITypeLibConverter, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Object ITypeLibConverter::ConvertAssemblyToTypeLib(mscorlib::System::Reflection::Assembly assembly, const char *typeLibName, mscorlib::System::Runtime::InteropServices::TypeLibExporterFlags::__ENUM__ flags, mscorlib::System::Runtime::InteropServices::ITypeLibExporterNotifySink notifySink)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(assembly).name());
						__parameter_types__[1] = Global::GetType(typeid(typeLibName).name());
						__parameter_types__[2] = Global::GetType(typeid(flags).name());
						__parameter_types__[3] = Global::GetType(typeid(notifySink).name());
						__parameters__[0] = (MonoObject*)assembly;
						__parameters__[1] = mono_string_new(Global::GetDomain(), typeLibName);
						int __param_flags__ = flags;
						__parameters__[2] = &__param_flags__;
						__parameters__[3] = (MonoObject*)notifySink;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "ITypeLibConverter", 0, NULL, "ConvertAssemblyToTypeLib", __mscorlib_System_Runtime_InteropServices_ITypeLibConverter, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Reflection::Emit::AssemblyBuilder ITypeLibConverter::ConvertTypeLibToAssembly(mscorlib::System::Object typeLib, mscorlib::System::String asmFileName, mscorlib::System::Int32 flags, mscorlib::System::Runtime::InteropServices::ITypeLibImporterNotifySink notifySink, std::vector<mscorlib::System::Byte*> publicKey, mscorlib::System::Reflection::StrongNameKeyPair keyPair, mscorlib::System::Boolean unsafeInterfaces)
				{
						MonoType *__parameter_types__[7];
						void *__parameters__[7];
						__parameter_types__[0] = Global::GetType(typeid(typeLib).name());
						__parameter_types__[1] = Global::GetType(typeid(asmFileName).name());
						__parameter_types__[2] = Global::GetType(typeid(flags).name());
						__parameter_types__[3] = Global::GetType(typeid(notifySink).name());
						__parameter_types__[4] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(publicKey).name()))->eklass);
						__parameter_types__[5] = Global::GetType(typeid(keyPair).name());
						__parameter_types__[6] = Global::GetType(typeid(unsafeInterfaces).name());
						__parameters__[0] = (MonoObject*)typeLib;
						__parameters__[1] = mono_string_new(Global::GetDomain(), asmFileName);
						__parameters__[2] = &flags;
						__parameters__[3] = (MonoObject*)notifySink;
						__parameters__[4] = Global::FromArray<mscorlib::System::Byte*>(publicKey, typeid(mscorlib::System::Byte).name());
						__parameters__[5] = (MonoObject*)keyPair;
						__parameters__[6] = reinterpret_cast<void*>(unsafeInterfaces);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "ITypeLibConverter", 0, NULL, "ConvertTypeLibToAssembly", __mscorlib_System_Runtime_InteropServices_ITypeLibConverter, 7, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::AssemblyBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::AssemblyBuilder ITypeLibConverter::ConvertTypeLibToAssembly(mscorlib::System::Object typeLib, const char *asmFileName, mscorlib::System::Int32 flags, mscorlib::System::Runtime::InteropServices::ITypeLibImporterNotifySink notifySink, std::vector<mscorlib::System::Byte*> publicKey, mscorlib::System::Reflection::StrongNameKeyPair keyPair, mscorlib::System::Boolean unsafeInterfaces)
				{
						MonoType *__parameter_types__[7];
						void *__parameters__[7];
						__parameter_types__[0] = Global::GetType(typeid(typeLib).name());
						__parameter_types__[1] = Global::GetType(typeid(asmFileName).name());
						__parameter_types__[2] = Global::GetType(typeid(flags).name());
						__parameter_types__[3] = Global::GetType(typeid(notifySink).name());
						__parameter_types__[4] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(publicKey).name()))->eklass);
						__parameter_types__[5] = Global::GetType(typeid(keyPair).name());
						__parameter_types__[6] = Global::GetType(typeid(unsafeInterfaces).name());
						__parameters__[0] = (MonoObject*)typeLib;
						__parameters__[1] = mono_string_new(Global::GetDomain(), asmFileName);
						__parameters__[2] = &flags;
						__parameters__[3] = (MonoObject*)notifySink;
						__parameters__[4] = Global::FromArray<mscorlib::System::Byte*>(publicKey, typeid(mscorlib::System::Byte).name());
						__parameters__[5] = (MonoObject*)keyPair;
						__parameters__[6] = reinterpret_cast<void*>(unsafeInterfaces);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "ITypeLibConverter", 0, NULL, "ConvertTypeLibToAssembly", __mscorlib_System_Runtime_InteropServices_ITypeLibConverter, 7, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::AssemblyBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::AssemblyBuilder ITypeLibConverter::ConvertTypeLibToAssembly(mscorlib::System::Object typeLib, mscorlib::System::String asmFileName, mscorlib::System::Runtime::InteropServices::TypeLibImporterFlags::__ENUM__ flags, mscorlib::System::Runtime::InteropServices::ITypeLibImporterNotifySink notifySink, std::vector<mscorlib::System::Byte*> publicKey, mscorlib::System::Reflection::StrongNameKeyPair keyPair, mscorlib::System::String asmNamespace, mscorlib::System::Version asmVersion)
				{
						MonoType *__parameter_types__[8];
						void *__parameters__[8];
						__parameter_types__[0] = Global::GetType(typeid(typeLib).name());
						__parameter_types__[1] = Global::GetType(typeid(asmFileName).name());
						__parameter_types__[2] = Global::GetType(typeid(flags).name());
						__parameter_types__[3] = Global::GetType(typeid(notifySink).name());
						__parameter_types__[4] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(publicKey).name()))->eklass);
						__parameter_types__[5] = Global::GetType(typeid(keyPair).name());
						__parameter_types__[6] = Global::GetType(typeid(asmNamespace).name());
						__parameter_types__[7] = Global::GetType(typeid(asmVersion).name());
						__parameters__[0] = (MonoObject*)typeLib;
						__parameters__[1] = mono_string_new(Global::GetDomain(), asmFileName);
						int __param_flags__ = flags;
						__parameters__[2] = &__param_flags__;
						__parameters__[3] = (MonoObject*)notifySink;
						__parameters__[4] = Global::FromArray<mscorlib::System::Byte*>(publicKey, typeid(mscorlib::System::Byte).name());
						__parameters__[5] = (MonoObject*)keyPair;
						__parameters__[6] = mono_string_new(Global::GetDomain(), asmNamespace);
						__parameters__[7] = (MonoObject*)asmVersion;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "ITypeLibConverter", 0, NULL, "ConvertTypeLibToAssembly", __mscorlib_System_Runtime_InteropServices_ITypeLibConverter, 8, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::AssemblyBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::AssemblyBuilder ITypeLibConverter::ConvertTypeLibToAssembly(mscorlib::System::Object typeLib, const char *asmFileName, mscorlib::System::Runtime::InteropServices::TypeLibImporterFlags::__ENUM__ flags, mscorlib::System::Runtime::InteropServices::ITypeLibImporterNotifySink notifySink, std::vector<mscorlib::System::Byte*> publicKey, mscorlib::System::Reflection::StrongNameKeyPair keyPair, const char *asmNamespace, mscorlib::System::Version asmVersion)
				{
						MonoType *__parameter_types__[8];
						void *__parameters__[8];
						__parameter_types__[0] = Global::GetType(typeid(typeLib).name());
						__parameter_types__[1] = Global::GetType(typeid(asmFileName).name());
						__parameter_types__[2] = Global::GetType(typeid(flags).name());
						__parameter_types__[3] = Global::GetType(typeid(notifySink).name());
						__parameter_types__[4] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(publicKey).name()))->eklass);
						__parameter_types__[5] = Global::GetType(typeid(keyPair).name());
						__parameter_types__[6] = Global::GetType(typeid(asmNamespace).name());
						__parameter_types__[7] = Global::GetType(typeid(asmVersion).name());
						__parameters__[0] = (MonoObject*)typeLib;
						__parameters__[1] = mono_string_new(Global::GetDomain(), asmFileName);
						int __param_flags__ = flags;
						__parameters__[2] = &__param_flags__;
						__parameters__[3] = (MonoObject*)notifySink;
						__parameters__[4] = Global::FromArray<mscorlib::System::Byte*>(publicKey, typeid(mscorlib::System::Byte).name());
						__parameters__[5] = (MonoObject*)keyPair;
						__parameters__[6] = mono_string_new(Global::GetDomain(), asmNamespace);
						__parameters__[7] = (MonoObject*)asmVersion;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "ITypeLibConverter", 0, NULL, "ConvertTypeLibToAssembly", __mscorlib_System_Runtime_InteropServices_ITypeLibConverter, 8, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::AssemblyBuilder(__result__);
				}

				mscorlib::System::Boolean ITypeLibConverter::GetPrimaryInteropAssembly(mscorlib::System::Guid g, mscorlib::System::Int32 major, mscorlib::System::Int32 minor, mscorlib::System::Int32 lcid, mscorlib::System::String asmName, mscorlib::System::String asmCodeBase)
				{
						MonoType *__parameter_types__[6];
						void *__parameters__[6];
						__parameter_types__[0] = Global::GetType(typeid(g).name());
						__parameter_types__[1] = Global::GetType(typeid(major).name());
						__parameter_types__[2] = Global::GetType(typeid(minor).name());
						__parameter_types__[3] = Global::GetType(typeid(lcid).name());
						__parameter_types__[4] = Global::GetType(typeid(asmName).name());
						__parameter_types__[5] = Global::GetType(typeid(asmCodeBase).name());
						__parameters__[0] = (MonoObject*)g;
						__parameters__[1] = &major;
						__parameters__[2] = &minor;
						__parameters__[3] = &lcid;
						__parameters__[4] = (MonoObject*)asmName;
						__parameters__[5] = (MonoObject*)asmCodeBase;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "ITypeLibConverter", 0, NULL, "GetPrimaryInteropAssembly", __mscorlib_System_Runtime_InteropServices_ITypeLibConverter, 6, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


			}
		}
	}
}
