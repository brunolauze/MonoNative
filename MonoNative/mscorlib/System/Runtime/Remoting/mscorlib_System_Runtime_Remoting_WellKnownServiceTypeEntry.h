#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_WELLKNOWNSERVICETYPEENTRY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_WELLKNOWNSERVICETYPEENTRY_H

#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_TypeEntry.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_WellKnownObjectMode.h>
#include <mscorlib/System/Runtime/Remoting/Contexts/mscorlib_System_Runtime_Remoting_Contexts_IContextAttribute.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{

				class WellKnownServiceTypeEntry
					: public mscorlib::System::Runtime::Remoting::TypeEntry
				{
				public:
					WellKnownServiceTypeEntry(mscorlib::System::Type type, mscorlib::System::String objectUri, mscorlib::System::Runtime::Remoting::WellKnownObjectMode::__ENUM__ mode)
					: mscorlib::System::Runtime::Remoting::TypeEntry(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.WellKnownServiceTypeEntry"))
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Type");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.Runtime.Remoting", "WellKnownObjectMode");
						__parameters__[0] = (MonoObject*)type;
						__parameters__[1] = (MonoObject*)objectUri;
						int __param_mode__ = mode;
						__parameters__[2] = &__param_mode__;
						__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting", "WellKnownServiceTypeEntry", 3, __parameter_types__, __parameters__);
					};
				
					WellKnownServiceTypeEntry(mscorlib::System::String typeName, mscorlib::System::String assemblyName, mscorlib::System::String objectUri, mscorlib::System::Runtime::Remoting::WellKnownObjectMode::__ENUM__ mode)
					: mscorlib::System::Runtime::Remoting::TypeEntry(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.WellKnownServiceTypeEntry"))
					{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[3] = Global::GetType("mscorlib", "System.Runtime.Remoting", "WellKnownObjectMode");
						__parameters__[0] = (MonoObject*)typeName;
						__parameters__[1] = (MonoObject*)assemblyName;
						__parameters__[2] = (MonoObject*)objectUri;
						int __param_mode__ = mode;
						__parameters__[3] = &__param_mode__;
						__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting", "WellKnownServiceTypeEntry", 4, __parameter_types__, __parameters__);
					};
				
					WellKnownServiceTypeEntry(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Runtime::Remoting::TypeEntry(nativeTypeInfo)
					{
					};
				
					WellKnownServiceTypeEntry(MonoObject *nativeObject)
					: mscorlib::System::Runtime::Remoting::TypeEntry(nativeObject)
					{
					};
				
					~WellKnownServiceTypeEntry()
					{
					};
				

					WellKnownServiceTypeEntry & operator=(WellKnownServiceTypeEntry &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::String  ToString() override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_ContextAttributes, put=set_ContextAttributes)) std::vector<mscorlib::System::Runtime::Remoting::Contexts::IContextAttribute*>  ContextAttributes;
					__declspec(property(get=get_Mode)) mscorlib::System::Runtime::Remoting::WellKnownObjectMode::__ENUM__  Mode;
					__declspec(property(get=get_ObjectType)) mscorlib::System::Type  ObjectType;
					__declspec(property(get=get_ObjectUri)) mscorlib::System::String  ObjectUri;
					__declspec(property(get=get_AssemblyName, put=set_AssemblyName)) mscorlib::System::String  AssemblyName;
					__declspec(property(get=get_TypeName, put=set_TypeName)) mscorlib::System::String  TypeName;

					//Get Set Properties Methods
					//	Get/Set:ContextAttributes
					std::vector<mscorlib::System::Runtime::Remoting::Contexts::IContextAttribute*>  get_ContextAttributes() const;
					void set_ContextAttributes(std::vector<mscorlib::System::Runtime::Remoting::Contexts::IContextAttribute*>  value);

					//	Get:Mode
					mscorlib::System::Runtime::Remoting::WellKnownObjectMode::__ENUM__  get_Mode() const;

					//	Get:ObjectType
					mscorlib::System::Type  get_ObjectType() const;

					//	Get:ObjectUri
					mscorlib::System::String  get_ObjectUri() const;

					//	Get/Set:AssemblyName
					mscorlib::System::String  get_AssemblyName() const;
					void set_AssemblyName(mscorlib::System::String  value);

					//	Get/Set:TypeName
					mscorlib::System::String  get_TypeName() const;
					void set_TypeName(mscorlib::System::String  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
