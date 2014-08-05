#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_LOADEROPTIMIZATIONATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_LOADEROPTIMIZATIONATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_LoaderOptimization.h>
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

		class LoaderOptimizationAttribute
			: public mscorlib::System::Attribute
			, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
		{
		public:
			LoaderOptimizationAttribute(mscorlib::System::Byte value)
			: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.LoaderOptimizationAttribute"))
			, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Byte");
				__parameters__[0] = (MonoObject*)value;
				__native_object__ = Global::New("mscorlib", "System", "LoaderOptimizationAttribute", 1, __parameter_types__, __parameters__);
			};
		
			LoaderOptimizationAttribute(mscorlib::System::LoaderOptimization::__ENUM__ value)
			: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.LoaderOptimizationAttribute"))
			, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "LoaderOptimization");
				__parameters__[0] = reinterpret_cast<void*>(value);
				__native_object__ = Global::New("mscorlib", "System", "LoaderOptimizationAttribute", 1, __parameter_types__, __parameters__);
			};
		
			LoaderOptimizationAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::Attribute(nativeTypeInfo)
			, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
			{
			};
		
			LoaderOptimizationAttribute(MonoObject *nativeObject)
			: mscorlib::System::Attribute(nativeObject)
			, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
			{
			};
		
			~LoaderOptimizationAttribute()
			{
			};
		

			LoaderOptimizationAttribute & operator=(LoaderOptimizationAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Properties
			__declspec(property(get=get_Value)) mscorlib::System::LoaderOptimization::__ENUM__  Value;
			__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

			//Get Set Properties Methods
			//	Get:Value
			mscorlib::System::LoaderOptimization::__ENUM__  get_Value() const;

			//	Get:TypeId
			mscorlib::System::Object  get_TypeId() const;

		
		protected:
		
		private:
		
		};

	}
}
#endif
