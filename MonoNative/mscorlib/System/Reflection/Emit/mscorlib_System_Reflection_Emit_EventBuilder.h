#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_EVENTBUILDER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_EVENTBUILDER_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__EventBuilder.h>

namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{
			namespace Emit
			{

				class MethodBuilder;
				class EventToken;
				class CustomAttributeBuilder;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class ConstructorInfo;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class Byte;
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
			namespace Emit
			{

				class EventBuilder
					: public mscorlib::System::Object
					, public virtual mscorlib::System::Runtime::InteropServices::_EventBuilder
				{
				public:
					EventBuilder(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_EventBuilder(NULL)
					{
					};
				
					EventBuilder(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_EventBuilder(nativeObject)
					{
					};
				
					~EventBuilder()
					{
					};
				

					EventBuilder & operator=(EventBuilder &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(EventBuilder &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					void  AddOtherMethod(mscorlib::System::Reflection::Emit::MethodBuilder mdBuilder);
					mscorlib::System::Reflection::Emit::EventToken  GetEventToken();
					void  SetAddOnMethod(mscorlib::System::Reflection::Emit::MethodBuilder mdBuilder);
					void  SetRaiseMethod(mscorlib::System::Reflection::Emit::MethodBuilder mdBuilder);
					void  SetRemoveOnMethod(mscorlib::System::Reflection::Emit::MethodBuilder mdBuilder);
					void  SetCustomAttribute(mscorlib::System::Reflection::Emit::CustomAttributeBuilder customBuilder);
					void  SetCustomAttribute(mscorlib::System::Reflection::ConstructorInfo con, std::vector<mscorlib::System::Byte*> binaryAttribute);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
