#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_ATTRIBUTEUSAGEATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_ATTRIBUTEUSAGEATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
#include <mscorlib/System/mscorlib_System_AttributeTargets.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{

		class AttributeUsageAttribute
			: public mscorlib::System::Attribute
			, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
		{
		public:
			AttributeUsageAttribute(mscorlib::System::AttributeTargets::__ENUM__ validOn)
			: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.AttributeUsageAttribute"))
			, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "AttributeTargets");
				__parameters__[0] = reinterpret_cast<void*>(validOn);
				__native_object__ = Global::New("mscorlib", "System", "AttributeUsageAttribute", 1, __parameter_types__, __parameters__);
			};
		
			AttributeUsageAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::Attribute(nativeTypeInfo)
			, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
			{
			};
		
			AttributeUsageAttribute(MonoObject *nativeObject)
			: mscorlib::System::Attribute(nativeObject)
			, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
			{
			};
		
			~AttributeUsageAttribute()
			{
			};
		

			AttributeUsageAttribute & operator=(AttributeUsageAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Properties
			__declspec(property(get=get_AllowMultiple, put=set_AllowMultiple)) mscorlib::System::Boolean  AllowMultiple;
			__declspec(property(get=get_Inherited, put=set_Inherited)) mscorlib::System::Boolean  Inherited;
			__declspec(property(get=get_ValidOn)) mscorlib::System::AttributeTargets::__ENUM__  ValidOn;
			__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

			//Get Set Properties Methods
			//	Get/Set:AllowMultiple
			mscorlib::System::Boolean  get_AllowMultiple() const;
			void set_AllowMultiple(mscorlib::System::Boolean  value);

			//	Get/Set:Inherited
			mscorlib::System::Boolean  get_Inherited() const;
			void set_Inherited(mscorlib::System::Boolean  value);

			//	Get:ValidOn
			mscorlib::System::AttributeTargets::__ENUM__  get_ValidOn() const;

			//	Get:TypeId
			mscorlib::System::Object  get_TypeId() const;

		
		protected:
		
		private:
		
		};

	}
}
#endif
