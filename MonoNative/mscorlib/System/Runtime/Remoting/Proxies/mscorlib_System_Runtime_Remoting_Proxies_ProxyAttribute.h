#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_PROXIES_PROXYATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_PROXIES_PROXYATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
#include <mscorlib/System/Runtime/Remoting/Contexts/mscorlib_System_Runtime_Remoting_Contexts_IContextAttribute.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/Remoting/Activation/mscorlib_System_Runtime_Remoting_Activation_IConstructionCallMessage.h>

namespace mscorlib
{
	namespace System
	{

		class MarshalByRefObject;
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
				namespace Proxies
				{

					class RealProxy;
					

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

				class ObjRef;
				

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
				namespace Contexts
				{

					class Context;
					

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
				namespace Proxies
				{

					class ProxyAttribute
						: public mscorlib::System::Attribute
						, public virtual mscorlib::System::Runtime::Remoting::Contexts::IContextAttribute
						, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
					{
					public:
						ProxyAttribute()
						: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.Proxies.ProxyAttribute"))
						, mscorlib::System::Runtime::Remoting::Contexts::IContextAttribute(NULL)
						, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
						{
							__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting.Proxies", "ProxyAttribute");
						};
					
						ProxyAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Attribute(nativeTypeInfo)
						, mscorlib::System::Runtime::Remoting::Contexts::IContextAttribute(NULL)
						, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
						{
						};
					
						ProxyAttribute(MonoObject *nativeObject)
						: mscorlib::System::Attribute(nativeObject)
						, mscorlib::System::Runtime::Remoting::Contexts::IContextAttribute(nativeObject)
						, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
						{
						};
					
						~ProxyAttribute()
						{
						};
					

						ProxyAttribute & operator=(ProxyAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
						bool operator==(ProxyAttribute &value) { return mscorlib::System::Object::Equals(value); };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual mscorlib::System::MarshalByRefObject  CreateInstance(mscorlib::System::Type serverType);
						virtual mscorlib::System::Runtime::Remoting::Proxies::RealProxy  CreateProxy(mscorlib::System::Runtime::Remoting::ObjRef objRef, mscorlib::System::Type serverType, mscorlib::System::Object serverObject, mscorlib::System::Runtime::Remoting::Contexts::Context serverContext);
						virtual void  GetPropertiesForNewContext(mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage msg);
						virtual mscorlib::System::Boolean  IsContextOK(mscorlib::System::Runtime::Remoting::Contexts::Context ctx, mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage msg);
						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Properties
						__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

						//Get Set Properties Methods
						//	Get:TypeId
						mscorlib::System::Object  get_TypeId() const;

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
