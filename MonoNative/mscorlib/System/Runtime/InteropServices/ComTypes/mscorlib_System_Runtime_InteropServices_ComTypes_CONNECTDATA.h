#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_CONNECTDATA_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_CONNECTDATA_H

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

					class CONNECTDATA
						: public mscorlib::System::ValueType
					{
					public:
						CONNECTDATA(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::ValueType(nativeTypeInfo)
						{
						};
					
						CONNECTDATA(MonoObject *nativeObject)
						: mscorlib::System::ValueType(nativeObject)
						{
						};
					
						~CONNECTDATA()
						{
						};
					

						CONNECTDATA & operator=(CONNECTDATA &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Fields
						__declspec(property(get=get_pUnk, put=set_pUnk)) mscorlib::System::Object  pUnk;
						__declspec(property(get=get_dwCookie, put=set_dwCookie)) mscorlib::System::Int32  dwCookie;

						//	Get/Set:pUnk
						mscorlib::System::Object  get_pUnk();
						void set_pUnk(mscorlib::System::Object  value);

						//	Get/Set:dwCookie
						mscorlib::System::Int32  get_dwCookie();
						void set_dwCookie(mscorlib::System::Int32  value);

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
