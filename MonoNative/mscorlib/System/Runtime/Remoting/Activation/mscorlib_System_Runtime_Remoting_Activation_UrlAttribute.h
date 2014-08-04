#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_ACTIVATION_URLATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_ACTIVATION_URLATTRIBUTE_H

#include <mscorlib/System/Runtime/Remoting/Contexts/mscorlib_System_Runtime_Remoting_Contexts_ContextAttribute.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>
#include <mscorlib/System/Runtime/Remoting/Contexts/mscorlib_System_Runtime_Remoting_Contexts_IContextProperty.h>
#include <mscorlib/System/Runtime/Remoting/Contexts/mscorlib_System_Runtime_Remoting_Contexts_IContextAttribute.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/Remoting/Activation/mscorlib_System_Runtime_Remoting_Activation_IConstructionCallMessage.h>

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

		class Type;
		

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
				namespace Activation
				{

					class UrlAttribute
						: public mscorlib::System::Runtime::Remoting::Contexts::ContextAttribute
						, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
						, public virtual mscorlib::System::Runtime::Remoting::Contexts::IContextProperty
						, public virtual mscorlib::System::Runtime::Remoting::Contexts::IContextAttribute
					{
					public:
						UrlAttribute(mscorlib::System::String callsiteURL)
						: mscorlib::System::Runtime::Remoting::Contexts::ContextAttribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.Activation.UrlAttribute"))
						, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
						, mscorlib::System::Runtime::Remoting::Contexts::IContextProperty(NULL)
						, mscorlib::System::Runtime::Remoting::Contexts::IContextAttribute(NULL)
						{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
							__parameters__[0] = (MonoObject*)callsiteURL;
							__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting.Activation", "UrlAttribute", 1, __parameter_types__, __parameters__);
						};
					
						UrlAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Runtime::Remoting::Contexts::ContextAttribute(nativeTypeInfo)
						, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
						, mscorlib::System::Runtime::Remoting::Contexts::IContextProperty(NULL)
						, mscorlib::System::Runtime::Remoting::Contexts::IContextAttribute(NULL)
						{
						};
					
						UrlAttribute(MonoObject *nativeObject)
						: mscorlib::System::Runtime::Remoting::Contexts::ContextAttribute(nativeObject)
						, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
						, mscorlib::System::Runtime::Remoting::Contexts::IContextProperty(nativeObject)
						, mscorlib::System::Runtime::Remoting::Contexts::IContextAttribute(nativeObject)
						{
						};
					
						~UrlAttribute()
						{
						};
					

						UrlAttribute & operator=(UrlAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object o) override;
						virtual mscorlib::System::Int32  GetHashCode() override;
						virtual void  GetPropertiesForNewContext(mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage ctorMsg) override;
						virtual mscorlib::System::Boolean  IsContextOK(mscorlib::System::Runtime::Remoting::Contexts::Context ctx, mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage msg) override;
						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Properties
						__declspec(property(get=get_UrlValue)) mscorlib::System::String  UrlValue;
						__declspec(property(get=get_Name)) mscorlib::System::String  Name;
						__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

						//Get Set Properties Methods
						//	Get:UrlValue
						mscorlib::System::String  get_UrlValue();

						//	Get:Name
						mscorlib::System::String  get_Name();

						//	Get:TypeId
						mscorlib::System::Object  get_TypeId();

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
