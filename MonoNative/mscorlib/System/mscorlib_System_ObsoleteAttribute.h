#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_OBSOLETEATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_OBSOLETEATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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

		class ObsoleteAttribute
			: public mscorlib::System::Attribute
			, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
		{
		public:
			ObsoleteAttribute()
			: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.ObsoleteAttribute"))
			, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
			{
				__native_object__ = Global::New("mscorlib", "System", "ObsoleteAttribute");
			};
		
			ObsoleteAttribute(mscorlib::System::String message)
			: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.ObsoleteAttribute"))
			, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = (MonoObject*)message;
				__native_object__ = Global::New("mscorlib", "System", "ObsoleteAttribute", 1, __parameter_types__, __parameters__);
			};
		
			ObsoleteAttribute(mscorlib::System::String message, mscorlib::System::Boolean error)
			: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.ObsoleteAttribute"))
			, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "Boolean");
				__parameters__[0] = (MonoObject*)message;
				__parameters__[1] = reinterpret_cast<void*>(error);
				__native_object__ = Global::New("mscorlib", "System", "ObsoleteAttribute", 2, __parameter_types__, __parameters__);
			};
		
			ObsoleteAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::Attribute(nativeTypeInfo)
			, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
			{
			};
		
			ObsoleteAttribute(MonoObject *nativeObject)
			: mscorlib::System::Attribute(nativeObject)
			, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
			{
			};
		
			~ObsoleteAttribute()
			{
			};
		

			ObsoleteAttribute & operator=(ObsoleteAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
			bool operator==(ObsoleteAttribute &value) { return mscorlib::System::Object::Equals(value); };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Properties
			__declspec(property(get=get_Message)) mscorlib::System::String  Message;
			__declspec(property(get=get_IsError)) mscorlib::System::Boolean  IsError;
			__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

			//Get Set Properties Methods
			//	Get:Message
			mscorlib::System::String  get_Message() const;

			//	Get:IsError
			mscorlib::System::Boolean  get_IsError() const;

			//	Get:TypeId
			mscorlib::System::Object  get_TypeId() const;

		
		protected:
		
		private:
		
		};

	}
}
#endif
