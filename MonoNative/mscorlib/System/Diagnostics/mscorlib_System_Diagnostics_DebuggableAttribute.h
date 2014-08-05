#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_DEBUGGABLEATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_DEBUGGABLEATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
#include <mscorlib/System/mscorlib_System_IConvertible.h>
#include <mscorlib/System/mscorlib_System_IFormattable.h>
#include <mscorlib/System/mscorlib_System_IComparable.h>
#include <mscorlib/System/mscorlib_System_TypeCode.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_IFormatProvider.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>

namespace mscorlib
{
	namespace System
	{

		class Enum;
		class String;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{

			class DebuggableAttribute
				: public mscorlib::System::Attribute
				, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
			{
			public:
				class DebuggingModes
				{
				public:
					enum __ENUM__
					{
						None = 0,
						Default = 1,
						IgnoreSymbolStoreSequencePoints = 2,
						EnableEditAndContinue = 4,
						DisableOptimizations = 256,
					};
				};
				
				DebuggableAttribute(mscorlib::System::Boolean isJITTrackingEnabled, mscorlib::System::Boolean isJITOptimizerDisabled)
				: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Diagnostics.DebuggableAttribute"))
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Boolean");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Boolean");
					__parameters__[0] = reinterpret_cast<void*>(isJITTrackingEnabled);
					__parameters__[1] = reinterpret_cast<void*>(isJITOptimizerDisabled);
					__native_object__ = Global::New("mscorlib", "System.Diagnostics", "DebuggableAttribute", 2, __parameter_types__, __parameters__);
				};
			
				DebuggableAttribute(mscorlib::System::Diagnostics::DebuggableAttribute::DebuggingModes::__ENUM__ modes)
				: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Diagnostics.DebuggableAttribute"))
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Diagnostics", "DebuggingModes");
					__parameters__[0] = reinterpret_cast<void*>(modes);
					__native_object__ = Global::New("mscorlib", "System.Diagnostics", "DebuggableAttribute", 1, __parameter_types__, __parameters__);
				};
			
				DebuggableAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Attribute(nativeTypeInfo)
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
				};
			
				DebuggableAttribute(MonoObject *nativeObject)
				: mscorlib::System::Attribute(nativeObject)
				, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
				{
				};
			
				~DebuggableAttribute()
				{
				};
			

				DebuggableAttribute & operator=(DebuggableAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_DebuggingFlags)) mscorlib::System::Diagnostics::DebuggableAttribute::DebuggingModes::__ENUM__  DebuggingFlags;
				__declspec(property(get=get_IsJITTrackingEnabled)) mscorlib::System::Boolean  IsJITTrackingEnabled;
				__declspec(property(get=get_IsJITOptimizerDisabled)) mscorlib::System::Boolean  IsJITOptimizerDisabled;
				__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

				//Get Set Properties Methods
				//	Get:DebuggingFlags
				mscorlib::System::Diagnostics::DebuggableAttribute::DebuggingModes::__ENUM__  get_DebuggingFlags() const;

				//	Get:IsJITTrackingEnabled
				mscorlib::System::Boolean  get_IsJITTrackingEnabled() const;

				//	Get:IsJITOptimizerDisabled
				mscorlib::System::Boolean  get_IsJITOptimizerDisabled() const;

				//	Get:TypeId
				mscorlib::System::Object  get_TypeId() const;

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
