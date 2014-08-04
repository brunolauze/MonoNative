#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_FILETIME_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_FILETIME_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Type;
		

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

				class FILETIME
					: public mscorlib::System::ValueType
				{
				public:
					FILETIME(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::ValueType(nativeTypeInfo)
					{
					};
				
					FILETIME(MonoObject *nativeObject)
					: mscorlib::System::ValueType(nativeObject)
					{
					};
				
					~FILETIME()
					{
					};
				

					FILETIME & operator=(FILETIME &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Fields
					__declspec(property(get=get_dwLowDateTime, put=set_dwLowDateTime)) mscorlib::System::Int32  dwLowDateTime;
					__declspec(property(get=get_dwHighDateTime, put=set_dwHighDateTime)) mscorlib::System::Int32  dwHighDateTime;

					//	Get/Set:dwLowDateTime
					mscorlib::System::Int32  get_dwLowDateTime();
					void set_dwLowDateTime(mscorlib::System::Int32  value);

					//	Get/Set:dwHighDateTime
					mscorlib::System::Int32  get_dwHighDateTime();
					void set_dwHighDateTime(mscorlib::System::Int32  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
