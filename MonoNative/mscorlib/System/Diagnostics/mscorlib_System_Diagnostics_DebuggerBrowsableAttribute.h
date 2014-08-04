#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_DEBUGGERBROWSABLEATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_DEBUGGERBROWSABLEATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
#include <mscorlib/System/Diagnostics/mscorlib_System_Diagnostics_DebuggerBrowsableState.h>
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
		namespace Diagnostics
		{

			class DebuggerBrowsableAttribute
				: public mscorlib::System::Attribute
				, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
			{
			public:
				DebuggerBrowsableAttribute(mscorlib::System::Diagnostics::DebuggerBrowsableState::__ENUM__ state)
				: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Diagnostics.DebuggerBrowsableAttribute"))
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Diagnostics", "DebuggerBrowsableState");
					__parameters__[0] = reinterpret_cast<void*>(state);
					__native_object__ = Global::New("mscorlib", "System.Diagnostics", "DebuggerBrowsableAttribute", 1, __parameter_types__, __parameters__);
				};
			
				DebuggerBrowsableAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Attribute(nativeTypeInfo)
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
				};
			
				DebuggerBrowsableAttribute(MonoObject *nativeObject)
				: mscorlib::System::Attribute(nativeObject)
				, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
				{
				};
			
				~DebuggerBrowsableAttribute()
				{
				};
			

				DebuggerBrowsableAttribute & operator=(DebuggerBrowsableAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_State)) mscorlib::System::Diagnostics::DebuggerBrowsableState::__ENUM__  State;
				__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

				//Get Set Properties Methods
				//	Get:State
				mscorlib::System::Diagnostics::DebuggerBrowsableState::__ENUM__  get_State();

				//	Get:TypeId
				mscorlib::System::Object  get_TypeId();

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
