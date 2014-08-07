#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_ERRORWRAPPER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_ERRORWRAPPER_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_Exception.h>

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
			namespace InteropServices
			{

				class ErrorWrapper
					: public mscorlib::System::Object
				{
				public:
					ErrorWrapper(mscorlib::System::Exception e)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.InteropServices.ErrorWrapper"))
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Exception");
						__parameters__[0] = (MonoObject*)e;
						__native_object__ = Global::New("mscorlib", "System.Runtime.InteropServices", "ErrorWrapper", 1, __parameter_types__, __parameters__);
					};
				
					ErrorWrapper(mscorlib::System::Int32 errorCode)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.InteropServices.ErrorWrapper"))
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
						__parameters__[0] = &errorCode;
						__native_object__ = Global::New("mscorlib", "System.Runtime.InteropServices", "ErrorWrapper", 1, __parameter_types__, __parameters__);
					};
				
					ErrorWrapper(mscorlib::System::Object errorCode)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.InteropServices.ErrorWrapper"))
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Object");
						__parameters__[0] = (MonoObject*)errorCode;
						__native_object__ = Global::New("mscorlib", "System.Runtime.InteropServices", "ErrorWrapper", 1, __parameter_types__, __parameters__);
					};
				
					ErrorWrapper(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					ErrorWrapper(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~ErrorWrapper()
					{
					};
				

					ErrorWrapper & operator=(ErrorWrapper &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(ErrorWrapper &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_ErrorCode)) mscorlib::System::Int32  ErrorCode;

					//Get Set Properties Methods
					//	Get:ErrorCode
					mscorlib::System::Int32  get_ErrorCode() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
