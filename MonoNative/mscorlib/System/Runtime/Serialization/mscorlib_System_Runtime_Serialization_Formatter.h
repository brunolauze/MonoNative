#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_FORMATTER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_FORMATTER_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_IFormatter.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISurrogateSelector.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				class SerializationBinder;
				class StreamingContext;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			class Stream;
			

		}
	}
}
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

				class Formatter
					: public mscorlib::System::Object
					, public virtual mscorlib::System::Runtime::Serialization::IFormatter
				{
				public:
					Formatter(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::Runtime::Serialization::IFormatter(NULL)
					{
					};
				
					Formatter(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::Runtime::Serialization::IFormatter(nativeObject)
					{
					};
				
					~Formatter()
					{
					};
				

					Formatter & operator=(Formatter &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Object  Deserialize(mscorlib::System::IO::Stream serializationStream);
					virtual void  Serialize(mscorlib::System::IO::Stream serializationStream, mscorlib::System::Object graph);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Binder, put=set_Binder)) mscorlib::System::Runtime::Serialization::SerializationBinder  Binder;
					__declspec(property(get=get_Context, put=set_Context)) mscorlib::System::Runtime::Serialization::StreamingContext  Context;
					__declspec(property(get=get_SurrogateSelector, put=set_SurrogateSelector)) mscorlib::System::Runtime::Serialization::ISurrogateSelector  SurrogateSelector;

					//Get Set Properties Methods
					//	Get/Set:Binder
					mscorlib::System::Runtime::Serialization::SerializationBinder  get_Binder() const;
					void set_Binder(mscorlib::System::Runtime::Serialization::SerializationBinder  value);

					//	Get/Set:Context
					mscorlib::System::Runtime::Serialization::StreamingContext  get_Context() const;
					void set_Context(mscorlib::System::Runtime::Serialization::StreamingContext  value);

					//	Get/Set:SurrogateSelector
					mscorlib::System::Runtime::Serialization::ISurrogateSelector  get_SurrogateSelector() const;
					void set_SurrogateSelector(mscorlib::System::Runtime::Serialization::ISurrogateSelector  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
