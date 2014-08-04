#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_EXCEPTIONSERVICES_EXCEPTIONDISPATCHINFO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_EXCEPTIONSERVICES_EXCEPTIONDISPATCHINFO_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Exception;
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
			namespace ExceptionServices
			{

				class ExceptionDispatchInfo
					: public mscorlib::System::Object
				{
				public:
					ExceptionDispatchInfo(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					ExceptionDispatchInfo(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~ExceptionDispatchInfo()
					{
					};
				

					ExceptionDispatchInfo & operator=(ExceptionDispatchInfo &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					static mscorlib::System::Runtime::ExceptionServices::ExceptionDispatchInfo  Capture(mscorlib::System::Exception source);
					void  Throw();
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_SourceException)) mscorlib::System::Exception  SourceException;

					//Get Set Properties Methods
					//	Get:SourceException
					mscorlib::System::Exception  get_SourceException();

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
