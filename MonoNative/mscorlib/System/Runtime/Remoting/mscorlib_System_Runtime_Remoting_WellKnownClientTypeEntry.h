#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_WELLKNOWNCLIENTTYPEENTRY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_WELLKNOWNCLIENTTYPEENTRY_H

#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_TypeEntry.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{

				class WellKnownClientTypeEntry
					: public mscorlib::System::Runtime::Remoting::TypeEntry
				{
				public:
					WellKnownClientTypeEntry(mscorlib::System::Type type, mscorlib::System::String objectUrl)
					: mscorlib::System::Runtime::Remoting::TypeEntry(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.WellKnownClientTypeEntry"))
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Type");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)type;
						__parameters__[1] = (MonoObject*)objectUrl;
						__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting", "WellKnownClientTypeEntry", 2, __parameter_types__, __parameters__);
					};
				
					WellKnownClientTypeEntry(mscorlib::System::String typeName, mscorlib::System::String assemblyName, mscorlib::System::String objectUrl)
					: mscorlib::System::Runtime::Remoting::TypeEntry(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.WellKnownClientTypeEntry"))
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)typeName;
						__parameters__[1] = (MonoObject*)assemblyName;
						__parameters__[2] = (MonoObject*)objectUrl;
						__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting", "WellKnownClientTypeEntry", 3, __parameter_types__, __parameters__);
					};
				
					WellKnownClientTypeEntry(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Runtime::Remoting::TypeEntry(nativeTypeInfo)
					{
					};
				
					WellKnownClientTypeEntry(MonoObject *nativeObject)
					: mscorlib::System::Runtime::Remoting::TypeEntry(nativeObject)
					{
					};
				
					~WellKnownClientTypeEntry()
					{
					};
				

					WellKnownClientTypeEntry & operator=(WellKnownClientTypeEntry &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::String  ToString() override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_ApplicationUrl, put=set_ApplicationUrl)) mscorlib::System::String  ApplicationUrl;
					__declspec(property(get=get_ObjectType)) mscorlib::System::Type  ObjectType;
					__declspec(property(get=get_ObjectUrl)) mscorlib::System::String  ObjectUrl;
					__declspec(property(get=get_AssemblyName, put=set_AssemblyName)) mscorlib::System::String  AssemblyName;
					__declspec(property(get=get_TypeName, put=set_TypeName)) mscorlib::System::String  TypeName;

					//Get Set Properties Methods
					//	Get/Set:ApplicationUrl
					mscorlib::System::String  get_ApplicationUrl();
					void set_ApplicationUrl(mscorlib::System::String  value);

					//	Get:ObjectType
					mscorlib::System::Type  get_ObjectType();

					//	Get:ObjectUrl
					mscorlib::System::String  get_ObjectUrl();

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
