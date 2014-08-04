#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_ACTIVATEDSERVICETYPEENTRY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_ACTIVATEDSERVICETYPEENTRY_H

#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_TypeEntry.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
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

				class ActivatedServiceTypeEntry
					: public mscorlib::System::Runtime::Remoting::TypeEntry
				{
				public:
					ActivatedServiceTypeEntry(mscorlib::System::Type type)
					: mscorlib::System::Runtime::Remoting::TypeEntry(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.ActivatedServiceTypeEntry"))
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Type");
						__parameters__[0] = (MonoObject*)type;
						__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting", "ActivatedServiceTypeEntry", 1, __parameter_types__, __parameters__);
					};
				
					ActivatedServiceTypeEntry(mscorlib::System::String typeName, mscorlib::System::String assemblyName)
					: mscorlib::System::Runtime::Remoting::TypeEntry(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.ActivatedServiceTypeEntry"))
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)typeName;
						__parameters__[1] = (MonoObject*)assemblyName;
						__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting", "ActivatedServiceTypeEntry", 2, __parameter_types__, __parameters__);
					};
				
					ActivatedServiceTypeEntry(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Runtime::Remoting::TypeEntry(nativeTypeInfo)
					{
					};
				
					ActivatedServiceTypeEntry(MonoObject *nativeObject)
					: mscorlib::System::Runtime::Remoting::TypeEntry(nativeObject)
					{
					};
				
					~ActivatedServiceTypeEntry()
					{
					};
				

					ActivatedServiceTypeEntry & operator=(ActivatedServiceTypeEntry &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::String  ToString() override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_ContextAttributes, put=set_ContextAttributes)) std::vector<mscorlib::System::Runtime::Remoting::Contexts::IContextAttribute*>  ContextAttributes;
					__declspec(property(get=get_ObjectType)) mscorlib::System::Type  ObjectType;
					__declspec(property(get=get_AssemblyName, put=set_AssemblyName)) mscorlib::System::String  AssemblyName;
					__declspec(property(get=get_TypeName, put=set_TypeName)) mscorlib::System::String  TypeName;

					//Get Set Properties Methods
					//	Get/Set:ContextAttributes
					std::vector<mscorlib::System::Runtime::Remoting::Contexts::IContextAttribute*>  get_ContextAttributes();
					void set_ContextAttributes(std::vector<mscorlib::System::Runtime::Remoting::Contexts::IContextAttribute*>  value);

					//	Get:ObjectType
					mscorlib::System::Type  get_ObjectType();

					//	Get/Set:AssemblyName
					mscorlib::System::String  get_AssemblyName();
					void set_AssemblyName(mscorlib::System::String  value);

					//	Get/Set:TypeName
					mscorlib::System::String  get_TypeName();
					void set_TypeName(mscorlib::System::String  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
