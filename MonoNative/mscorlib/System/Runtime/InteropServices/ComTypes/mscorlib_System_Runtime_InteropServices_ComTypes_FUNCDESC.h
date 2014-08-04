#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_FUNCDESC_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_FUNCDESC_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_FUNCKIND.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_INVOKEKIND.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_CALLCONV.h>

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

					class ELEMDESC;
					

				}
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
				namespace ComTypes
				{

					class FUNCDESC
						: public mscorlib::System::ValueType
					{
					public:
						FUNCDESC(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::ValueType(nativeTypeInfo)
						{
						};
					
						FUNCDESC(MonoObject *nativeObject)
						: mscorlib::System::ValueType(nativeObject)
						{
						};
					
						~FUNCDESC()
						{
						};
					

						FUNCDESC & operator=(FUNCDESC &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Fields
						__declspec(property(get=get_memid, put=set_memid)) mscorlib::System::Int32  memid;
						__declspec(property(get=get_lprgscode, put=set_lprgscode)) mscorlib::System::IntPtr  lprgscode;
						__declspec(property(get=get_lprgelemdescParam, put=set_lprgelemdescParam)) mscorlib::System::IntPtr  lprgelemdescParam;
						__declspec(property(get=get_funckind, put=set_funckind)) mscorlib::System::Runtime::InteropServices::ComTypes::FUNCKIND::__ENUM__  funckind;
						__declspec(property(get=get_invkind, put=set_invkind)) mscorlib::System::Runtime::InteropServices::ComTypes::INVOKEKIND::__ENUM__  invkind;
						__declspec(property(get=get_callconv, put=set_callconv)) mscorlib::System::Runtime::InteropServices::ComTypes::CALLCONV::__ENUM__  callconv;
						__declspec(property(get=get_cParams, put=set_cParams)) mscorlib::System::Int16  cParams;
						__declspec(property(get=get_cParamsOpt, put=set_cParamsOpt)) mscorlib::System::Int16  cParamsOpt;
						__declspec(property(get=get_oVft, put=set_oVft)) mscorlib::System::Int16  oVft;
						__declspec(property(get=get_cScodes, put=set_cScodes)) mscorlib::System::Int16  cScodes;
						__declspec(property(get=get_elemdescFunc, put=set_elemdescFunc)) mscorlib::System::Runtime::InteropServices::ComTypes::ELEMDESC  elemdescFunc;
						__declspec(property(get=get_wFuncFlags, put=set_wFuncFlags)) mscorlib::System::Int16  wFuncFlags;

						//	Get/Set:memid
						mscorlib::System::Int32  get_memid();
						void set_memid(mscorlib::System::Int32  value);

						//	Get/Set:lprgscode
						mscorlib::System::IntPtr  get_lprgscode();
						void set_lprgscode(mscorlib::System::IntPtr  value);

						//	Get/Set:lprgelemdescParam
						mscorlib::System::IntPtr  get_lprgelemdescParam();
						void set_lprgelemdescParam(mscorlib::System::IntPtr  value);

						//	Get/Set:funckind
						mscorlib::System::Runtime::InteropServices::ComTypes::FUNCKIND::__ENUM__  get_funckind();
						void set_funckind(mscorlib::System::Runtime::InteropServices::ComTypes::FUNCKIND::__ENUM__  value);

						//	Get/Set:invkind
						mscorlib::System::Runtime::InteropServices::ComTypes::INVOKEKIND::__ENUM__  get_invkind();
						void set_invkind(mscorlib::System::Runtime::InteropServices::ComTypes::INVOKEKIND::__ENUM__  value);

						//	Get/Set:callconv
						mscorlib::System::Runtime::InteropServices::ComTypes::CALLCONV::__ENUM__  get_callconv();
						void set_callconv(mscorlib::System::Runtime::InteropServices::ComTypes::CALLCONV::__ENUM__  value);

						//	Get/Set:cParams
						mscorlib::System::Int16  get_cParams();
						void set_cParams(mscorlib::System::Int16  value);

						//	Get/Set:cParamsOpt
						mscorlib::System::Int16  get_cParamsOpt();
						void set_cParamsOpt(mscorlib::System::Int16  value);

						//	Get/Set:oVft
						mscorlib::System::Int16  get_oVft();
						void set_oVft(mscorlib::System::Int16  value);

						//	Get/Set:cScodes
						mscorlib::System::Int16  get_cScodes();
						void set_cScodes(mscorlib::System::Int16  value);

						//	Get/Set:elemdescFunc
						mscorlib::System::Runtime::InteropServices::ComTypes::ELEMDESC  get_elemdescFunc();
						void set_elemdescFunc(mscorlib::System::Runtime::InteropServices::ComTypes::ELEMDESC  value);

						//	Get/Set:wFuncFlags
						mscorlib::System::Int16  get_wFuncFlags();
						void set_wFuncFlags(mscorlib::System::Int16  value);

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
