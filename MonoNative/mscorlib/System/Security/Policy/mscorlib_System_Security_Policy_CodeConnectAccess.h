#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_CODECONNECTACCESS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_CODECONNECTACCESS_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_String.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Policy
			{

				class CodeConnectAccess
					: public mscorlib::System::Object
				{
				public:
					CodeConnectAccess(mscorlib::System::String allowScheme, mscorlib::System::Int32 allowPort)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Policy.CodeConnectAccess"))
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
						__parameters__[0] = (MonoObject*)allowScheme;
						__parameters__[1] = &allowPort;
						__native_object__ = Global::New("mscorlib", "System.Security.Policy", "CodeConnectAccess", 2, __parameter_types__, __parameters__);
					};
				
					CodeConnectAccess(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					CodeConnectAccess(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~CodeConnectAccess()
					{
					};
				

					CodeConnectAccess & operator=(CodeConnectAccess &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(CodeConnectAccess &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object o) override;
					virtual mscorlib::System::Int32  GetHashCode() override;
					static mscorlib::System::Security::Policy::CodeConnectAccess  CreateAnySchemeAccess(mscorlib::System::Int32 allowPort);
					static mscorlib::System::Security::Policy::CodeConnectAccess  CreateOriginSchemeAccess(mscorlib::System::Int32 allowPort);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Port)) mscorlib::System::Int32  Port;
					__declspec(property(get=get_Scheme)) mscorlib::System::String  Scheme;

					//Public Static Fields
					static Property<mscorlib::System::String , mscorlib::System::Security::Policy::CodeConnectAccess> AnyScheme;
					static Property<mscorlib::System::Int32 , mscorlib::System::Security::Policy::CodeConnectAccess> DefaultPort;
					static Property<mscorlib::System::Int32 , mscorlib::System::Security::Policy::CodeConnectAccess> OriginPort;
					static Property<mscorlib::System::String , mscorlib::System::Security::Policy::CodeConnectAccess> OriginScheme;

					//Get Set Properties Methods
					//	Get:Port
					mscorlib::System::Int32  get_Port() const;

					//	Get:Scheme
					mscorlib::System::String  get_Scheme() const;

					//	Get/Set:AnyScheme
					static mscorlib::System::String  get_AnyScheme();
					static void set_AnyScheme(mscorlib::System::String  value);

					//	Get/Set:DefaultPort
					static mscorlib::System::Int32  get_DefaultPort();
					static void set_DefaultPort(mscorlib::System::Int32  value);

					//	Get/Set:OriginPort
					static mscorlib::System::Int32  get_OriginPort();
					static void set_OriginPort(mscorlib::System::Int32  value);

					//	Get/Set:OriginScheme
					static mscorlib::System::String  get_OriginScheme();
					static void set_OriginScheme(mscorlib::System::String  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
