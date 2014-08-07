#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_EXCEPINFO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_EXCEPINFO_H

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

					class EXCEPINFO
						: public mscorlib::System::ValueType
					{
					public:
						EXCEPINFO(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::ValueType(nativeTypeInfo)
						{
						};
					
						EXCEPINFO(MonoObject *nativeObject)
						: mscorlib::System::ValueType(nativeObject)
						{
						};
					
						~EXCEPINFO()
						{
						};
					

						EXCEPINFO & operator=(EXCEPINFO &value) { __native_object__ = value.GetNativeObject(); return value; };
						bool operator==(EXCEPINFO &value) { return mscorlib::System::Object::Equals(value); };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Fields
						__declspec(property(get=get_wCode, put=set_wCode)) mscorlib::System::Int16  wCode;
						__declspec(property(get=get_wReserved, put=set_wReserved)) mscorlib::System::Int16  wReserved;
						__declspec(property(get=get_bstrSource, put=set_bstrSource)) mscorlib::System::String  bstrSource;
						__declspec(property(get=get_bstrDescription, put=set_bstrDescription)) mscorlib::System::String  bstrDescription;
						__declspec(property(get=get_bstrHelpFile, put=set_bstrHelpFile)) mscorlib::System::String  bstrHelpFile;
						__declspec(property(get=get_dwHelpContext, put=set_dwHelpContext)) mscorlib::System::Int32  dwHelpContext;
						__declspec(property(get=get_pvReserved, put=set_pvReserved)) mscorlib::System::IntPtr  pvReserved;
						__declspec(property(get=get_pfnDeferredFillIn, put=set_pfnDeferredFillIn)) mscorlib::System::IntPtr  pfnDeferredFillIn;
						__declspec(property(get=get_scode, put=set_scode)) mscorlib::System::Int32  scode;

						//	Get/Set:wCode
						mscorlib::System::Int16  get_wCode() const;
						void set_wCode(mscorlib::System::Int16  value);

						//	Get/Set:wReserved
						mscorlib::System::Int16  get_wReserved() const;
						void set_wReserved(mscorlib::System::Int16  value);

						//	Get/Set:bstrSource
						mscorlib::System::String  get_bstrSource() const;
						void set_bstrSource(mscorlib::System::String  value);

						//	Get/Set:bstrDescription
						mscorlib::System::String  get_bstrDescription() const;
						void set_bstrDescription(mscorlib::System::String  value);

						//	Get/Set:bstrHelpFile
						mscorlib::System::String  get_bstrHelpFile() const;
						void set_bstrHelpFile(mscorlib::System::String  value);

						//	Get/Set:dwHelpContext
						mscorlib::System::Int32  get_dwHelpContext() const;
						void set_dwHelpContext(mscorlib::System::Int32  value);

						//	Get/Set:pvReserved
						mscorlib::System::IntPtr  get_pvReserved() const;
						void set_pvReserved(mscorlib::System::IntPtr  value);

						//	Get/Set:pfnDeferredFillIn
						mscorlib::System::IntPtr  get_pfnDeferredFillIn() const;
						void set_pfnDeferredFillIn(mscorlib::System::IntPtr  value);

						//	Get/Set:scode
						mscorlib::System::Int32  get_scode() const;
						void set_scode(mscorlib::System::Int32  value);

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
