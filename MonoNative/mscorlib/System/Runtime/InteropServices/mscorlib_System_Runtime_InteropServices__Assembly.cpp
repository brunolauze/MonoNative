#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Assembly.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_AssemblyName.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodInfo.h>
#include <mscorlib/System/IO/mscorlib_System_IO_Stream.h>
#include <mscorlib/System/IO/mscorlib_System_IO_FileStream.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ManifestResourceInfo.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_Evidence.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Assembly.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CultureInfo.h>
#include <mscorlib/System/mscorlib_System_Version.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Module.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Binder.h>
#include <mscorlib/System/mscorlib_System_ResolveEventArgs.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Public Methods
				mscorlib::System::String _Assembly::ToString()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "ToString", __mscorlib_System_Runtime_InteropServices__Assembly, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
				}

				mscorlib::System::Boolean _Assembly::Equals(mscorlib::System::Object other)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(other).name());
						__parameters__[0] = (MonoObject*)other;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "Equals", __mscorlib_System_Runtime_InteropServices__Assembly, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 _Assembly::GetHashCode()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "GetHashCode", __mscorlib_System_Runtime_InteropServices__Assembly, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Type _Assembly::GetType()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "GetType", __mscorlib_System_Runtime_InteropServices__Assembly, 0, NULL, NULL, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::Reflection::AssemblyName _Assembly::GetName()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "GetName", __mscorlib_System_Runtime_InteropServices__Assembly, 0, NULL, NULL, NULL);
						return mscorlib::System::Reflection::AssemblyName(__result__);
				}

				mscorlib::System::Reflection::AssemblyName _Assembly::GetName(mscorlib::System::Boolean copiedName)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(copiedName).name());
						__parameters__[0] = reinterpret_cast<void*>(copiedName);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "GetName", __mscorlib_System_Runtime_InteropServices__Assembly, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::AssemblyName(__result__);
				}

				mscorlib::System::Type _Assembly::GetType(mscorlib::System::String name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "GetType", __mscorlib_System_Runtime_InteropServices__Assembly, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::Type _Assembly::GetType(mscorlib::System::String name, mscorlib::System::Boolean throwOnError)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(throwOnError).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(throwOnError);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "GetType", __mscorlib_System_Runtime_InteropServices__Assembly, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Type(__result__);
				}

				std::vector<mscorlib::System::Type*> _Assembly::GetExportedTypes()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "GetExportedTypes", __mscorlib_System_Runtime_InteropServices__Assembly, 0, NULL, NULL, NULL);
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

				std::vector<mscorlib::System::Type*> _Assembly::GetTypes()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "GetTypes", __mscorlib_System_Runtime_InteropServices__Assembly, 0, NULL, NULL, NULL);
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

				mscorlib::System::IO::Stream _Assembly::GetManifestResourceStream(mscorlib::System::Type type, mscorlib::System::String name)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(type).name());
						__parameter_types__[1] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)type;
						__parameters__[1] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "GetManifestResourceStream", __mscorlib_System_Runtime_InteropServices__Assembly, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IO::Stream(__result__);
				}

				mscorlib::System::IO::Stream _Assembly::GetManifestResourceStream(mscorlib::System::String name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "GetManifestResourceStream", __mscorlib_System_Runtime_InteropServices__Assembly, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IO::Stream(__result__);
				}

				mscorlib::System::IO::FileStream _Assembly::GetFile(mscorlib::System::String name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "GetFile", __mscorlib_System_Runtime_InteropServices__Assembly, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IO::FileStream(__result__);
				}

				std::vector<mscorlib::System::IO::FileStream*> _Assembly::GetFiles()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "GetFiles", __mscorlib_System_Runtime_InteropServices__Assembly, 0, NULL, NULL, NULL);
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

				std::vector<mscorlib::System::IO::FileStream*> _Assembly::GetFiles(mscorlib::System::Boolean getResourceModules)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(getResourceModules).name());
						__parameters__[0] = reinterpret_cast<void*>(getResourceModules);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "GetFiles", __mscorlib_System_Runtime_InteropServices__Assembly, 1, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::String*> _Assembly::GetManifestResourceNames()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "GetManifestResourceNames", __mscorlib_System_Runtime_InteropServices__Assembly, 0, NULL, NULL, NULL);
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

				mscorlib::System::Reflection::ManifestResourceInfo _Assembly::GetManifestResourceInfo(mscorlib::System::String resourceName)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(resourceName).name());
						__parameters__[0] = (MonoObject*)resourceName;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "GetManifestResourceInfo", __mscorlib_System_Runtime_InteropServices__Assembly, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::ManifestResourceInfo(__result__);
				}

				std::vector<mscorlib::System::Object*> _Assembly::GetCustomAttributes(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(attributeType).name());
						__parameter_types__[1] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = (MonoObject*)attributeType;
						__parameters__[1] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "GetCustomAttributes", __mscorlib_System_Runtime_InteropServices__Assembly, 2, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Object*> _Assembly::GetCustomAttributes(mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "GetCustomAttributes", __mscorlib_System_Runtime_InteropServices__Assembly, 1, __parameter_types__, __parameters__, NULL);
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

				mscorlib::System::Boolean _Assembly::IsDefined(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(attributeType).name());
						__parameter_types__[1] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = (MonoObject*)attributeType;
						__parameters__[1] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "IsDefined", __mscorlib_System_Runtime_InteropServices__Assembly, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void _Assembly::GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(info).name());
						__parameter_types__[1] = Global::GetType(typeid(context).name());
						__parameters__[0] = (MonoObject*)info;
						__parameters__[1] = (MonoObject*)context;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "GetObjectData", __mscorlib_System_Runtime_InteropServices__Assembly, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Type _Assembly::GetType(mscorlib::System::String name, mscorlib::System::Boolean throwOnError, mscorlib::System::Boolean ignoreCase)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(throwOnError).name());
						__parameter_types__[2] = Global::GetType(typeid(ignoreCase).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(throwOnError);
						__parameters__[2] = reinterpret_cast<void*>(ignoreCase);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "GetType", __mscorlib_System_Runtime_InteropServices__Assembly, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::Reflection::Assembly _Assembly::GetSatelliteAssembly(mscorlib::System::Globalization::CultureInfo culture)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(culture).name());
						__parameters__[0] = (MonoObject*)culture;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "GetSatelliteAssembly", __mscorlib_System_Runtime_InteropServices__Assembly, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Assembly(__result__);
				}

				mscorlib::System::Reflection::Assembly _Assembly::GetSatelliteAssembly(mscorlib::System::Globalization::CultureInfo culture, mscorlib::System::Version version)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(culture).name());
						__parameter_types__[1] = Global::GetType(typeid(version).name());
						__parameters__[0] = (MonoObject*)culture;
						__parameters__[1] = (MonoObject*)version;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "GetSatelliteAssembly", __mscorlib_System_Runtime_InteropServices__Assembly, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Assembly(__result__);
				}

				mscorlib::System::Reflection::Module _Assembly::LoadModule(mscorlib::System::String moduleName, std::vector<mscorlib::System::Byte*> rawModule)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(moduleName).name());
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rawModule).name()))->eklass);
						__parameters__[0] = (MonoObject*)moduleName;
						__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(rawModule, typeid(mscorlib::System::Byte).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "LoadModule", __mscorlib_System_Runtime_InteropServices__Assembly, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Module(__result__);
				}

				mscorlib::System::Reflection::Module _Assembly::LoadModule(mscorlib::System::String moduleName, std::vector<mscorlib::System::Byte*> rawModule, std::vector<mscorlib::System::Byte*> rawSymbolStore)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(moduleName).name());
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rawModule).name()))->eklass);
						__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rawSymbolStore).name()))->eklass);
						__parameters__[0] = (MonoObject*)moduleName;
						__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(rawModule, typeid(mscorlib::System::Byte).name());
						__parameters__[2] = Global::FromArray<mscorlib::System::Byte*>(rawSymbolStore, typeid(mscorlib::System::Byte).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "LoadModule", __mscorlib_System_Runtime_InteropServices__Assembly, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Module(__result__);
				}

				mscorlib::System::Object _Assembly::CreateInstance(mscorlib::System::String typeName)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(typeName).name());
						__parameters__[0] = (MonoObject*)typeName;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "CreateInstance", __mscorlib_System_Runtime_InteropServices__Assembly, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Object _Assembly::CreateInstance(mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(typeName).name());
						__parameter_types__[1] = Global::GetType(typeid(ignoreCase).name());
						__parameters__[0] = (MonoObject*)typeName;
						__parameters__[1] = reinterpret_cast<void*>(ignoreCase);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "CreateInstance", __mscorlib_System_Runtime_InteropServices__Assembly, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Object _Assembly::CreateInstance(mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes)
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
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "CreateInstance", __mscorlib_System_Runtime_InteropServices__Assembly, 7, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				std::vector<mscorlib::System::Reflection::Module*> _Assembly::GetLoadedModules()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "GetLoadedModules", __mscorlib_System_Runtime_InteropServices__Assembly, 0, NULL, NULL, NULL);
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

				std::vector<mscorlib::System::Reflection::Module*> _Assembly::GetLoadedModules(mscorlib::System::Boolean getResourceModules)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(getResourceModules).name());
						__parameters__[0] = reinterpret_cast<void*>(getResourceModules);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "GetLoadedModules", __mscorlib_System_Runtime_InteropServices__Assembly, 1, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Reflection::Module*> _Assembly::GetModules()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "GetModules", __mscorlib_System_Runtime_InteropServices__Assembly, 0, NULL, NULL, NULL);
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

				std::vector<mscorlib::System::Reflection::Module*> _Assembly::GetModules(mscorlib::System::Boolean getResourceModules)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(getResourceModules).name());
						__parameters__[0] = reinterpret_cast<void*>(getResourceModules);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "GetModules", __mscorlib_System_Runtime_InteropServices__Assembly, 1, __parameter_types__, __parameters__, NULL);
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

				mscorlib::System::Reflection::Module _Assembly::GetModule(mscorlib::System::String name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "GetModule", __mscorlib_System_Runtime_InteropServices__Assembly, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Module(__result__);
				}

				std::vector<mscorlib::System::Reflection::AssemblyName*> _Assembly::GetReferencedAssemblies()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "GetReferencedAssemblies", __mscorlib_System_Runtime_InteropServices__Assembly, 0, NULL, NULL, NULL);
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

				//Get Set Properties Methods
				//	Get:CodeBase
				mscorlib::System::String  _Assembly::get_CodeBase()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "get_CodeBase", __mscorlib_System_Runtime_InteropServices__Assembly, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:EscapedCodeBase
				mscorlib::System::String  _Assembly::get_EscapedCodeBase()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "get_EscapedCodeBase", __mscorlib_System_Runtime_InteropServices__Assembly, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:FullName
				mscorlib::System::String  _Assembly::get_FullName()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "get_FullName", __mscorlib_System_Runtime_InteropServices__Assembly, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:EntryPoint
				mscorlib::System::Reflection::MethodInfo  _Assembly::get_EntryPoint()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "get_EntryPoint", __mscorlib_System_Runtime_InteropServices__Assembly, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::MethodInfo(__result__);
				}


				//	Get:Location
				mscorlib::System::String  _Assembly::get_Location()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "get_Location", __mscorlib_System_Runtime_InteropServices__Assembly, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:Evidence
				mscorlib::System::Security::Policy::Evidence  _Assembly::get_Evidence()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "get_Evidence", __mscorlib_System_Runtime_InteropServices__Assembly, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Policy::Evidence(__result__);
				}


				//	Get:GlobalAssemblyCache
				mscorlib::System::Boolean  _Assembly::get_GlobalAssemblyCache()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Assembly", 0, NULL, "get_GlobalAssemblyCache", __mscorlib_System_Runtime_InteropServices__Assembly, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
