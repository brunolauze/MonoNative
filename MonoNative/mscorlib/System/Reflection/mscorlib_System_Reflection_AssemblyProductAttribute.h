#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_ASSEMBLYPRODUCTATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_ASSEMBLYPRODUCTATTRIBUTE_H

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

			class AssemblyProductAttribute
				: public mscorlib::System::Attribute
				, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
			{
			public:
				AssemblyProductAttribute(mscorlib::System::String product)
				: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Reflection.AssemblyProductAttribute"))
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)product;
					__native_object__ = Global::New("mscorlib", "System.Reflection", "AssemblyProductAttribute", 1, __parameter_types__, __parameters__);
				};
			
				AssemblyProductAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Attribute(nativeTypeInfo)
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
				};
			
				AssemblyProductAttribute(MonoObject *nativeObject)
				: mscorlib::System::Attribute(nativeObject)
				, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
				{
				};
			
				~AssemblyProductAttribute()
				{
				};
			

				AssemblyProductAttribute & operator=(AssemblyProductAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Product)) mscorlib::System::String  Product;
				__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

				//Get Set Properties Methods
				//	Get:Product
				mscorlib::System::String  get_Product();

				//	Get:TypeId
				mscorlib::System::Object  get_TypeId();

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
