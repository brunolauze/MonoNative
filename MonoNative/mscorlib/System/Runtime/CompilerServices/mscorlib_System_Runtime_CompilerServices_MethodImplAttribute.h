#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_METHODIMPLATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_METHODIMPLATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_MethodImplOptions.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_MethodCodeType.h>

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
		namespace Runtime
		{
			namespace CompilerServices
			{

				class MethodImplAttribute
					: public mscorlib::System::Attribute
					, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
				{
				public:
					MethodImplAttribute()
					: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.CompilerServices.MethodImplAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						__native_object__ = Global::New("mscorlib", "System.Runtime.CompilerServices", "MethodImplAttribute");
					};
				
					MethodImplAttribute(mscorlib::System::Int16 value)
					: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.CompilerServices.MethodImplAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int16");
						__parameters__[0] = &value;
						__native_object__ = Global::New("mscorlib", "System.Runtime.CompilerServices", "MethodImplAttribute", 1, __parameter_types__, __parameters__);
					};
				
					MethodImplAttribute(mscorlib::System::Runtime::CompilerServices::MethodImplOptions::__ENUM__ methodImplOptions)
					: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.CompilerServices.MethodImplAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Runtime.CompilerServices", "MethodImplOptions");
						mscorlib::System::Int32 __param_methodImplOptions__ = methodImplOptions;
						__parameters__[0] = &__param_methodImplOptions__;
						__native_object__ = Global::New("mscorlib", "System.Runtime.CompilerServices", "MethodImplAttribute", 1, __parameter_types__, __parameters__);
					};
				
					MethodImplAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Attribute(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
					};
				
					MethodImplAttribute(MonoObject *nativeObject)
					: mscorlib::System::Attribute(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
					{
					};
				
					~MethodImplAttribute()
					{
					};
				

					MethodImplAttribute & operator=(MethodImplAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Value)) mscorlib::System::Runtime::CompilerServices::MethodImplOptions::__ENUM__  Value;
					__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

					//Public Fields
					__declspec(property(get=get_MethodCodeType, put=set_MethodCodeType)) mscorlib::System::Runtime::CompilerServices::MethodCodeType::__ENUM__  MethodCodeType;

					//Get Set Properties Methods
					//	Get:Value
					mscorlib::System::Runtime::CompilerServices::MethodImplOptions::__ENUM__  get_Value() const;

					//	Get:TypeId
					mscorlib::System::Object  get_TypeId() const;

					//	Get/Set:MethodCodeType
					mscorlib::System::Runtime::CompilerServices::MethodCodeType::__ENUM__  get_MethodCodeType() const;
					void set_MethodCodeType(mscorlib::System::Runtime::CompilerServices::MethodCodeType::__ENUM__  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
