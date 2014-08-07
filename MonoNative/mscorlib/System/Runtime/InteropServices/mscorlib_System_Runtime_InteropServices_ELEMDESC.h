#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_ELEMDESC_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_ELEMDESC_H

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

				class IDLDESC;
				class PARAMDESC;
				class TYPEDESC;
				

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

				class ELEMDESC
					: public mscorlib::System::ValueType
				{
				public:
					class DESCUNION
						: public mscorlib::System::ValueType
					{
					public:
						DESCUNION(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::ValueType(nativeTypeInfo)
						{
						};
					
						DESCUNION(MonoObject *nativeObject)
						: mscorlib::System::ValueType(nativeObject)
						{
						};
					
						~DESCUNION()
						{
						};
					

						DESCUNION & operator=(DESCUNION &value) { __native_object__ = value.GetNativeObject(); return value; };
						bool operator==(DESCUNION &value) { return mscorlib::System::Object::Equals(value); };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Fields
						__declspec(property(get=get_idldesc, put=set_idldesc)) mscorlib::System::Runtime::InteropServices::IDLDESC  idldesc;
						__declspec(property(get=get_paramdesc, put=set_paramdesc)) mscorlib::System::Runtime::InteropServices::PARAMDESC  paramdesc;

						//	Get/Set:idldesc
						mscorlib::System::Runtime::InteropServices::IDLDESC  get_idldesc() const;
						void set_idldesc(mscorlib::System::Runtime::InteropServices::IDLDESC  value);

						//	Get/Set:paramdesc
						mscorlib::System::Runtime::InteropServices::PARAMDESC  get_paramdesc() const;
						void set_paramdesc(mscorlib::System::Runtime::InteropServices::PARAMDESC  value);

					
					protected:
					
					private:
					
					};
					
					ELEMDESC(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::ValueType(nativeTypeInfo)
					{
					};
				
					ELEMDESC(MonoObject *nativeObject)
					: mscorlib::System::ValueType(nativeObject)
					{
					};
				
					~ELEMDESC()
					{
					};
				

					ELEMDESC & operator=(ELEMDESC &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(ELEMDESC &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Fields
					__declspec(property(get=get_tdesc, put=set_tdesc)) mscorlib::System::Runtime::InteropServices::TYPEDESC  tdesc;
					__declspec(property(get=get_desc, put=set_desc)) mscorlib::System::Runtime::InteropServices::ELEMDESC::DESCUNION  desc;

					//	Get/Set:tdesc
					mscorlib::System::Runtime::InteropServices::TYPEDESC  get_tdesc() const;
					void set_tdesc(mscorlib::System::Runtime::InteropServices::TYPEDESC  value);

					//	Get/Set:desc
					mscorlib::System::Runtime::InteropServices::ELEMDESC::DESCUNION  get_desc() const;
					void set_desc(mscorlib::System::Runtime::InteropServices::ELEMDESC::DESCUNION  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
