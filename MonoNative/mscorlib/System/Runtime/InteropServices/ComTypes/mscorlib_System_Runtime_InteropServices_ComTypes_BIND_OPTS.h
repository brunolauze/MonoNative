#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_BIND_OPTS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_BIND_OPTS_H

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

					class BIND_OPTS
						: public mscorlib::System::ValueType
					{
					public:
						BIND_OPTS(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::ValueType(nativeTypeInfo)
						{
						};
					
						BIND_OPTS(MonoObject *nativeObject)
						: mscorlib::System::ValueType(nativeObject)
						{
						};
					
						~BIND_OPTS()
						{
						};
					

						BIND_OPTS & operator=(BIND_OPTS &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Fields
						__declspec(property(get=get_cbStruct, put=set_cbStruct)) mscorlib::System::Int32  cbStruct;
						__declspec(property(get=get_grfFlags, put=set_grfFlags)) mscorlib::System::Int32  grfFlags;
						__declspec(property(get=get_grfMode, put=set_grfMode)) mscorlib::System::Int32  grfMode;
						__declspec(property(get=get_dwTickCountDeadline, put=set_dwTickCountDeadline)) mscorlib::System::Int32  dwTickCountDeadline;

						//	Get/Set:cbStruct
						mscorlib::System::Int32  get_cbStruct() const;
						void set_cbStruct(mscorlib::System::Int32  value);

						//	Get/Set:grfFlags
						mscorlib::System::Int32  get_grfFlags() const;
						void set_grfFlags(mscorlib::System::Int32  value);

						//	Get/Set:grfMode
						mscorlib::System::Int32  get_grfMode() const;
						void set_grfMode(mscorlib::System::Int32  value);

						//	Get/Set:dwTickCountDeadline
						mscorlib::System::Int32  get_dwTickCountDeadline() const;
						void set_dwTickCountDeadline(mscorlib::System::Int32  value);

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
