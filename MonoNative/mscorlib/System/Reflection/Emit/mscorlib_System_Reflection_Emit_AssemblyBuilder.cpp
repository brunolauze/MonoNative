#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_AssemblyBuilder.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodInfo.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_ModuleBuilder.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/IO/mscorlib_System_IO_FileStream.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ManifestResourceInfo.h>
#include <mscorlib/System/IO/mscorlib_System_IO_Stream.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_CustomAttributeBuilder.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ConstructorInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Module.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_AssemblyName.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CultureInfo.h>
#include <mscorlib/System/mscorlib_System_Version.h>
#include <mscorlib/System/mscorlib_System_ResolveEventArgs.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_Evidence.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Binder.h>
#include <mscorlib/System/Security/mscorlib_System_Security_PermissionSet.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_CustomAttributeData.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_TypeInfo.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{
			namespace Emit
			{

				//Public Methods
				void AssemblyBuilder::AddResourceFile(mscorlib::System::String name, mscorlib::System::String fileName)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(fileName).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = (MonoObject*)fileName;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "AddResourceFile", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void AssemblyBuilder::AddResourceFile(const char *name, const char *fileName)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						__parameters__[1] = mono_string_new(Global::GetDomain(), fileName);
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "AddResourceFile", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void AssemblyBuilder::AddResourceFile(mscorlib::System::String name, mscorlib::System::String fileName, mscorlib::System::Reflection::ResourceAttributes::__ENUM__ attribute)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(fileName).name());
						__parameter_types__[2] = Global::GetType(typeid(attribute).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = (MonoObject*)fileName;
						mscorlib::System::Int32 __param_attribute__ = attribute;
						__parameters__[2] = &__param_attribute__;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "AddResourceFile", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				}

				void AssemblyBuilder::AddResourceFile(const char *name, const char *fileName, mscorlib::System::Reflection::ResourceAttributes::__ENUM__ attribute)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType(typeid(attribute).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						__parameters__[1] = mono_string_new(Global::GetDomain(), fileName);
						mscorlib::System::Int32 __param_attribute__ = attribute;
						__parameters__[2] = &__param_attribute__;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "AddResourceFile", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Reflection::Emit::ModuleBuilder AssemblyBuilder::DefineDynamicModule(mscorlib::System::String name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "DefineDynamicModule", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::ModuleBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::ModuleBuilder AssemblyBuilder::DefineDynamicModule(const char *name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "DefineDynamicModule", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::ModuleBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::ModuleBuilder AssemblyBuilder::DefineDynamicModule(mscorlib::System::String name, mscorlib::System::Boolean emitSymbolInfo)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(emitSymbolInfo).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(emitSymbolInfo);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "DefineDynamicModule", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::ModuleBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::ModuleBuilder AssemblyBuilder::DefineDynamicModule(const char *name, mscorlib::System::Boolean emitSymbolInfo)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType(typeid(emitSymbolInfo).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						__parameters__[1] = reinterpret_cast<void*>(emitSymbolInfo);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "DefineDynamicModule", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::ModuleBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::ModuleBuilder AssemblyBuilder::DefineDynamicModule(mscorlib::System::String name, mscorlib::System::String fileName)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(fileName).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = (MonoObject*)fileName;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "DefineDynamicModule", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::ModuleBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::ModuleBuilder AssemblyBuilder::DefineDynamicModule(const char *name, const char *fileName)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						__parameters__[1] = mono_string_new(Global::GetDomain(), fileName);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "DefineDynamicModule", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::ModuleBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::ModuleBuilder AssemblyBuilder::DefineDynamicModule(mscorlib::System::String name, mscorlib::System::String fileName, mscorlib::System::Boolean emitSymbolInfo)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(fileName).name());
						__parameter_types__[2] = Global::GetType(typeid(emitSymbolInfo).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = (MonoObject*)fileName;
						__parameters__[2] = reinterpret_cast<void*>(emitSymbolInfo);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "DefineDynamicModule", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::ModuleBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::ModuleBuilder AssemblyBuilder::DefineDynamicModule(const char *name, const char *fileName, mscorlib::System::Boolean emitSymbolInfo)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType(typeid(emitSymbolInfo).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						__parameters__[1] = mono_string_new(Global::GetDomain(), fileName);
						__parameters__[2] = reinterpret_cast<void*>(emitSymbolInfo);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "DefineDynamicModule", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::ModuleBuilder(__result__);
				}

				mscorlib::System::Resources::IResourceWriter AssemblyBuilder::DefineResource(mscorlib::System::String name, mscorlib::System::String description, mscorlib::System::String fileName)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(description).name());
						__parameter_types__[2] = Global::GetType(typeid(fileName).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = (MonoObject*)description;
						__parameters__[2] = (MonoObject*)fileName;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "DefineResource", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Resources::IResourceWriter(__result__);
				}

				mscorlib::System::Resources::IResourceWriter AssemblyBuilder::DefineResource(const char *name, const char *description, const char *fileName)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						__parameters__[1] = mono_string_new(Global::GetDomain(), description);
						__parameters__[2] = mono_string_new(Global::GetDomain(), fileName);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "DefineResource", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Resources::IResourceWriter(__result__);
				}

				mscorlib::System::Resources::IResourceWriter AssemblyBuilder::DefineResource(mscorlib::System::String name, mscorlib::System::String description, mscorlib::System::String fileName, mscorlib::System::Reflection::ResourceAttributes::__ENUM__ attribute)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(description).name());
						__parameter_types__[2] = Global::GetType(typeid(fileName).name());
						__parameter_types__[3] = Global::GetType(typeid(attribute).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = (MonoObject*)description;
						__parameters__[2] = (MonoObject*)fileName;
						mscorlib::System::Int32 __param_attribute__ = attribute;
						__parameters__[3] = &__param_attribute__;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "DefineResource", __native_object__, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Resources::IResourceWriter(__result__);
				}

				mscorlib::System::Resources::IResourceWriter AssemblyBuilder::DefineResource(const char *name, const char *description, const char *fileName, mscorlib::System::Reflection::ResourceAttributes::__ENUM__ attribute)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[3] = Global::GetType(typeid(attribute).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						__parameters__[1] = mono_string_new(Global::GetDomain(), description);
						__parameters__[2] = mono_string_new(Global::GetDomain(), fileName);
						mscorlib::System::Int32 __param_attribute__ = attribute;
						__parameters__[3] = &__param_attribute__;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "DefineResource", __native_object__, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Resources::IResourceWriter(__result__);
				}

				void AssemblyBuilder::DefineUnmanagedResource(std::vector<mscorlib::System::Byte*> resource)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(resource, typeid(mscorlib::System::Byte).name());
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "DefineUnmanagedResource", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void AssemblyBuilder::DefineUnmanagedResource(mscorlib::System::String resourceFileName)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(resourceFileName).name());
						__parameters__[0] = (MonoObject*)resourceFileName;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "DefineUnmanagedResource", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void AssemblyBuilder::DefineUnmanagedResource(const char *resourceFileName)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = mono_string_new(Global::GetDomain(), resourceFileName);
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "DefineUnmanagedResource", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void AssemblyBuilder::DefineVersionInfoResource()
				{
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "DefineVersionInfoResource", __native_object__, 0, NULL, NULL, NULL);
				}

				void AssemblyBuilder::DefineVersionInfoResource(mscorlib::System::String product, mscorlib::System::String productVersion, mscorlib::System::String company, mscorlib::System::String copyright, mscorlib::System::String trademark)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(product).name());
						__parameter_types__[1] = Global::GetType(typeid(productVersion).name());
						__parameter_types__[2] = Global::GetType(typeid(company).name());
						__parameter_types__[3] = Global::GetType(typeid(copyright).name());
						__parameter_types__[4] = Global::GetType(typeid(trademark).name());
						__parameters__[0] = (MonoObject*)product;
						__parameters__[1] = (MonoObject*)productVersion;
						__parameters__[2] = (MonoObject*)company;
						__parameters__[3] = (MonoObject*)copyright;
						__parameters__[4] = (MonoObject*)trademark;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "DefineVersionInfoResource", __native_object__, 5, __parameter_types__, __parameters__, NULL);
				}

				void AssemblyBuilder::DefineVersionInfoResource(const char *product, const char *productVersion, const char *company, const char *copyright, const char *trademark)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[3] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[4] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = mono_string_new(Global::GetDomain(), product);
						__parameters__[1] = mono_string_new(Global::GetDomain(), productVersion);
						__parameters__[2] = mono_string_new(Global::GetDomain(), company);
						__parameters__[3] = mono_string_new(Global::GetDomain(), copyright);
						__parameters__[4] = mono_string_new(Global::GetDomain(), trademark);
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "DefineVersionInfoResource", __native_object__, 5, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Reflection::Emit::ModuleBuilder AssemblyBuilder::GetDynamicModule(mscorlib::System::String name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "GetDynamicModule", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::ModuleBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::ModuleBuilder AssemblyBuilder::GetDynamicModule(const char *name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "GetDynamicModule", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::ModuleBuilder(__result__);
				}

				std::vector<mscorlib::System::Type*> AssemblyBuilder::GetExportedTypes()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "GetExportedTypes", __native_object__, 0, NULL, NULL, NULL);
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

				mscorlib::System::IO::FileStream AssemblyBuilder::GetFile(mscorlib::System::String name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "GetFile", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IO::FileStream(__result__);
				}

				mscorlib::System::IO::FileStream AssemblyBuilder::GetFile(const char *name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "GetFile", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IO::FileStream(__result__);
				}

				std::vector<mscorlib::System::IO::FileStream*> AssemblyBuilder::GetFiles(mscorlib::System::Boolean getResourceModules)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(getResourceModules).name());
						__parameters__[0] = reinterpret_cast<void*>(getResourceModules);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "GetFiles", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				mscorlib::System::Reflection::ManifestResourceInfo AssemblyBuilder::GetManifestResourceInfo(mscorlib::System::String resourceName)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(resourceName).name());
						__parameters__[0] = (MonoObject*)resourceName;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "GetManifestResourceInfo", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::ManifestResourceInfo(__result__);
				}

				mscorlib::System::Reflection::ManifestResourceInfo AssemblyBuilder::GetManifestResourceInfo(const char *resourceName)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = mono_string_new(Global::GetDomain(), resourceName);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "GetManifestResourceInfo", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::ManifestResourceInfo(__result__);
				}

				std::vector<mscorlib::System::String*> AssemblyBuilder::GetManifestResourceNames()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "GetManifestResourceNames", __native_object__, 0, NULL, NULL, NULL);
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

				mscorlib::System::IO::Stream AssemblyBuilder::GetManifestResourceStream(mscorlib::System::String name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "GetManifestResourceStream", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IO::Stream(__result__);
				}

				mscorlib::System::IO::Stream AssemblyBuilder::GetManifestResourceStream(const char *name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "GetManifestResourceStream", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IO::Stream(__result__);
				}

				mscorlib::System::IO::Stream AssemblyBuilder::GetManifestResourceStream(mscorlib::System::Type type, mscorlib::System::String name)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(type).name());
						__parameter_types__[1] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)type;
						__parameters__[1] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "GetManifestResourceStream", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IO::Stream(__result__);
				}

				mscorlib::System::IO::Stream AssemblyBuilder::GetManifestResourceStream(mscorlib::System::Type type, const char *name)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(type).name());
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)type;
						__parameters__[1] = mono_string_new(Global::GetDomain(), name);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "GetManifestResourceStream", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IO::Stream(__result__);
				}

				void AssemblyBuilder::Save(mscorlib::System::String assemblyFileName, mscorlib::System::Reflection::PortableExecutableKinds::__ENUM__ portableExecutableKind, mscorlib::System::Reflection::ImageFileMachine::__ENUM__ imageFileMachine)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(assemblyFileName).name());
						__parameter_types__[1] = Global::GetType(typeid(portableExecutableKind).name());
						__parameter_types__[2] = Global::GetType(typeid(imageFileMachine).name());
						__parameters__[0] = (MonoObject*)assemblyFileName;
						mscorlib::System::Int32 __param_portableExecutableKind__ = portableExecutableKind;
						__parameters__[1] = &__param_portableExecutableKind__;
						mscorlib::System::Int32 __param_imageFileMachine__ = imageFileMachine;
						__parameters__[2] = &__param_imageFileMachine__;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "Save", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				}

				void AssemblyBuilder::Save(const char *assemblyFileName, mscorlib::System::Reflection::PortableExecutableKinds::__ENUM__ portableExecutableKind, mscorlib::System::Reflection::ImageFileMachine::__ENUM__ imageFileMachine)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType(typeid(portableExecutableKind).name());
						__parameter_types__[2] = Global::GetType(typeid(imageFileMachine).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), assemblyFileName);
						mscorlib::System::Int32 __param_portableExecutableKind__ = portableExecutableKind;
						__parameters__[1] = &__param_portableExecutableKind__;
						mscorlib::System::Int32 __param_imageFileMachine__ = imageFileMachine;
						__parameters__[2] = &__param_imageFileMachine__;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "Save", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				}

				void AssemblyBuilder::Save(mscorlib::System::String assemblyFileName)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(assemblyFileName).name());
						__parameters__[0] = (MonoObject*)assemblyFileName;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "Save", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void AssemblyBuilder::Save(const char *assemblyFileName)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = mono_string_new(Global::GetDomain(), assemblyFileName);
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "Save", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void AssemblyBuilder::SetEntryPoint(mscorlib::System::Reflection::MethodInfo entryMethod)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(entryMethod).name());
						__parameters__[0] = (MonoObject*)entryMethod;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "SetEntryPoint", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void AssemblyBuilder::SetEntryPoint(mscorlib::System::Reflection::MethodInfo entryMethod, mscorlib::System::Reflection::Emit::PEFileKinds::__ENUM__ fileKind)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(entryMethod).name());
						__parameter_types__[1] = Global::GetType(typeid(fileKind).name());
						__parameters__[0] = (MonoObject*)entryMethod;
						mscorlib::System::Int32 __param_fileKind__ = fileKind;
						__parameters__[1] = &__param_fileKind__;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "SetEntryPoint", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void AssemblyBuilder::SetCustomAttribute(mscorlib::System::Reflection::Emit::CustomAttributeBuilder customBuilder)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(customBuilder).name());
						__parameters__[0] = (MonoObject*)customBuilder;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "SetCustomAttribute", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void AssemblyBuilder::SetCustomAttribute(mscorlib::System::Reflection::ConstructorInfo con, std::vector<mscorlib::System::Byte*> binaryAttribute)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(con).name());
						__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
						__parameters__[0] = (MonoObject*)con;
						__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(binaryAttribute, typeid(mscorlib::System::Byte).name());
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "SetCustomAttribute", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Type AssemblyBuilder::GetType(mscorlib::System::String name, mscorlib::System::Boolean throwOnError, mscorlib::System::Boolean ignoreCase)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(throwOnError).name());
						__parameter_types__[2] = Global::GetType(typeid(ignoreCase).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(throwOnError);
						__parameters__[2] = reinterpret_cast<void*>(ignoreCase);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "GetType", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::Type AssemblyBuilder::GetType(const char *name, mscorlib::System::Boolean throwOnError, mscorlib::System::Boolean ignoreCase)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType(typeid(throwOnError).name());
						__parameter_types__[2] = Global::GetType(typeid(ignoreCase).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						__parameters__[1] = reinterpret_cast<void*>(throwOnError);
						__parameters__[2] = reinterpret_cast<void*>(ignoreCase);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "GetType", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::Reflection::Module AssemblyBuilder::GetModule(mscorlib::System::String name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "GetModule", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Module(__result__);
				}

				mscorlib::System::Reflection::Module AssemblyBuilder::GetModule(const char *name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "GetModule", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Module(__result__);
				}

				std::vector<mscorlib::System::Reflection::Module*> AssemblyBuilder::GetModules(mscorlib::System::Boolean getResourceModules)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(getResourceModules).name());
						__parameters__[0] = reinterpret_cast<void*>(getResourceModules);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "GetModules", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				mscorlib::System::Reflection::AssemblyName AssemblyBuilder::GetName(mscorlib::System::Boolean copiedName)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(copiedName).name());
						__parameters__[0] = reinterpret_cast<void*>(copiedName);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "GetName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::AssemblyName(__result__);
				}

				std::vector<mscorlib::System::Reflection::AssemblyName*> AssemblyBuilder::GetReferencedAssemblies()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "GetReferencedAssemblies", __native_object__, 0, NULL, NULL, NULL);
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

				std::vector<mscorlib::System::Reflection::Module*> AssemblyBuilder::GetLoadedModules(mscorlib::System::Boolean getResourceModules)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(getResourceModules).name());
						__parameters__[0] = reinterpret_cast<void*>(getResourceModules);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "GetLoadedModules", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				mscorlib::System::Reflection::Assembly AssemblyBuilder::GetSatelliteAssembly(mscorlib::System::Globalization::CultureInfo culture)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(culture).name());
						__parameters__[0] = (MonoObject*)culture;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "GetSatelliteAssembly", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Assembly(__result__);
				}

				mscorlib::System::Reflection::Assembly AssemblyBuilder::GetSatelliteAssembly(mscorlib::System::Globalization::CultureInfo culture, mscorlib::System::Version version)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(culture).name());
						__parameter_types__[1] = Global::GetType(typeid(version).name());
						__parameters__[0] = (MonoObject*)culture;
						__parameters__[1] = (MonoObject*)version;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "GetSatelliteAssembly", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Assembly(__result__);
				}

				mscorlib::System::Boolean AssemblyBuilder::Equals(mscorlib::System::Object obj)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameters__[0] = (MonoObject*)obj;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 AssemblyBuilder::GetHashCode()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean AssemblyBuilder::IsDefined(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(attributeType).name());
						__parameter_types__[1] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = (MonoObject*)attributeType;
						__parameters__[1] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "IsDefined", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				std::vector<mscorlib::System::Object*> AssemblyBuilder::GetCustomAttributes(mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "GetCustomAttributes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Object*> AssemblyBuilder::GetCustomAttributes(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(attributeType).name());
						__parameter_types__[1] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = (MonoObject*)attributeType;
						__parameters__[1] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "GetCustomAttributes", __native_object__, 2, __parameter_types__, __parameters__, NULL);
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

				//Get Set Properties Methods
				//	Get:CodeBase
				mscorlib::System::String  AssemblyBuilder::get_CodeBase() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "get_CodeBase", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:EntryPoint
				mscorlib::System::Reflection::MethodInfo  AssemblyBuilder::get_EntryPoint() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "get_EntryPoint", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::MethodInfo(__result__);
				}


				//	Get:Location
				mscorlib::System::String  AssemblyBuilder::get_Location() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "get_Location", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:ImageRuntimeVersion
				mscorlib::System::String  AssemblyBuilder::get_ImageRuntimeVersion() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "get_ImageRuntimeVersion", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:ReflectionOnly
				mscorlib::System::Boolean  AssemblyBuilder::get_ReflectionOnly() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "get_ReflectionOnly", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:ManifestModule
				mscorlib::System::Reflection::Module  AssemblyBuilder::get_ManifestModule() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "get_ManifestModule", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::Module(__result__);
				}


				//	Get:GlobalAssemblyCache
				mscorlib::System::Boolean  AssemblyBuilder::get_GlobalAssemblyCache() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "get_GlobalAssemblyCache", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsDynamic
				mscorlib::System::Boolean  AssemblyBuilder::get_IsDynamic() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "get_IsDynamic", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:FullName
				mscorlib::System::String  AssemblyBuilder::get_FullName() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "AssemblyBuilder", 0, NULL, "get_FullName", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:EscapedCodeBase
				mscorlib::System::String  AssemblyBuilder::get_EscapedCodeBase() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "get_EscapedCodeBase", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:Evidence
				mscorlib::System::Security::Policy::Evidence  AssemblyBuilder::get_Evidence() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "get_Evidence", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Policy::Evidence(__result__);
				}


				//	Get:HostContext
				mscorlib::System::Int64  AssemblyBuilder::get_HostContext() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "get_HostContext", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
				}


				//	Get:PermissionSet
				mscorlib::System::Security::PermissionSet  AssemblyBuilder::get_PermissionSet() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "get_PermissionSet", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::PermissionSet(__result__);
				}


				//	Get:SecurityRuleSet
				mscorlib::System::Security::SecurityRuleSet::__ENUM__  AssemblyBuilder::get_SecurityRuleSet() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "get_SecurityRuleSet", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Security::SecurityRuleSet::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
				}


				//	Get:IsFullyTrusted
				mscorlib::System::Boolean  AssemblyBuilder::get_IsFullyTrusted() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "get_IsFullyTrusted", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:DefinedTypes
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::TypeInfo>  AssemblyBuilder::get_DefinedTypes() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "get_DefinedTypes", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::TypeInfo>(__result__);
				}


				//	Get:ExportedTypes
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Type>  AssemblyBuilder::get_ExportedTypes() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "get_ExportedTypes", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Type>(__result__);
				}


				//	Get:Modules
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::Module>  AssemblyBuilder::get_Modules() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "get_Modules", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::Module>(__result__);
				}


				//	Get:CustomAttributes
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>  AssemblyBuilder::get_CustomAttributes() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Assembly", 0, NULL, "get_CustomAttributes", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>(__result__);
				}



			}
		}
	}
}
