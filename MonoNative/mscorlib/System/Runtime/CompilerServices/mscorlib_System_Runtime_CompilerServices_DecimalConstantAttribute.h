#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_DECIMALCONSTANTATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_DECIMALCONSTANTATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Decimal;
		class Type;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace CompilerServices
			{

				class DecimalConstantAttribute
					: public mscorlib::System::Attribute
					, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
				{
				public:
					DecimalConstantAttribute(mscorlib::System::Byte scale, mscorlib::System::Byte sign, mscorlib::System::UInt32 hi, mscorlib::System::UInt32 mid, mscorlib::System::UInt32 low)
					: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.CompilerServices.DecimalConstantAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Byte");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Byte");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "UInt32");
						__parameter_types__[3] = Global::GetType("mscorlib", "System", "UInt32");
						__parameter_types__[4] = Global::GetType("mscorlib", "System", "UInt32");
						__parameters__[0] = (MonoObject*)scale;
						__parameters__[1] = (MonoObject*)sign;
						__parameters__[2] = &hi;
						__parameters__[3] = &mid;
						__parameters__[4] = &low;
						__native_object__ = Global::New("mscorlib", "System.Runtime.CompilerServices", "DecimalConstantAttribute", 5, __parameter_types__, __parameters__);
					};
				
					DecimalConstantAttribute(mscorlib::System::Byte scale, mscorlib::System::Byte sign, mscorlib::System::Int32 hi, mscorlib::System::Int32 mid, mscorlib::System::Int32 low)
					: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.CompilerServices.DecimalConstantAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Byte");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Byte");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
						__parameter_types__[3] = Global::GetType("mscorlib", "System", "Int32");
						__parameter_types__[4] = Global::GetType("mscorlib", "System", "Int32");
						__parameters__[0] = (MonoObject*)scale;
						__parameters__[1] = (MonoObject*)sign;
						__parameters__[2] = &hi;
						__parameters__[3] = &mid;
						__parameters__[4] = &low;
						__native_object__ = Global::New("mscorlib", "System.Runtime.CompilerServices", "DecimalConstantAttribute", 5, __parameter_types__, __parameters__);
					};
				
					DecimalConstantAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Attribute(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
					};
				
					DecimalConstantAttribute(MonoObject *nativeObject)
					: mscorlib::System::Attribute(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
					{
					};
				
					~DecimalConstantAttribute()
					{
					};
				

					DecimalConstantAttribute & operator=(DecimalConstantAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Value)) mscorlib::System::Decimal  Value;
					__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

					//Get Set Properties Methods
					//	Get:Value
					mscorlib::System::Decimal  get_Value() const;

					//	Get:TypeId
					mscorlib::System::Object  get_TypeId() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
