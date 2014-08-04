#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_COMPILATIONRELAXATIONSATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_COMPILATIONRELAXATIONSATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_CompilationRelaxations.h>
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

				class CompilationRelaxationsAttribute
					: public mscorlib::System::Attribute
					, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
				{
				public:
					CompilationRelaxationsAttribute(mscorlib::System::Int32 relaxations)
					: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.CompilerServices.CompilationRelaxationsAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
						__parameters__[0] = &relaxations;
						__native_object__ = Global::New("mscorlib", "System.Runtime.CompilerServices", "CompilationRelaxationsAttribute", 1, __parameter_types__, __parameters__);
					};
				
					CompilationRelaxationsAttribute(mscorlib::System::Runtime::CompilerServices::CompilationRelaxations::__ENUM__ relaxations)
					: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.CompilerServices.CompilationRelaxationsAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Runtime.CompilerServices", "CompilationRelaxations");
						__parameters__[0] = reinterpret_cast<void*>(relaxations);
						__native_object__ = Global::New("mscorlib", "System.Runtime.CompilerServices", "CompilationRelaxationsAttribute", 1, __parameter_types__, __parameters__);
					};
				
					CompilationRelaxationsAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Attribute(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
					};
				
					CompilationRelaxationsAttribute(MonoObject *nativeObject)
					: mscorlib::System::Attribute(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
					{
					};
				
					~CompilationRelaxationsAttribute()
					{
					};
				

					CompilationRelaxationsAttribute & operator=(CompilationRelaxationsAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_CompilationRelaxations)) mscorlib::System::Int32  CompilationRelaxations;
					__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

					//Get Set Properties Methods
					//	Get:CompilationRelaxations
					mscorlib::System::Int32  get_CompilationRelaxations();

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
