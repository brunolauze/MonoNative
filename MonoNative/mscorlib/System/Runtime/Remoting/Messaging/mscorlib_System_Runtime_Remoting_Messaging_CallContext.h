#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXT_H

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
		namespace Runtime
		{
			namespace Remoting
			{
				namespace Messaging
				{

					class CallContext
						: public mscorlib::System::Object
					{
					public:
						CallContext(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Object(nativeTypeInfo)
						{
						};
					
						CallContext(MonoObject *nativeObject)
						: mscorlib::System::Object(nativeObject)
						{
						};
					
						~CallContext()
						{
						};
					

						CallContext & operator=(CallContext &value) { __native_object__ = value.GetNativeObject(); return value; };
						bool operator==(CallContext &value) { return mscorlib::System::Object::Equals(value); };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						static void  FreeNamedDataSlot(mscorlib::System::String name);
						static void  FreeNamedDataSlot(const char *name);
						static mscorlib::System::Object  GetData(mscorlib::System::String name);
						static mscorlib::System::Object  GetData(const char *name);
						static void  SetData(mscorlib::System::String name, mscorlib::System::Object data);
						static void  SetData(const char *name, mscorlib::System::Object data);
						static mscorlib::System::Object  LogicalGetData(mscorlib::System::String name);
						static mscorlib::System::Object  LogicalGetData(const char *name);
						static void  LogicalSetData(mscorlib::System::String name, mscorlib::System::Object data);
						static void  LogicalSetData(const char *name, mscorlib::System::Object data);
						static std::vector<mscorlib::System::Runtime::Remoting::Messaging::Header*>  GetHeaders();
						static void  SetHeaders(std::vector<mscorlib::System::Runtime::Remoting::Messaging::Header*> headers);
						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Static Properties
						static Property<mscorlib::System::Object , mscorlib::System::Runtime::Remoting::Messaging::CallContext> HostContext;

						//Get Set Static Properties Methods
						//	Get/Set:HostContext
						static mscorlib::System::Object  get_HostContext();
						static void set_HostContext(mscorlib::System::Object  value);


					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
