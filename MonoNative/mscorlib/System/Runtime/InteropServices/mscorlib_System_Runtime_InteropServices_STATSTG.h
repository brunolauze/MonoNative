#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_STATSTG_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_STATSTG_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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

				class FILETIME;
				

			}
		}
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

				class STATSTG
					: public mscorlib::System::ValueType
				{
				public:
					STATSTG(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::ValueType(nativeTypeInfo)
					{
					};
				
					STATSTG(MonoObject *nativeObject)
					: mscorlib::System::ValueType(nativeObject)
					{
					};
				
					~STATSTG()
					{
					};
				

					STATSTG & operator=(STATSTG &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(STATSTG &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Fields
					__declspec(property(get=get_pwcsName, put=set_pwcsName)) mscorlib::System::String  pwcsName;
					__declspec(property(get=get_type, put=set_type)) mscorlib::System::Int32  type;
					__declspec(property(get=get_cbSize, put=set_cbSize)) mscorlib::System::Int64  cbSize;
					__declspec(property(get=get_mtime, put=set_mtime)) mscorlib::System::Runtime::InteropServices::FILETIME  mtime;
					__declspec(property(get=get_ctime, put=set_ctime)) mscorlib::System::Runtime::InteropServices::FILETIME  ctime;
					__declspec(property(get=get_atime, put=set_atime)) mscorlib::System::Runtime::InteropServices::FILETIME  atime;
					__declspec(property(get=get_grfMode, put=set_grfMode)) mscorlib::System::Int32  grfMode;
					__declspec(property(get=get_grfLocksSupported, put=set_grfLocksSupported)) mscorlib::System::Int32  grfLocksSupported;
					__declspec(property(get=get_clsid, put=set_clsid)) mscorlib::System::Guid  clsid;
					__declspec(property(get=get_grfStateBits, put=set_grfStateBits)) mscorlib::System::Int32  grfStateBits;
					__declspec(property(get=get_reserved, put=set_reserved)) mscorlib::System::Int32  reserved;

					//	Get/Set:pwcsName
					mscorlib::System::String  get_pwcsName() const;
					void set_pwcsName(mscorlib::System::String  value);

					//	Get/Set:type
					mscorlib::System::Int32  get_type() const;
					void set_type(mscorlib::System::Int32  value);

					//	Get/Set:cbSize
					mscorlib::System::Int64  get_cbSize() const;
					void set_cbSize(mscorlib::System::Int64  value);

					//	Get/Set:mtime
					mscorlib::System::Runtime::InteropServices::FILETIME  get_mtime() const;
					void set_mtime(mscorlib::System::Runtime::InteropServices::FILETIME  value);

					//	Get/Set:ctime
					mscorlib::System::Runtime::InteropServices::FILETIME  get_ctime() const;
					void set_ctime(mscorlib::System::Runtime::InteropServices::FILETIME  value);

					//	Get/Set:atime
					mscorlib::System::Runtime::InteropServices::FILETIME  get_atime() const;
					void set_atime(mscorlib::System::Runtime::InteropServices::FILETIME  value);

					//	Get/Set:grfMode
					mscorlib::System::Int32  get_grfMode() const;
					void set_grfMode(mscorlib::System::Int32  value);

					//	Get/Set:grfLocksSupported
					mscorlib::System::Int32  get_grfLocksSupported() const;
					void set_grfLocksSupported(mscorlib::System::Int32  value);

					//	Get/Set:clsid
					mscorlib::System::Guid  get_clsid() const;
					void set_clsid(mscorlib::System::Guid  value);

					//	Get/Set:grfStateBits
					mscorlib::System::Int32  get_grfStateBits() const;
					void set_grfStateBits(mscorlib::System::Int32  value);

					//	Get/Set:reserved
					mscorlib::System::Int32  get_reserved() const;
					void set_reserved(mscorlib::System::Int32  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
