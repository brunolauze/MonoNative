#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISurrogateSelector.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IRemotingFormatter.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_IFormatter.h>
#include <mscorlib/System/Runtime/Serialization/Formatters/mscorlib_System_Runtime_Serialization_Formatters_FormatterAssemblyStyle.h>
#include <mscorlib/System/Runtime/Serialization/Formatters/mscorlib_System_Runtime_Serialization_Formatters_FormatterTypeStyle.h>
#include <mscorlib/System/Runtime/Serialization/Formatters/mscorlib_System_Runtime_Serialization_Formatters_TypeFilterLevel.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMethodCallMessage.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				class SerializationBinder;
				

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
		namespace Runtime
		{
			namespace Remoting
			{
				namespace Messaging
				{

					class Header;
					

				}
			}
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
				namespace Formatters
				{
					namespace Binary
					{

						class BinaryFormatter
							: public mscorlib::System::Object
							, public virtual mscorlib::System::Runtime::Remoting::Messaging::IRemotingFormatter
							, public virtual mscorlib::System::Runtime::Serialization::IFormatter
						{
						public:
							BinaryFormatter()
							: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Serialization.Formatters.Binary.BinaryFormatter"))
							, mscorlib::System::Runtime::Remoting::Messaging::IRemotingFormatter(NULL)
							, mscorlib::System::Runtime::Serialization::IFormatter(NULL)
							{
								__native_object__ = Global::New("mscorlib", "System.Runtime.Serialization.Formatters.Binary", "BinaryFormatter");
							};
						
							BinaryFormatter(mscorlib::System::Runtime::Serialization::ISurrogateSelector selector, mscorlib::System::Runtime::Serialization::StreamingContext context)
							: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Serialization.Formatters.Binary.BinaryFormatter"))
							, mscorlib::System::Runtime::Remoting::Messaging::IRemotingFormatter(NULL)
							, mscorlib::System::Runtime::Serialization::IFormatter(NULL)
							{
								MonoType *__parameter_types__[2];
								void *__parameters__[2];
								__parameter_types__[0] = Global::GetType("mscorlib", "System.Runtime.Serialization", "ISurrogateSelector");
								__parameter_types__[1] = Global::GetType("mscorlib", "System.Runtime.Serialization", "StreamingContext");
								__parameters__[0] = (MonoObject*)selector;
								__parameters__[1] = (MonoObject*)context;
								__native_object__ = Global::New("mscorlib", "System.Runtime.Serialization.Formatters.Binary", "BinaryFormatter", 2, __parameter_types__, __parameters__);
							};
						
							BinaryFormatter(mscorlib::NativeTypeInfo *nativeTypeInfo)
							: mscorlib::System::Object(nativeTypeInfo)
							, mscorlib::System::Runtime::Remoting::Messaging::IRemotingFormatter(NULL)
							, mscorlib::System::Runtime::Serialization::IFormatter(NULL)
							{
							};
						
							BinaryFormatter(MonoObject *nativeObject)
							: mscorlib::System::Object(nativeObject)
							, mscorlib::System::Runtime::Remoting::Messaging::IRemotingFormatter(nativeObject)
							, mscorlib::System::Runtime::Serialization::IFormatter(nativeObject)
							{
							};
						
							~BinaryFormatter()
							{
							};
						

							BinaryFormatter & operator=(BinaryFormatter &value) { __native_object__ = value.GetNativeObject(); return value; };
							operator MonoObject*() { return __native_object__; };
							MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


							virtual mscorlib::System::Object  Deserialize(mscorlib::System::IO::Stream serializationStream);
							virtual mscorlib::System::Object  Deserialize(mscorlib::System::IO::Stream serializationStream, mscorlib::Callback<mscorlib::System::Object  (std::vector<mscorlib::System::Runtime::Remoting::Messaging::Header*> )> handler);
							mscorlib::System::Object  DeserializeMethodResponse(mscorlib::System::IO::Stream serializationStream, mscorlib::Callback<mscorlib::System::Object  (std::vector<mscorlib::System::Runtime::Remoting::Messaging::Header*> )> handler, mscorlib::System::Runtime::Remoting::Messaging::IMethodCallMessage methodCallMessage);
							virtual void  Serialize(mscorlib::System::IO::Stream serializationStream, mscorlib::System::Object graph);
							virtual void  Serialize(mscorlib::System::IO::Stream serializationStream, mscorlib::System::Object graph, std::vector<mscorlib::System::Runtime::Remoting::Messaging::Header*> headers);
							mscorlib::System::Object  UnsafeDeserialize(mscorlib::System::IO::Stream serializationStream, mscorlib::Callback<mscorlib::System::Object  (std::vector<mscorlib::System::Runtime::Remoting::Messaging::Header*> )> handler);
							mscorlib::System::Object  UnsafeDeserializeMethodResponse(mscorlib::System::IO::Stream serializationStream, mscorlib::Callback<mscorlib::System::Object  (std::vector<mscorlib::System::Runtime::Remoting::Messaging::Header*> )> handler, mscorlib::System::Runtime::Remoting::Messaging::IMethodCallMessage methodCallMessage);
							virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


							//Public Properties
							__declspec(property(get=get_AssemblyFormat, put=set_AssemblyFormat)) mscorlib::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle::__ENUM__  AssemblyFormat;
							__declspec(property(get=get_Binder, put=set_Binder)) mscorlib::System::Runtime::Serialization::SerializationBinder  Binder;
							__declspec(property(get=get_Context, put=set_Context)) mscorlib::System::Runtime::Serialization::StreamingContext  Context;
							__declspec(property(get=get_SurrogateSelector, put=set_SurrogateSelector)) mscorlib::System::Runtime::Serialization::ISurrogateSelector  SurrogateSelector;
							__declspec(property(get=get_TypeFormat, put=set_TypeFormat)) mscorlib::System::Runtime::Serialization::Formatters::FormatterTypeStyle::__ENUM__  TypeFormat;
							__declspec(property(get=get_FilterLevel, put=set_FilterLevel)) mscorlib::System::Runtime::Serialization::Formatters::TypeFilterLevel::__ENUM__  FilterLevel;

							//Get Set Properties Methods
							//	Get/Set:AssemblyFormat
							mscorlib::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle::__ENUM__  get_AssemblyFormat() const;
							void set_AssemblyFormat(mscorlib::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle::__ENUM__  value);

							//	Get/Set:Binder
							mscorlib::System::Runtime::Serialization::SerializationBinder  get_Binder() const;
							void set_Binder(mscorlib::System::Runtime::Serialization::SerializationBinder  value);

							//	Get/Set:Context
							mscorlib::System::Runtime::Serialization::StreamingContext  get_Context() const;
							void set_Context(mscorlib::System::Runtime::Serialization::StreamingContext  value);

							//	Get/Set:SurrogateSelector
							mscorlib::System::Runtime::Serialization::ISurrogateSelector  get_SurrogateSelector() const;
							void set_SurrogateSelector(mscorlib::System::Runtime::Serialization::ISurrogateSelector  value);

							//	Get/Set:TypeFormat
							mscorlib::System::Runtime::Serialization::Formatters::FormatterTypeStyle::__ENUM__  get_TypeFormat() const;
							void set_TypeFormat(mscorlib::System::Runtime::Serialization::Formatters::FormatterTypeStyle::__ENUM__  value);

							//	Get/Set:FilterLevel
							mscorlib::System::Runtime::Serialization::Formatters::TypeFilterLevel::__ENUM__  get_FilterLevel() const;
							void set_FilterLevel(mscorlib::System::Runtime::Serialization::Formatters::TypeFilterLevel::__ENUM__  value);

						
						protected:
						
						private:
						
						};

					}
				}
			}
		}
	}
}
#endif
