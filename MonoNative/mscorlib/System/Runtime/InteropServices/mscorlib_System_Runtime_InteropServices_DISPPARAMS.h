#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_DISPPARAMS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_DISPPARAMS_H

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

				class DISPPARAMS
					: public mscorlib::System::ValueType
				{
				public:
					DISPPARAMS(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::ValueType(nativeTypeInfo)
					{
					};
				
					DISPPARAMS(MonoObject *nativeObject)
					: mscorlib::System::ValueType(nativeObject)
					{
					};
				
					~DISPPARAMS()
					{
					};
				

					DISPPARAMS & operator=(DISPPARAMS &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(DISPPARAMS &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Fields
					__declspec(property(get=get_rgvarg, put=set_rgvarg)) mscorlib::System::IntPtr  rgvarg;
					__declspec(property(get=get_rgdispidNamedArgs, put=set_rgdispidNamedArgs)) mscorlib::System::IntPtr  rgdispidNamedArgs;
					__declspec(property(get=get_cArgs, put=set_cArgs)) mscorlib::System::Int32  cArgs;
					__declspec(property(get=get_cNamedArgs, put=set_cNamedArgs)) mscorlib::System::Int32  cNamedArgs;

					//	Get/Set:rgvarg
					mscorlib::System::IntPtr  get_rgvarg() const;
					void set_rgvarg(mscorlib::System::IntPtr  value);

					//	Get/Set:rgdispidNamedArgs
					mscorlib::System::IntPtr  get_rgdispidNamedArgs() const;
					void set_rgdispidNamedArgs(mscorlib::System::IntPtr  value);

					//	Get/Set:cArgs
					mscorlib::System::Int32  get_cArgs() const;
					void set_cArgs(mscorlib::System::Int32  value);

					//	Get/Set:cNamedArgs
					mscorlib::System::Int32  get_cNamedArgs() const;
					void set_cNamedArgs(mscorlib::System::Int32  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
