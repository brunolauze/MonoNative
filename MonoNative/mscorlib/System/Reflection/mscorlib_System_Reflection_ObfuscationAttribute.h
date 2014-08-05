#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_OBFUSCATIONATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_OBFUSCATIONATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>
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
		namespace Reflection
		{

			class ObfuscationAttribute
				: public mscorlib::System::Attribute
				, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
			{
			public:
				ObfuscationAttribute()
				: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Reflection.ObfuscationAttribute"))
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
					__native_object__ = Global::New("mscorlib", "System.Reflection", "ObfuscationAttribute");
				};
			
				ObfuscationAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Attribute(nativeTypeInfo)
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
				};
			
				ObfuscationAttribute(MonoObject *nativeObject)
				: mscorlib::System::Attribute(nativeObject)
				, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
				{
				};
			
				~ObfuscationAttribute()
				{
				};
			

				ObfuscationAttribute & operator=(ObfuscationAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Exclude, put=set_Exclude)) mscorlib::System::Boolean  Exclude;
				__declspec(property(get=get_StripAfterObfuscation, put=set_StripAfterObfuscation)) mscorlib::System::Boolean  StripAfterObfuscation;
				__declspec(property(get=get_ApplyToMembers, put=set_ApplyToMembers)) mscorlib::System::Boolean  ApplyToMembers;
				__declspec(property(get=get_Feature, put=set_Feature)) mscorlib::System::String  Feature;
				__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

				//Get Set Properties Methods
				//	Get/Set:Exclude
				mscorlib::System::Boolean  get_Exclude() const;
				void set_Exclude(mscorlib::System::Boolean  value);

				//	Get/Set:StripAfterObfuscation
				mscorlib::System::Boolean  get_StripAfterObfuscation() const;
				void set_StripAfterObfuscation(mscorlib::System::Boolean  value);

				//	Get/Set:ApplyToMembers
				mscorlib::System::Boolean  get_ApplyToMembers() const;
				void set_ApplyToMembers(mscorlib::System::Boolean  value);

				//	Get/Set:Feature
				mscorlib::System::String  get_Feature() const;
				void set_Feature(mscorlib::System::String  value);

				//	Get:TypeId
				mscorlib::System::Object  get_TypeId() const;

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
