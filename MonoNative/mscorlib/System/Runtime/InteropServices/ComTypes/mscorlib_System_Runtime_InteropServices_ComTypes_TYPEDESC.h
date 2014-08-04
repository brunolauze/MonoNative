#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_TYPEDESC_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_TYPEDESC_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Type;
		class IntPtr;
		

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
				namespace ComTypes
				{

					class TYPEDESC
						: public mscorlib::System::ValueType
					{
					public:
						TYPEDESC(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::ValueType(nativeTypeInfo)
						{
						};
					
						TYPEDESC(MonoObject *nativeObject)
						: mscorlib::System::ValueType(nativeObject)
						{
						};
					
						~TYPEDESC()
						{
						};
					

						TYPEDESC & operator=(TYPEDESC &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Fields
						__declspec(property(get=get_lpValue, put=set_lpValue)) mscorlib::System::IntPtr  lpValue;
						__declspec(property(get=get_vt, put=set_vt)) mscorlib::System::Int16  vt;

						//	Get/Set:lpValue
						mscorlib::System::IntPtr  get_lpValue();
						void set_lpValue(mscorlib::System::IntPtr  value);

						//	Get/Set:vt
						mscorlib::System::Int16  get_vt();
						void set_vt(mscorlib::System::Int16  value);

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
