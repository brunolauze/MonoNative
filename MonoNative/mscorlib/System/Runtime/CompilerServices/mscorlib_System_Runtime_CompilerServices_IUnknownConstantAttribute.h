#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_IUNKNOWNCONSTANTATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_IUNKNOWNCONSTANTATTRIBUTE_H

#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_CustomConstantAttribute.h>
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
		namespace Runtime
		{
			namespace CompilerServices
			{

				class IUnknownConstantAttribute
					: public mscorlib::System::Runtime::CompilerServices::CustomConstantAttribute
					, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
				{
				public:
					IUnknownConstantAttribute()
					: mscorlib::System::Runtime::CompilerServices::CustomConstantAttribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.CompilerServices.IUnknownConstantAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						__native_object__ = Global::New("mscorlib", "System.Runtime.CompilerServices", "IUnknownConstantAttribute");
					};
				
					IUnknownConstantAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Runtime::CompilerServices::CustomConstantAttribute(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
					};
				
					IUnknownConstantAttribute(MonoObject *nativeObject)
					: mscorlib::System::Runtime::CompilerServices::CustomConstantAttribute(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
					{
					};
				
					~IUnknownConstantAttribute()
					{
					};
				

					IUnknownConstantAttribute & operator=(IUnknownConstantAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Value)) mscorlib::System::Object  Value;
					__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

					//Get Set Properties Methods
					//	Get:Value
					mscorlib::System::Object  get_Value();

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
