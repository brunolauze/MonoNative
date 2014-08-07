#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PRINCIPAL_IDENTITYREFERENCE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PRINCIPAL_IDENTITYREFERENCE_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Principal
			{

				class IdentityReference
					: public mscorlib::System::Object
				{
				public:
					IdentityReference(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					IdentityReference(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~IdentityReference()
					{
					};
				

					IdentityReference & operator=(IdentityReference &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(IdentityReference &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object o) override;
					virtual mscorlib::System::Int32  GetHashCode() override;
					virtual mscorlib::System::Boolean  IsValidTargetType(mscorlib::System::Type targetType);
					virtual mscorlib::System::String  ToString() override;
					virtual mscorlib::System::Security::Principal::IdentityReference  Translate(mscorlib::System::Type targetType);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Value)) mscorlib::System::String  Value;

					//Get Set Properties Methods
					//	Get:Value
					mscorlib::System::String  get_Value() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
