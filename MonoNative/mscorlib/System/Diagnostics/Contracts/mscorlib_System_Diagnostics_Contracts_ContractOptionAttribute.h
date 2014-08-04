#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_CONTRACTS_CONTRACTOPTIONATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_CONTRACTS_CONTRACTOPTIONATTRIBUTE_H

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
		namespace Diagnostics
		{
			namespace Contracts
			{

				class ContractOptionAttribute
					: public mscorlib::System::Attribute
					, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
				{
				public:
					ContractOptionAttribute(mscorlib::System::String category, mscorlib::System::String setting, mscorlib::System::Boolean enabled)
					: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Diagnostics.Contracts.ContractOptionAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "Boolean");
						__parameters__[0] = (MonoObject*)category;
						__parameters__[1] = (MonoObject*)setting;
						__parameters__[2] = reinterpret_cast<void*>(enabled);
						__native_object__ = Global::New("mscorlib", "System.Diagnostics.Contracts", "ContractOptionAttribute", 3, __parameter_types__, __parameters__);
					};
				
					ContractOptionAttribute(mscorlib::System::String category, mscorlib::System::String setting, mscorlib::System::String value)
					: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Diagnostics.Contracts.ContractOptionAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)category;
						__parameters__[1] = (MonoObject*)setting;
						__parameters__[2] = (MonoObject*)value;
						__native_object__ = Global::New("mscorlib", "System.Diagnostics.Contracts", "ContractOptionAttribute", 3, __parameter_types__, __parameters__);
					};
				
					ContractOptionAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Attribute(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
					};
				
					ContractOptionAttribute(MonoObject *nativeObject)
					: mscorlib::System::Attribute(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
					{
					};
				
					~ContractOptionAttribute()
					{
					};
				

					ContractOptionAttribute & operator=(ContractOptionAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Category, put=set_Category)) mscorlib::System::String  Category;
					__declspec(property(get=get_Enabled, put=set_Enabled)) mscorlib::System::Boolean  Enabled;
					__declspec(property(get=get_Setting, put=set_Setting)) mscorlib::System::String  Setting;
					__declspec(property(get=get_Value, put=set_Value)) mscorlib::System::String  Value;
					__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

					//Get Set Properties Methods
					//	Get/Set:Category
					mscorlib::System::String  get_Category();
					void set_Category(mscorlib::System::String  value);

					//	Get/Set:Enabled
					mscorlib::System::Boolean  get_Enabled();
					void set_Enabled(mscorlib::System::Boolean  value);

					//	Get/Set:Setting
					mscorlib::System::String  get_Setting();
					void set_Setting(mscorlib::System::String  value);

					//	Get/Set:Value
					mscorlib::System::String  get_Value();
					void set_Value(mscorlib::System::String  value);

					//	Get:TypeId
					mscorlib::System::Object  get_TypeId();

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
