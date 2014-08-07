#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_BINDPTR_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_BINDPTR_H

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
				namespace ComTypes
				{

					class BINDPTR
						: public mscorlib::System::ValueType
					{
					public:
						BINDPTR(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::ValueType(nativeTypeInfo)
						{
						};
					
						BINDPTR(MonoObject *nativeObject)
						: mscorlib::System::ValueType(nativeObject)
						{
						};
					
						~BINDPTR()
						{
						};
					

						BINDPTR & operator=(BINDPTR &value) { __native_object__ = value.GetNativeObject(); return value; };
						bool operator==(BINDPTR &value) { return mscorlib::System::Object::Equals(value); };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Fields
						__declspec(property(get=get_lpfuncdesc, put=set_lpfuncdesc)) mscorlib::System::IntPtr  lpfuncdesc;
						__declspec(property(get=get_lptcomp, put=set_lptcomp)) mscorlib::System::IntPtr  lptcomp;
						__declspec(property(get=get_lpvardesc, put=set_lpvardesc)) mscorlib::System::IntPtr  lpvardesc;

						//	Get/Set:lpfuncdesc
						mscorlib::System::IntPtr  get_lpfuncdesc() const;
						void set_lpfuncdesc(mscorlib::System::IntPtr  value);

						//	Get/Set:lptcomp
						mscorlib::System::IntPtr  get_lptcomp() const;
						void set_lptcomp(mscorlib::System::IntPtr  value);

						//	Get/Set:lpvardesc
						mscorlib::System::IntPtr  get_lpvardesc() const;
						void set_lpvardesc(mscorlib::System::IntPtr  value);

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
