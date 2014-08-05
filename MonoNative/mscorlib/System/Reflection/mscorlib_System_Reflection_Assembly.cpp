#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Assembly.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Module.h>
#include <mscorlib/System/mscorlib_System_ResolveEventArgs.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodInfo.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_Evidence.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/IO/mscorlib_System_IO_FileStream.h>
#include <mscorlib/System/IO/mscorlib_System_IO_Stream.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_AssemblyName.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Binder.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CultureInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ManifestResourceInfo.h>
#include <mscorlib/System/Security/mscorlib_System_Security_PermissionSet.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_CustomAttributeData.h>
#include <mscorlib/System/mscorlib_System_Version.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_TypeInfo.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			//Public Methods
			void Assembly::GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(info).name());
					__parameter_types__[1] = Global::GetType(typeid(context).name());
					__parameters__[0] = (MonoObject*)info;
					__parameters__[1] = (MonoObject*)context;
					Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "GetObjectData", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Boolean Assembly::IsDefined(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(attributeType).name());
					__parameter_types__[1] = Global::GetType(typeid(inherit).name());
					__parameters__[0] = (MonoObject*)attributeType;
					__parameters__[1] = reinterpret_cast<void*>(inherit);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "IsDefined", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			std::vector<mscorlib::System::Object*> Assembly::GetCustomAttributes(mscorlib::System::Boolean inherit)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(inherit).name());
					__parameters__[0] = reinterpret_cast<void*>(inherit);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "GetCustomAttributes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Object*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Object (__array_item__));
					}
					return __array_result__;
			}

			std::vector<mscorlib::System::Object*> Assembly::GetCustomAttributes(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(attributeType).name());
					__parameter_types__[1] = Global::GetType(typeid(inherit).name());
					__parameters__[0] = (MonoObject*)attributeType;
					__parameters__[1] = reinterpret_cast<void*>(inherit);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "GetCustomAttributes", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Object*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Object (__array_item__));
					}
					return __array_result__;
			}

			std::vector<mscorlib::System::IO::FileStream*> Assembly::GetFiles()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "GetFiles", __native_object__, 0, NULL, NULL, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::IO::FileStream*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::IO::FileStream (__array_item__));
					}
					return __array_result__;
			}

			std::vector<mscorlib::System::IO::FileStream*> Assembly::GetFiles(mscorlib::System::Boolean getResourceModules)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(getResourceModules).name());
					__parameters__[0] = reinterpret_cast<void*>(getResourceModules);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "GetFiles", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::IO::FileStream*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::IO::FileStream (__array_item__));
					}
					return __array_result__;
			}

			mscorlib::System::IO::FileStream Assembly::GetFile(mscorlib::System::String name)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameters__[0] = (MonoObject*)name;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "GetFile", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::FileStream(__result__);
			}

			mscorlib::System::IO::Stream Assembly::GetManifestResourceStream(mscorlib::System::String name)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameters__[0] = (MonoObject*)name;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "GetManifestResourceStream", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::Stream(__result__);
			}

			mscorlib::System::IO::Stream Assembly::GetManifestResourceStream(mscorlib::System::Type type, mscorlib::System::String name)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(type).name());
					__parameter_types__[1] = Global::GetType(typeid(name).name());
					__parameters__[0] = (MonoObject*)type;
					__parameters__[1] = (MonoObject*)name;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "GetManifestResourceStream", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::Stream(__result__);
			}

			std::vector<mscorlib::System::Type*> Assembly::GetTypes()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "GetTypes", __native_object__, 0, NULL, NULL, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Type*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Type (__array_item__));
					}
					return __array_result__;
			}

			std::vector<mscorlib::System::Type*> Assembly::GetExportedTypes()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "GetExportedTypes", __native_object__, 0, NULL, NULL, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Type*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Type (__array_item__));
					}
					return __array_result__;
			}

			mscorlib::System::Type Assembly::GetType(mscorlib::System::String name, mscorlib::System::Boolean throwOnError)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(throwOnError).name());
					__parameters__[0] = (MonoObject*)name;
					__parameters__[1] = reinterpret_cast<void*>(throwOnError);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "GetType", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Type(__result__);
			}

			mscorlib::System::Type Assembly::GetType(mscorlib::System::String name)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameters__[0] = (MonoObject*)name;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "GetType", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Type(__result__);
			}

			mscorlib::System::Reflection::AssemblyName Assembly::GetName(mscorlib::System::Boolean copiedName)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(copiedName).name());
					__parameters__[0] = reinterpret_cast<void*>(copiedName);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "GetName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::AssemblyName(__result__);
			}

			mscorlib::System::Reflection::AssemblyName Assembly::GetName()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "GetName", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::AssemblyName(__result__);
			}

			mscorlib::System::String Assembly::ToString()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String Assembly::CreateQualifiedName(mscorlib::System::String assemblyName, mscorlib::System::String typeName)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(assemblyName).name());
					__parameter_types__[1] = Global::GetType(typeid(typeName).name());
					__parameters__[0] = (MonoObject*)assemblyName;
					__parameters__[1] = (MonoObject*)typeName;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "CreateQualifiedName", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::Reflection::Assembly Assembly::GetAssembly(mscorlib::System::Type type)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(type).name());
					__parameters__[0] = (MonoObject*)type;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "GetAssembly", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::Assembly(__result__);
			}

			mscorlib::System::Reflection::Assembly Assembly::GetEntryAssembly()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "GetEntryAssembly", NullMonoObject, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::Assembly(__result__);
			}

			mscorlib::System::Reflection::Assembly Assembly::LoadFrom(mscorlib::System::String assemblyFile)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(assemblyFile).name());
					__parameters__[0] = (MonoObject*)assemblyFile;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "LoadFrom", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::Assembly(__result__);
			}

			mscorlib::System::Reflection::Assembly Assembly::LoadFrom(mscorlib::System::String assemblyFile, mscorlib::System::Security::Policy::Evidence securityEvidence)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(assemblyFile).name());
					__parameter_types__[1] = Global::GetType(typeid(securityEvidence).name());
					__parameters__[0] = (MonoObject*)assemblyFile;
					__parameters__[1] = (MonoObject*)securityEvidence;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "LoadFrom", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::Assembly(__result__);
			}

			mscorlib::System::Reflection::Assembly Assembly::LoadFrom(mscorlib::System::String assemblyFile, mscorlib::System::Security::Policy::Evidence securityEvidence, std::vector<mscorlib::System::Byte*> hashValue, mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__ hashAlgorithm)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType(typeid(assemblyFile).name());
					__parameter_types__[1] = Global::GetType(typeid(securityEvidence).name());
					__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(hashValue).name()))->eklass);
					__parameter_types__[3] = Global::GetType(typeid(hashAlgorithm).name());
					__parameters__[0] = (MonoObject*)assemblyFile;
					__parameters__[1] = (MonoObject*)securityEvidence;
					__parameters__[2] = Global::FromArray<mscorlib::System::Byte*>(hashValue, typeid(mscorlib::System::Byte).name());
					__parameters__[3] = reinterpret_cast<void*>(hashAlgorithm);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "LoadFrom", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::Assembly(__result__);
			}

			mscorlib::System::Reflection::Assembly Assembly::LoadFrom(mscorlib::System::String assemblyFile, std::vector<mscorlib::System::Byte*> hashValue, mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__ hashAlgorithm)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(assemblyFile).name());
					__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(hashValue).name()))->eklass);
					__parameter_types__[2] = Global::GetType(typeid(hashAlgorithm).name());
					__parameters__[0] = (MonoObject*)assemblyFile;
					__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(hashValue, typeid(mscorlib::System::Byte).name());
					__parameters__[2] = reinterpret_cast<void*>(hashAlgorithm);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "LoadFrom", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::Assembly(__result__);
			}

			mscorlib::System::Reflection::Assembly Assembly::UnsafeLoadFrom(mscorlib::System::String assemblyFile)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(assemblyFile).name());
					__parameters__[0] = (MonoObject*)assemblyFile;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "UnsafeLoadFrom", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::Assembly(__result__);
			}

			mscorlib::System::Reflection::Assembly Assembly::LoadFile(mscorlib::System::String path, mscorlib::System::Security::Policy::Evidence securityEvidence)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(securityEvidence).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)securityEvidence;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "LoadFile", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::Assembly(__result__);
			}

			mscorlib::System::Reflection::Assembly Assembly::LoadFile(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "LoadFile", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::Assembly(__result__);
			}

			mscorlib::System::Reflection::Assembly Assembly::Load(mscorlib::System::String assemblyString)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(assemblyString).name());
					__parameters__[0] = (MonoObject*)assemblyString;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "Load", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::Assembly(__result__);
			}

			mscorlib::System::Reflection::Assembly Assembly::Load(mscorlib::System::String assemblyString, mscorlib::System::Security::Policy::Evidence assemblySecurity)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(assemblyString).name());
					__parameter_types__[1] = Global::GetType(typeid(assemblySecurity).name());
					__parameters__[0] = (MonoObject*)assemblyString;
					__parameters__[1] = (MonoObject*)assemblySecurity;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "Load", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::Assembly(__result__);
			}

			mscorlib::System::Reflection::Assembly Assembly::Load(mscorlib::System::Reflection::AssemblyName assemblyRef)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(assemblyRef).name());
					__parameters__[0] = (MonoObject*)assemblyRef;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "Load", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::Assembly(__result__);
			}

			mscorlib::System::Reflection::Assembly Assembly::Load(mscorlib::System::Reflection::AssemblyName assemblyRef, mscorlib::System::Security::Policy::Evidence assemblySecurity)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(assemblyRef).name());
					__parameter_types__[1] = Global::GetType(typeid(assemblySecurity).name());
					__parameters__[0] = (MonoObject*)assemblyRef;
					__parameters__[1] = (MonoObject*)assemblySecurity;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "Load", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::Assembly(__result__);
			}

			mscorlib::System::Reflection::Assembly Assembly::Load(std::vector<mscorlib::System::Byte*> rawAssembly)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rawAssembly).name()))->eklass);
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rawAssembly, typeid(mscorlib::System::Byte).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "Load", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::Assembly(__result__);
			}

			mscorlib::System::Reflection::Assembly Assembly::Load(std::vector<mscorlib::System::Byte*> rawAssembly, std::vector<mscorlib::System::Byte*> rawSymbolStore)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rawAssembly).name()))->eklass);
					__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rawSymbolStore).name()))->eklass);
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rawAssembly, typeid(mscorlib::System::Byte).name());
					__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(rawSymbolStore, typeid(mscorlib::System::Byte).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "Load", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::Assembly(__result__);
			}

			mscorlib::System::Reflection::Assembly Assembly::Load(std::vector<mscorlib::System::Byte*> rawAssembly, std::vector<mscorlib::System::Byte*> rawSymbolStore, mscorlib::System::Security::Policy::Evidence securityEvidence)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rawAssembly).name()))->eklass);
					__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rawSymbolStore).name()))->eklass);
					__parameter_types__[2] = Global::GetType(typeid(securityEvidence).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rawAssembly, typeid(mscorlib::System::Byte).name());
					__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(rawSymbolStore, typeid(mscorlib::System::Byte).name());
					__parameters__[2] = (MonoObject*)securityEvidence;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "Load", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::Assembly(__result__);
			}

			mscorlib::System::Reflection::Assembly Assembly::Load(std::vector<mscorlib::System::Byte*> rawAssembly, std::vector<mscorlib::System::Byte*> rawSymbolStore, mscorlib::System::Security::SecurityContextSource::__ENUM__ securityContextSource)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rawAssembly).name()))->eklass);
					__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rawSymbolStore).name()))->eklass);
					__parameter_types__[2] = Global::GetType(typeid(securityContextSource).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rawAssembly, typeid(mscorlib::System::Byte).name());
					__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(rawSymbolStore, typeid(mscorlib::System::Byte).name());
					__parameters__[2] = reinterpret_cast<void*>(securityContextSource);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "Load", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::Assembly(__result__);
			}

			mscorlib::System::Reflection::Assembly Assembly::ReflectionOnlyLoad(std::vector<mscorlib::System::Byte*> rawAssembly)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rawAssembly).name()))->eklass);
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rawAssembly, typeid(mscorlib::System::Byte).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "ReflectionOnlyLoad", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::Assembly(__result__);
			}

			mscorlib::System::Reflection::Assembly Assembly::ReflectionOnlyLoad(mscorlib::System::String assemblyString)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(assemblyString).name());
					__parameters__[0] = (MonoObject*)assemblyString;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "ReflectionOnlyLoad", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::Assembly(__result__);
			}

			mscorlib::System::Reflection::Assembly Assembly::ReflectionOnlyLoadFrom(mscorlib::System::String assemblyFile)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(assemblyFile).name());
					__parameters__[0] = (MonoObject*)assemblyFile;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "ReflectionOnlyLoadFrom", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::Assembly(__result__);
			}

			mscorlib::System::Reflection::Assembly Assembly::LoadWithPartialName(mscorlib::System::String partialName)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(partialName).name());
					__parameters__[0] = (MonoObject*)partialName;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "LoadWithPartialName", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::Assembly(__result__);
			}

			mscorlib::System::Reflection::Module Assembly::LoadModule(mscorlib::System::String moduleName, std::vector<mscorlib::System::Byte*> rawModule)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(moduleName).name());
					__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rawModule).name()))->eklass);
					__parameters__[0] = (MonoObject*)moduleName;
					__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(rawModule, typeid(mscorlib::System::Byte).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "LoadModule", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::Module(__result__);
			}

			mscorlib::System::Reflection::Module Assembly::LoadModule(mscorlib::System::String moduleName, std::vector<mscorlib::System::Byte*> rawModule, std::vector<mscorlib::System::Byte*> rawSymbolStore)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(moduleName).name());
					__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rawModule).name()))->eklass);
					__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rawSymbolStore).name()))->eklass);
					__parameters__[0] = (MonoObject*)moduleName;
					__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(rawModule, typeid(mscorlib::System::Byte).name());
					__parameters__[2] = Global::FromArray<mscorlib::System::Byte*>(rawSymbolStore, typeid(mscorlib::System::Byte).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "LoadModule", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::Module(__result__);
			}

			mscorlib::System::Reflection::Assembly Assembly::LoadWithPartialName(mscorlib::System::String partialName, mscorlib::System::Security::Policy::Evidence securityEvidence)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(partialName).name());
					__parameter_types__[1] = Global::GetType(typeid(securityEvidence).name());
					__parameters__[0] = (MonoObject*)partialName;
					__parameters__[1] = (MonoObject*)securityEvidence;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "LoadWithPartialName", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::Assembly(__result__);
			}

			mscorlib::System::Object Assembly::CreateInstance(mscorlib::System::String typeName)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(typeName).name());
					__parameters__[0] = (MonoObject*)typeName;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "CreateInstance", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Object(__result__);
			}

			mscorlib::System::Object Assembly::CreateInstance(mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(typeName).name());
					__parameter_types__[1] = Global::GetType(typeid(ignoreCase).name());
					__parameters__[0] = (MonoObject*)typeName;
					__parameters__[1] = reinterpret_cast<void*>(ignoreCase);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "CreateInstance", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Object(__result__);
			}

			mscorlib::System::Object Assembly::CreateInstance(mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes)
			{
					MonoType *__parameter_types__[7];
					void *__parameters__[7];
					__parameter_types__[0] = Global::GetType(typeid(typeName).name());
					__parameter_types__[1] = Global::GetType(typeid(ignoreCase).name());
					__parameter_types__[2] = Global::GetType(typeid(bindingAttr).name());
					__parameter_types__[3] = Global::GetType(typeid(binder).name());
					__parameter_types__[4] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(args).name()))->eklass);
					__parameter_types__[5] = Global::GetType(typeid(culture).name());
					__parameter_types__[6] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(activationAttributes).name()))->eklass);
					__parameters__[0] = (MonoObject*)typeName;
					__parameters__[1] = reinterpret_cast<void*>(ignoreCase);
					__parameters__[2] = reinterpret_cast<void*>(bindingAttr);
					__parameters__[3] = (MonoObject*)binder;
					__parameters__[4] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
					__parameters__[5] = (MonoObject*)culture;
					__parameters__[6] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "CreateInstance", __native_object__, 7, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Object(__result__);
			}

			std::vector<mscorlib::System::Reflection::Module*> Assembly::GetLoadedModules()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "GetLoadedModules", __native_object__, 0, NULL, NULL, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Reflection::Module*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Reflection::Module (__array_item__));
					}
					return __array_result__;
			}

			std::vector<mscorlib::System::Reflection::Module*> Assembly::GetModules()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "GetModules", __native_object__, 0, NULL, NULL, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Reflection::Module*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Reflection::Module (__array_item__));
					}
					return __array_result__;
			}

			std::vector<mscorlib::System::String*> Assembly::GetManifestResourceNames()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "GetManifestResourceNames", __native_object__, 0, NULL, NULL, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::String*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::String (__array_item__));
					}
					return __array_result__;
			}

			mscorlib::System::Reflection::Assembly Assembly::GetExecutingAssembly()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "GetExecutingAssembly", NullMonoObject, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::Assembly(__result__);
			}

			mscorlib::System::Reflection::Assembly Assembly::GetCallingAssembly()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "GetCallingAssembly", NullMonoObject, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::Assembly(__result__);
			}

			mscorlib::System::Reflection::ManifestResourceInfo Assembly::GetManifestResourceInfo(mscorlib::System::String resourceName)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(resourceName).name());
					__parameters__[0] = (MonoObject*)resourceName;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "GetManifestResourceInfo", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::ManifestResourceInfo(__result__);
			}

			mscorlib::System::Int32 Assembly::GetHashCode()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean Assembly::Equals(mscorlib::System::Object o)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(o).name());
					__parameters__[0] = (MonoObject*)o;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Collections::Generic::IList<mscorlib::System::Reflection::CustomAttributeData> Assembly::GetCustomAttributesData()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "GetCustomAttributesData", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IList<mscorlib::System::Reflection::CustomAttributeData>(__result__);
			}

			mscorlib::System::Type Assembly::GetType(mscorlib::System::String name, mscorlib::System::Boolean throwOnError, mscorlib::System::Boolean ignoreCase)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(throwOnError).name());
					__parameter_types__[2] = Global::GetType(typeid(ignoreCase).name());
					__parameters__[0] = (MonoObject*)name;
					__parameters__[1] = reinterpret_cast<void*>(throwOnError);
					__parameters__[2] = reinterpret_cast<void*>(ignoreCase);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "GetType", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Type(__result__);
			}

			mscorlib::System::Reflection::Module Assembly::GetModule(mscorlib::System::String name)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameters__[0] = (MonoObject*)name;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "GetModule", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::Module(__result__);
			}

			std::vector<mscorlib::System::Reflection::AssemblyName*> Assembly::GetReferencedAssemblies()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "GetReferencedAssemblies", __native_object__, 0, NULL, NULL, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Reflection::AssemblyName*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Reflection::AssemblyName (__array_item__));
					}
					return __array_result__;
			}

			std::vector<mscorlib::System::Reflection::Module*> Assembly::GetModules(mscorlib::System::Boolean getResourceModules)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(getResourceModules).name());
					__parameters__[0] = reinterpret_cast<void*>(getResourceModules);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "GetModules", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Reflection::Module*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Reflection::Module (__array_item__));
					}
					return __array_result__;
			}

			std::vector<mscorlib::System::Reflection::Module*> Assembly::GetLoadedModules(mscorlib::System::Boolean getResourceModules)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(getResourceModules).name());
					__parameters__[0] = reinterpret_cast<void*>(getResourceModules);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "GetLoadedModules", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Reflection::Module*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Reflection::Module (__array_item__));
					}
					return __array_result__;
			}

			mscorlib::System::Reflection::Assembly Assembly::GetSatelliteAssembly(mscorlib::System::Globalization::CultureInfo culture)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(culture).name());
					__parameters__[0] = (MonoObject*)culture;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "GetSatelliteAssembly", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::Assembly(__result__);
			}

			mscorlib::System::Reflection::Assembly Assembly::GetSatelliteAssembly(mscorlib::System::Globalization::CultureInfo culture, mscorlib::System::Version version)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(culture).name());
					__parameter_types__[1] = Global::GetType(typeid(version).name());
					__parameters__[0] = (MonoObject*)culture;
					__parameters__[1] = (MonoObject*)version;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "GetSatelliteAssembly", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::Assembly(__result__);
			}

			//Get Set Properties Methods
			//	Get:CodeBase
			mscorlib::System::String  Assembly::get_CodeBase() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "get_CodeBase", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:EscapedCodeBase
			mscorlib::System::String  Assembly::get_EscapedCodeBase() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "get_EscapedCodeBase", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:FullName
			mscorlib::System::String  Assembly::get_FullName() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "get_FullName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:EntryPoint
			mscorlib::System::Reflection::MethodInfo  Assembly::get_EntryPoint() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "get_EntryPoint", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Reflection::MethodInfo(__result__);
			}


			//	Get:Evidence
			mscorlib::System::Security::Policy::Evidence  Assembly::get_Evidence() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "get_Evidence", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Security::Policy::Evidence(__result__);
			}


			//	Get:Location
			mscorlib::System::String  Assembly::get_Location() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "get_Location", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:ImageRuntimeVersion
			mscorlib::System::String  Assembly::get_ImageRuntimeVersion() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "get_ImageRuntimeVersion", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:HostContext
			mscorlib::System::Int64  Assembly::get_HostContext() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "get_HostContext", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
			}


			//	Get:ReflectionOnly
			mscorlib::System::Boolean  Assembly::get_ReflectionOnly() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "get_ReflectionOnly", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:PermissionSet
			mscorlib::System::Security::PermissionSet  Assembly::get_PermissionSet() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "get_PermissionSet", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Security::PermissionSet(__result__);
			}


			//	Get:SecurityRuleSet
			mscorlib::System::Security::SecurityRuleSet::__ENUM__  Assembly::get_SecurityRuleSet() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "get_SecurityRuleSet", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Security::SecurityRuleSet::__ENUM__*)mono_object_unbox(__result__);
			}


			//	Get:IsFullyTrusted
			mscorlib::System::Boolean  Assembly::get_IsFullyTrusted() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "get_IsFullyTrusted", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:ManifestModule
			mscorlib::System::Reflection::Module  Assembly::get_ManifestModule() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "get_ManifestModule", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Reflection::Module(__result__);
			}


			//	Get:GlobalAssemblyCache
			mscorlib::System::Boolean  Assembly::get_GlobalAssemblyCache() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "get_GlobalAssemblyCache", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsDynamic
			mscorlib::System::Boolean  Assembly::get_IsDynamic() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "get_IsDynamic", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:DefinedTypes
			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::TypeInfo>  Assembly::get_DefinedTypes() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "get_DefinedTypes", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::TypeInfo>(__result__);
			}


			//	Get:ExportedTypes
			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Type>  Assembly::get_ExportedTypes() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "get_ExportedTypes", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Type>(__result__);
			}


			//	Get:Modules
			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::Module>  Assembly::get_Modules() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "get_Modules", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::Module>(__result__);
			}


			//	Get:CustomAttributes
			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>  Assembly::get_CustomAttributes() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "get_CustomAttributes", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>(__result__);
			}



		}
	}
}
