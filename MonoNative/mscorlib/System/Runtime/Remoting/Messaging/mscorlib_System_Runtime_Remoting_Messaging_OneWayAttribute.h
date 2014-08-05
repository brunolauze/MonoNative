#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_MESSAGING_ONEWAYATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_MESSAGING_ONEWAYATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>
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

					class OneWayAttribute
						: public mscorlib::System::Attribute
						, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
					{
					public:
						OneWayAttribute()
						: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.Messaging.OneWayAttribute"))
						, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
						{
							__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting.Messaging", "OneWayAttribute");
						};
					
						OneWayAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Attribute(nativeTypeInfo)
						, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
						{
						};
					
						OneWayAttribute(MonoObject *nativeObject)
						: mscorlib::System::Attribute(nativeObject)
						, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
						{
						};
					
						~OneWayAttribute()
						{
						};
					

						OneWayAttribute & operator=(OneWayAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


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
