#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_DEBUGGERDISPLAYATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_DEBUGGERDISPLAYATTRIBUTE_H

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
		namespace Diagnostics
		{

			class DebuggerDisplayAttribute
				: public mscorlib::System::Attribute
				, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
			{
			public:
				DebuggerDisplayAttribute(mscorlib::System::String value)
				: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Diagnostics.DebuggerDisplayAttribute"))
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)value;
					__native_object__ = Global::New("mscorlib", "System.Diagnostics", "DebuggerDisplayAttribute", 1, __parameter_types__, __parameters__);
				};
			
				DebuggerDisplayAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Attribute(nativeTypeInfo)
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
				};
			
				DebuggerDisplayAttribute(MonoObject *nativeObject)
				: mscorlib::System::Attribute(nativeObject)
				, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
				{
				};
			
				~DebuggerDisplayAttribute()
				{
				};
			

				DebuggerDisplayAttribute & operator=(DebuggerDisplayAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(DebuggerDisplayAttribute &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Value)) mscorlib::System::String  Value;
				__declspec(property(get=get_Target, put=set_Target)) mscorlib::System::Type  Target;
				__declspec(property(get=get_TargetTypeName, put=set_TargetTypeName)) mscorlib::System::String  TargetTypeName;
				__declspec(property(get=get_Type, put=set_Type)) mscorlib::System::String  Type;
				__declspec(property(get=get_Name, put=set_Name)) mscorlib::System::String  Name;
				__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

				//Get Set Properties Methods
				//	Get:Value
				mscorlib::System::String  get_Value() const;

				//	Get/Set:Target
				mscorlib::System::Type  get_Target() const;
				void set_Target(mscorlib::System::Type  value);

				//	Get/Set:TargetTypeName
				mscorlib::System::String  get_TargetTypeName() const;
				void set_TargetTypeName(mscorlib::System::String  value);

				//	Get/Set:Type
				mscorlib::System::String  get_Type() const;
				void set_Type(mscorlib::System::String  value);

				//	Get/Set:Name
				mscorlib::System::String  get_Name() const;
				void set_Name(mscorlib::System::String  value);

				//	Get:TypeId
				mscorlib::System::Object  get_TypeId() const;

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
