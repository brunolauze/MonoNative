#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_TYPELIBATTR_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_TYPELIBATTR_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_SYSKIND.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_LIBFLAGS.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Type;
		class Guid;
		

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

					class TYPELIBATTR
						: public mscorlib::System::ValueType
					{
					public:
						TYPELIBATTR(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::ValueType(nativeTypeInfo)
						{
						};
					
						TYPELIBATTR(MonoObject *nativeObject)
						: mscorlib::System::ValueType(nativeObject)
						{
						};
					
						~TYPELIBATTR()
						{
						};
					

						TYPELIBATTR & operator=(TYPELIBATTR &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Fields
						__declspec(property(get=get_guid, put=set_guid)) mscorlib::System::Guid  guid;
						__declspec(property(get=get_lcid, put=set_lcid)) mscorlib::System::Int32  lcid;
						__declspec(property(get=get_syskind, put=set_syskind)) mscorlib::System::Runtime::InteropServices::ComTypes::SYSKIND::__ENUM__  syskind;
						__declspec(property(get=get_wMajorVerNum, put=set_wMajorVerNum)) mscorlib::System::Int16  wMajorVerNum;
						__declspec(property(get=get_wMinorVerNum, put=set_wMinorVerNum)) mscorlib::System::Int16  wMinorVerNum;
						__declspec(property(get=get_wLibFlags, put=set_wLibFlags)) mscorlib::System::Runtime::InteropServices::ComTypes::LIBFLAGS::__ENUM__  wLibFlags;

						//	Get/Set:guid
						mscorlib::System::Guid  get_guid();
						void set_guid(mscorlib::System::Guid  value);

						//	Get/Set:lcid
						mscorlib::System::Int32  get_lcid();
						void set_lcid(mscorlib::System::Int32  value);

						//	Get/Set:syskind
						mscorlib::System::Runtime::InteropServices::ComTypes::SYSKIND::__ENUM__  get_syskind();
						void set_syskind(mscorlib::System::Runtime::InteropServices::ComTypes::SYSKIND::__ENUM__  value);

						//	Get/Set:wMajorVerNum
						mscorlib::System::Int16  get_wMajorVerNum();
						void set_wMajorVerNum(mscorlib::System::Int16  value);

						//	Get/Set:wMinorVerNum
						mscorlib::System::Int16  get_wMinorVerNum();
						void set_wMinorVerNum(mscorlib::System::Int16  value);

						//	Get/Set:wLibFlags
						mscorlib::System::Runtime::InteropServices::ComTypes::LIBFLAGS::__ENUM__  get_wLibFlags();
						void set_wLibFlags(mscorlib::System::Runtime::InteropServices::ComTypes::LIBFLAGS::__ENUM__  value);

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
