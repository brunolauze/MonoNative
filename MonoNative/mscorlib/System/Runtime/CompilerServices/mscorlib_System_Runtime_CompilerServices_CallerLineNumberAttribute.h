#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_CALLERLINENUMBERATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_CALLERLINENUMBERATTRIBUTE_H

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
			namespace CompilerServices
			{

				class CallerLineNumberAttribute
					: public mscorlib::System::Attribute
					, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
				{
				public:
					CallerLineNumberAttribute()
					: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.CompilerServices.CallerLineNumberAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						__native_object__ = Global::New("mscorlib", "System.Runtime.CompilerServices", "CallerLineNumberAttribute");
					};
				
					CallerLineNumberAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Attribute(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
					};
				
					CallerLineNumberAttribute(MonoObject *nativeObject)
					: mscorlib::System::Attribute(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
					{
					};
				
					~CallerLineNumberAttribute()
					{
					};
				

					CallerLineNumberAttribute & operator=(CallerLineNumberAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(CallerLineNumberAttribute &value) { return mscorlib::System::Object::Equals(value); };
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
#endif
