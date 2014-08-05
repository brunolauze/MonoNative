#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_PARAMETERMODIFIER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_PARAMETERMODIFIER_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class ParameterModifier
				: public mscorlib::System::ValueType
			{
			public:
				ParameterModifier(mscorlib::System::Int32 parameterCount)
				: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Reflection.ParameterModifier"))
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = &parameterCount;
					__native_object__ = Global::New("mscorlib", "System.Reflection", "ParameterModifier", 1, __parameter_types__, __parameters__);
				};
			
				ParameterModifier(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::ValueType(nativeTypeInfo)
				{
				};
			
				ParameterModifier(MonoObject *nativeObject)
				: mscorlib::System::ValueType(nativeObject)
				{
				};
			
				~ParameterModifier()
				{
				};
			

				ParameterModifier & operator=(ParameterModifier &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Item, put=set_Item)) mscorlib::System::Boolean  Item[];

				//Get Set Properties Methods
				//	Get/Set:Item
				mscorlib::System::Boolean  get_Item(mscorlib::System::Int32 index) const;
				void set_Item(mscorlib::System::Int32 index, mscorlib::System::Boolean  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
