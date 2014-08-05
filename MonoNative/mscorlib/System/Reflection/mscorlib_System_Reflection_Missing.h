#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_MISSING_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_MISSING_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>

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

			class Missing
				: public mscorlib::System::Object
				, public virtual mscorlib::System::Runtime::Serialization::ISerializable
			{
			public:
				Missing(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
				};
			
				Missing(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
				{
				};
			
				~Missing()
				{
				};
			

				Missing & operator=(Missing &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Static Fields
				static Property<mscorlib::System::Reflection::Missing , mscorlib::System::Reflection::Missing> Value;

				//	Get/Set:Value
				static mscorlib::System::Reflection::Missing  get_Value();
				static void set_Value(mscorlib::System::Reflection::Missing  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
