#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXTATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXTATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
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
				namespace Contexts
				{

					class ContextAttribute
						: public mscorlib::System::Attribute
						, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
						, public virtual mscorlib::System::Runtime::Remoting::Contexts::IContextProperty
						, public virtual mscorlib::System::Runtime::Remoting::Contexts::IContextAttribute
					{
					public:
						ContextAttribute(mscorlib::System::String name)
						: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.Contexts.ContextAttribute"))
						, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
						, mscorlib::System::Runtime::Remoting::Contexts::IContextProperty(NULL)
						, mscorlib::System::Runtime::Remoting::Contexts::IContextAttribute(NULL)
						{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
							__parameters__[0] = (MonoObject*)name;
							__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting.Contexts", "ContextAttribute", 1, __parameter_types__, __parameters__);
						};
					
						ContextAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Attribute(nativeTypeInfo)
						, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
						, mscorlib::System::Runtime::Remoting::Contexts::IContextProperty(NULL)
						, mscorlib::System::Runtime::Remoting::Contexts::IContextAttribute(NULL)
						{
						};
					
						ContextAttribute(MonoObject *nativeObject)
						: mscorlib::System::Attribute(nativeObject)
						, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
						, mscorlib::System::Runtime::Remoting::Contexts::IContextProperty(nativeObject)
						, mscorlib::System::Runtime::Remoting::Contexts::IContextAttribute(nativeObject)
						{
						};
					
						~ContextAttribute()
						{
						};
					

						ContextAttribute & operator=(ContextAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object o) override;
						virtual void  Freeze(mscorlib::System::Runtime::Remoting::Contexts::Context newContext);
						virtual mscorlib::System::Int32  GetHashCode() override;
						virtual void  GetPropertiesForNewContext(mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage ctorMsg);
						virtual mscorlib::System::Boolean  IsContextOK(mscorlib::System::Runtime::Remoting::Contexts::Context ctx, mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage ctorMsg);
						virtual mscorlib::System::Boolean  IsNewContextOK(mscorlib::System::Runtime::Remoting::Contexts::Context newCtx);
						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Properties
						__declspec(property(get=get_Name)) mscorlib::System::String  Name;
						__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

						//Get Set Properties Methods
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
