#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_SURROGATESELECTOR_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_SURROGATESELECTOR_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISurrogateSelector.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializationSurrogate.h>

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
		namespace Runtime
		{
			namespace Serialization
			{

				class StreamingContext;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				class SurrogateSelector
					: public mscorlib::System::Object
					, public virtual mscorlib::System::Runtime::Serialization::ISurrogateSelector
				{
				public:
					SurrogateSelector()
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Serialization.SurrogateSelector"))
					, mscorlib::System::Runtime::Serialization::ISurrogateSelector(NULL)
					{
						__native_object__ = Global::New("mscorlib", "System.Runtime.Serialization", "SurrogateSelector");
					};
				
					SurrogateSelector(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::Runtime::Serialization::ISurrogateSelector(NULL)
					{
					};
				
					SurrogateSelector(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::Runtime::Serialization::ISurrogateSelector(nativeObject)
					{
					};
				
					~SurrogateSelector()
					{
					};
				

					SurrogateSelector & operator=(SurrogateSelector &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual void  AddSurrogate(mscorlib::System::Type type, mscorlib::System::Runtime::Serialization::StreamingContext context, mscorlib::System::Runtime::Serialization::ISerializationSurrogate surrogate);
					virtual void  ChainSelector(mscorlib::System::Runtime::Serialization::ISurrogateSelector selector);
					virtual mscorlib::System::Runtime::Serialization::ISurrogateSelector  GetNextSelector();
					virtual mscorlib::System::Runtime::Serialization::ISerializationSurrogate  GetSurrogate(mscorlib::System::Type type, mscorlib::System::Runtime::Serialization::StreamingContext context, mscorlib::System::Runtime::Serialization::ISurrogateSelector selector);
					virtual void  RemoveSurrogate(mscorlib::System::Type type, mscorlib::System::Runtime::Serialization::StreamingContext context);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
