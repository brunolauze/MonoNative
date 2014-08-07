#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_OBFUSCATEASSEMBLYATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_OBFUSCATEASSEMBLYATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
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
		namespace Reflection
		{

			class ObfuscateAssemblyAttribute
				: public mscorlib::System::Attribute
				, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
			{
			public:
				ObfuscateAssemblyAttribute(mscorlib::System::Boolean assemblyIsPrivate)
				: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Reflection.ObfuscateAssemblyAttribute"))
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Boolean");
					__parameters__[0] = reinterpret_cast<void*>(assemblyIsPrivate);
					__native_object__ = Global::New("mscorlib", "System.Reflection", "ObfuscateAssemblyAttribute", 1, __parameter_types__, __parameters__);
				};
			
				ObfuscateAssemblyAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Attribute(nativeTypeInfo)
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
				};
			
				ObfuscateAssemblyAttribute(MonoObject *nativeObject)
				: mscorlib::System::Attribute(nativeObject)
				, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
				{
				};
			
				~ObfuscateAssemblyAttribute()
				{
				};
			

				ObfuscateAssemblyAttribute & operator=(ObfuscateAssemblyAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(ObfuscateAssemblyAttribute &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_AssemblyIsPrivate)) mscorlib::System::Boolean  AssemblyIsPrivate;
				__declspec(property(get=get_StripAfterObfuscation, put=set_StripAfterObfuscation)) mscorlib::System::Boolean  StripAfterObfuscation;
				__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

				//Get Set Properties Methods
				//	Get:AssemblyIsPrivate
				mscorlib::System::Boolean  get_AssemblyIsPrivate() const;

				//	Get/Set:StripAfterObfuscation
				mscorlib::System::Boolean  get_StripAfterObfuscation() const;
				void set_StripAfterObfuscation(mscorlib::System::Boolean  value);

				//	Get:TypeId
				mscorlib::System::Object  get_TypeId() const;

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
