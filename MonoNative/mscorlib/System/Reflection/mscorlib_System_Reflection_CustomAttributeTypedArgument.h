#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_CUSTOMATTRIBUTETYPEDARGUMENT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_CUSTOMATTRIBUTETYPEDARGUMENT_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class CustomAttributeTypedArgument
				: public mscorlib::System::ValueType
			{
			public:
				CustomAttributeTypedArgument(mscorlib::System::Type argumentType, mscorlib::System::Object value)
				: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Reflection.CustomAttributeTypedArgument"))
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Type");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Object");
					__parameters__[0] = (MonoObject*)argumentType;
					__parameters__[1] = (MonoObject*)value;
					__native_object__ = Global::New("mscorlib", "System.Reflection", "CustomAttributeTypedArgument", 2, __parameter_types__, __parameters__);
				};
			
				CustomAttributeTypedArgument(mscorlib::System::Object value)
				: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Reflection.CustomAttributeTypedArgument"))
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Object");
					__parameters__[0] = (MonoObject*)value;
					__native_object__ = Global::New("mscorlib", "System.Reflection", "CustomAttributeTypedArgument", 1, __parameter_types__, __parameters__);
				};
			
				CustomAttributeTypedArgument(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::ValueType(nativeTypeInfo)
				{
				};
			
				CustomAttributeTypedArgument(MonoObject *nativeObject)
				: mscorlib::System::ValueType(nativeObject)
				{
				};
			
				~CustomAttributeTypedArgument()
				{
				};
			

				CustomAttributeTypedArgument & operator=(CustomAttributeTypedArgument &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::String  ToString() override;
				virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
				virtual mscorlib::System::Int32  GetHashCode() override;
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_ArgumentType)) mscorlib::System::Type  ArgumentType;
				__declspec(property(get=get_Value)) mscorlib::System::Object  Value;

				//Get Set Properties Methods
				//	Get:ArgumentType
				mscorlib::System::Type  get_ArgumentType();

				//	Get:Value
				mscorlib::System::Object  get_Value();

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
