#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_DEPENDENCYATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_DEPENDENCYATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_LoadHint.h>
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
		namespace Runtime
		{
			namespace CompilerServices
			{

				class DependencyAttribute
					: public mscorlib::System::Attribute
					, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
				{
				public:
					DependencyAttribute(mscorlib::System::String dependentAssemblyArgument, mscorlib::System::Runtime::CompilerServices::LoadHint::__ENUM__ loadHintArgument)
					: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.CompilerServices.DependencyAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Runtime.CompilerServices", "LoadHint");
						__parameters__[0] = (MonoObject*)dependentAssemblyArgument;
						__parameters__[1] = reinterpret_cast<void*>(loadHintArgument);
						__native_object__ = Global::New("mscorlib", "System.Runtime.CompilerServices", "DependencyAttribute", 2, __parameter_types__, __parameters__);
					};
				
					DependencyAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Attribute(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
					};
				
					DependencyAttribute(MonoObject *nativeObject)
					: mscorlib::System::Attribute(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
					{
					};
				
					~DependencyAttribute()
					{
					};
				

					DependencyAttribute & operator=(DependencyAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_DependentAssembly)) mscorlib::System::String  DependentAssembly;
					__declspec(property(get=get_LoadHint)) mscorlib::System::Runtime::CompilerServices::LoadHint::__ENUM__  LoadHint;
					__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

					//Get Set Properties Methods
					//	Get:DependentAssembly
					mscorlib::System::String  get_DependentAssembly() const;

					//	Get:LoadHint
					mscorlib::System::Runtime::CompilerServices::LoadHint::__ENUM__  get_LoadHint() const;

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
