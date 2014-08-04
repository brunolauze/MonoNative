#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_GCHandleType.h>

namespace mscorlib
{
	namespace System
	{

		class IntPtr;
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

				class GCHandle
					: public mscorlib::System::ValueType
				{
				public:
					GCHandle(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::ValueType(nativeTypeInfo)
					{
					};
				
					GCHandle(MonoObject *nativeObject)
					: mscorlib::System::ValueType(nativeObject)
					{
					};
				
					~GCHandle()
					{
					};
				

					GCHandle & operator=(GCHandle &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					mscorlib::System::IntPtr  AddrOfPinnedObject();
					static mscorlib::System::Runtime::InteropServices::GCHandle  Alloc(mscorlib::System::Object value);
					static mscorlib::System::Runtime::InteropServices::GCHandle  Alloc(mscorlib::System::Object value, mscorlib::System::Runtime::InteropServices::GCHandleType::__ENUM__ type);
					void  Free();
					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object o) override;
					virtual mscorlib::System::Int32  GetHashCode() override;
					static mscorlib::System::Runtime::InteropServices::GCHandle  FromIntPtr(mscorlib::System::IntPtr value);
					static mscorlib::System::IntPtr  ToIntPtr(mscorlib::System::Runtime::InteropServices::GCHandle value);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_IsAllocated)) mscorlib::System::Boolean  IsAllocated;
					__declspec(property(get=get_Target, put=set_Target)) mscorlib::System::Object  Target;

					//Get Set Properties Methods
					//	Get:IsAllocated
					mscorlib::System::Boolean  get_IsAllocated();

					//	Get/Set:Target
					mscorlib::System::Object  get_Target();
					void set_Target(mscorlib::System::Object  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
