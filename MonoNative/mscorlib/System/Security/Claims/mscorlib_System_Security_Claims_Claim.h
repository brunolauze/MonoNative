#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CLAIMS_CLAIM_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CLAIMS_CLAIM_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Security/Claims/mscorlib_System_Security_Claims_ClaimsIdentity.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IDictionary_2.h>

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
			namespace Claims
			{

				class Claim
					: public mscorlib::System::Object
				{
				public:
					Claim(mscorlib::System::String type, mscorlib::System::String value)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Claims.Claim"))
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)type;
						__parameters__[1] = (MonoObject*)value;
						__native_object__ = Global::New("mscorlib", "System.Security.Claims", "Claim", 2, __parameter_types__, __parameters__);
					};
				
					Claim(mscorlib::System::String type, mscorlib::System::String value, mscorlib::System::String valueType)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Claims.Claim"))
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)type;
						__parameters__[1] = (MonoObject*)value;
						__parameters__[2] = (MonoObject*)valueType;
						__native_object__ = Global::New("mscorlib", "System.Security.Claims", "Claim", 3, __parameter_types__, __parameters__);
					};
				
					Claim(mscorlib::System::String type, mscorlib::System::String value, mscorlib::System::String valueType, mscorlib::System::String issuer)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Claims.Claim"))
					{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[3] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)type;
						__parameters__[1] = (MonoObject*)value;
						__parameters__[2] = (MonoObject*)valueType;
						__parameters__[3] = (MonoObject*)issuer;
						__native_object__ = Global::New("mscorlib", "System.Security.Claims", "Claim", 4, __parameter_types__, __parameters__);
					};
				
					Claim(mscorlib::System::String type, mscorlib::System::String value, mscorlib::System::String valueType, mscorlib::System::String issuer, mscorlib::System::String originalIssuer)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Claims.Claim"))
					{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[3] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[4] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)type;
						__parameters__[1] = (MonoObject*)value;
						__parameters__[2] = (MonoObject*)valueType;
						__parameters__[3] = (MonoObject*)issuer;
						__parameters__[4] = (MonoObject*)originalIssuer;
						__native_object__ = Global::New("mscorlib", "System.Security.Claims", "Claim", 5, __parameter_types__, __parameters__);
					};
				
					Claim(mscorlib::System::String type, mscorlib::System::String value, mscorlib::System::String valueType, mscorlib::System::String issuer, mscorlib::System::String originalIssuer, mscorlib::System::Security::Claims::ClaimsIdentity subject)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Claims.Claim"))
					{
						MonoType *__parameter_types__[6];
						void *__parameters__[6];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[3] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[4] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[5] = Global::GetType("mscorlib", "System.Security.Claims", "ClaimsIdentity");
						__parameters__[0] = (MonoObject*)type;
						__parameters__[1] = (MonoObject*)value;
						__parameters__[2] = (MonoObject*)valueType;
						__parameters__[3] = (MonoObject*)issuer;
						__parameters__[4] = (MonoObject*)originalIssuer;
						__parameters__[5] = (MonoObject*)subject;
						__native_object__ = Global::New("mscorlib", "System.Security.Claims", "Claim", 6, __parameter_types__, __parameters__);
					};
				
					Claim(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					Claim(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~Claim()
					{
					};
				

					Claim & operator=(Claim &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Security::Claims::Claim  Clone();
					virtual mscorlib::System::Security::Claims::Claim  Clone(mscorlib::System::Security::Claims::ClaimsIdentity identity);
					virtual mscorlib::System::String  ToString() override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Type, put=set_Type)) mscorlib::System::String  Type;
					__declspec(property(get=get_Value, put=set_Value)) mscorlib::System::String  Value;
					__declspec(property(get=get_ValueType, put=set_ValueType)) mscorlib::System::String  ValueType;
					__declspec(property(get=get_Issuer, put=set_Issuer)) mscorlib::System::String  Issuer;
					__declspec(property(get=get_OriginalIssuer, put=set_OriginalIssuer)) mscorlib::System::String  OriginalIssuer;
					__declspec(property(get=get_Subject, put=set_Subject)) mscorlib::System::Security::Claims::ClaimsIdentity  Subject;
					__declspec(property(get=get_Properties, put=set_Properties)) mscorlib::System::Collections::Generic::IDictionary<mscorlib::System::String,mscorlib::System::String>  Properties;

					//Get Set Properties Methods
					//	Get/Set:Type
					mscorlib::System::String  get_Type() const;
					void set_Type(mscorlib::System::String  value);

					//	Get/Set:Value
					mscorlib::System::String  get_Value() const;
					void set_Value(mscorlib::System::String  value);

					//	Get/Set:ValueType
					mscorlib::System::String  get_ValueType() const;
					void set_ValueType(mscorlib::System::String  value);

					//	Get/Set:Issuer
					mscorlib::System::String  get_Issuer() const;
					void set_Issuer(mscorlib::System::String  value);

					//	Get/Set:OriginalIssuer
					mscorlib::System::String  get_OriginalIssuer() const;
					void set_OriginalIssuer(mscorlib::System::String  value);

					//	Get/Set:Subject
					mscorlib::System::Security::Claims::ClaimsIdentity  get_Subject() const;
					void set_Subject(mscorlib::System::Security::Claims::ClaimsIdentity  value);

					//	Get/Set:Properties
					mscorlib::System::Collections::Generic::IDictionary<mscorlib::System::String,mscorlib::System::String>  get_Properties() const;
					void set_Properties(mscorlib::System::Collections::Generic::IDictionary<mscorlib::System::String,mscorlib::System::String>  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
