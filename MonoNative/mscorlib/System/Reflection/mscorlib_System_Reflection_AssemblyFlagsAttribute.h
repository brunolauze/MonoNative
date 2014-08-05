#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_ASSEMBLYFLAGSATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_ASSEMBLYFLAGSATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_AssemblyNameFlags.h>
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

			class AssemblyFlagsAttribute
				: public mscorlib::System::Attribute
				, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
			{
			public:
				AssemblyFlagsAttribute(mscorlib::System::UInt32 flags)
				: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Reflection.AssemblyFlagsAttribute"))
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "UInt32");
					__parameters__[0] = &flags;
					__native_object__ = Global::New("mscorlib", "System.Reflection", "AssemblyFlagsAttribute", 1, __parameter_types__, __parameters__);
				};
			
				AssemblyFlagsAttribute(mscorlib::System::Int32 assemblyFlags)
				: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Reflection.AssemblyFlagsAttribute"))
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = &assemblyFlags;
					__native_object__ = Global::New("mscorlib", "System.Reflection", "AssemblyFlagsAttribute", 1, __parameter_types__, __parameters__);
				};
			
				AssemblyFlagsAttribute(mscorlib::System::Reflection::AssemblyNameFlags::__ENUM__ assemblyFlags)
				: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Reflection.AssemblyFlagsAttribute"))
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Reflection", "AssemblyNameFlags");
					__parameters__[0] = reinterpret_cast<void*>(assemblyFlags);
					__native_object__ = Global::New("mscorlib", "System.Reflection", "AssemblyFlagsAttribute", 1, __parameter_types__, __parameters__);
				};
			
				AssemblyFlagsAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Attribute(nativeTypeInfo)
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
				};
			
				AssemblyFlagsAttribute(MonoObject *nativeObject)
				: mscorlib::System::Attribute(nativeObject)
				, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
				{
				};
			
				~AssemblyFlagsAttribute()
				{
				};
			

				AssemblyFlagsAttribute & operator=(AssemblyFlagsAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Flags)) mscorlib::System::UInt32  Flags;
				__declspec(property(get=get_AssemblyFlags)) mscorlib::System::Int32  AssemblyFlags;
				__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

				//Get Set Properties Methods
				//	Get:Flags
				mscorlib::System::UInt32  get_Flags() const;

				//	Get:AssemblyFlags
				mscorlib::System::Int32  get_AssemblyFlags() const;

				//	Get:TypeId
				mscorlib::System::Object  get_TypeId() const;

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
