#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IDLDESC_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IDLDESC_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_IDLFLAG.h>

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

					class IDLDESC
						: public mscorlib::System::ValueType
					{
					public:
						IDLDESC(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::ValueType(nativeTypeInfo)
						{
						};
					
						IDLDESC(MonoObject *nativeObject)
						: mscorlib::System::ValueType(nativeObject)
						{
						};
					
						~IDLDESC()
						{
						};
					

						IDLDESC & operator=(IDLDESC &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Fields
						__declspec(property(get=get_dwReserved, put=set_dwReserved)) mscorlib::System::IntPtr  dwReserved;
						__declspec(property(get=get_wIDLFlags, put=set_wIDLFlags)) mscorlib::System::Runtime::InteropServices::ComTypes::IDLFLAG::__ENUM__  wIDLFlags;

						//	Get/Set:dwReserved
						mscorlib::System::IntPtr  get_dwReserved();
						void set_dwReserved(mscorlib::System::IntPtr  value);

						//	Get/Set:wIDLFlags
						mscorlib::System::Runtime::InteropServices::ComTypes::IDLFLAG::__ENUM__  get_wIDLFlags();
						void set_wIDLFlags(mscorlib::System::Runtime::InteropServices::ComTypes::IDLFLAG::__ENUM__  value);

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
