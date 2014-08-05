#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_ASSEMBLYSIGNATUREKEYATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_ASSEMBLYSIGNATUREKEYATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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
		namespace Reflection
		{

			class AssemblySignatureKeyAttribute
				: public mscorlib::System::Attribute
				, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
			{
			public:
				AssemblySignatureKeyAttribute(mscorlib::System::String publicKey, mscorlib::System::String countersignature)
				: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Reflection.AssemblySignatureKeyAttribute"))
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)publicKey;
					__parameters__[1] = (MonoObject*)countersignature;
					__native_object__ = Global::New("mscorlib", "System.Reflection", "AssemblySignatureKeyAttribute", 2, __parameter_types__, __parameters__);
				};
			
				AssemblySignatureKeyAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Attribute(nativeTypeInfo)
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
				};
			
				AssemblySignatureKeyAttribute(MonoObject *nativeObject)
				: mscorlib::System::Attribute(nativeObject)
				, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
				{
				};
			
				~AssemblySignatureKeyAttribute()
				{
				};
			

				AssemblySignatureKeyAttribute & operator=(AssemblySignatureKeyAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_PublicKey, put=set_PublicKey)) mscorlib::System::String  PublicKey;
				__declspec(property(get=get_Countersignature, put=set_Countersignature)) mscorlib::System::String  Countersignature;
				__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

				//Get Set Properties Methods
				//	Get/Set:PublicKey
				mscorlib::System::String  get_PublicKey() const;
				void set_PublicKey(mscorlib::System::String  value);

				//	Get/Set:Countersignature
				mscorlib::System::String  get_Countersignature() const;
				void set_Countersignature(mscorlib::System::String  value);

				//	Get:TypeId
				mscorlib::System::Object  get_TypeId() const;

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
