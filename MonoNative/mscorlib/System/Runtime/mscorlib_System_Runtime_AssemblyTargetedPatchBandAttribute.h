#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_ASSEMBLYTARGETEDPATCHBANDATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_ASSEMBLYTARGETEDPATCHBANDATTRIBUTE_H

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
		namespace Runtime
		{

			class AssemblyTargetedPatchBandAttribute
				: public mscorlib::System::Attribute
				, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
			{
			public:
				AssemblyTargetedPatchBandAttribute(mscorlib::System::String targetedPatchBand)
				: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.AssemblyTargetedPatchBandAttribute"))
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)targetedPatchBand;
					__native_object__ = Global::New("mscorlib", "System.Runtime", "AssemblyTargetedPatchBandAttribute", 1, __parameter_types__, __parameters__);
				};
			
				AssemblyTargetedPatchBandAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Attribute(nativeTypeInfo)
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
				};
			
				AssemblyTargetedPatchBandAttribute(MonoObject *nativeObject)
				: mscorlib::System::Attribute(nativeObject)
				, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
				{
				};
			
				~AssemblyTargetedPatchBandAttribute()
				{
				};
			

				AssemblyTargetedPatchBandAttribute & operator=(AssemblyTargetedPatchBandAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_TargetedPatchBand, put=set_TargetedPatchBand)) mscorlib::System::String  TargetedPatchBand;
				__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

				//Get Set Properties Methods
				//	Get/Set:TargetedPatchBand
				mscorlib::System::String  get_TargetedPatchBand() const;
				void set_TargetedPatchBand(mscorlib::System::String  value);

				//	Get:TypeId
				mscorlib::System::Object  get_TypeId() const;

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
