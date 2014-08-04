#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_VARDESC_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_VARDESC_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_VarEnum.h>

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

				class ELEMDESC;
				

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

				class VARDESC
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
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Fields
						__declspec(property(get=get_lpvarValue, put=set_lpvarValue)) mscorlib::System::IntPtr  lpvarValue;
						__declspec(property(get=get_oInst, put=set_oInst)) mscorlib::System::Int32  oInst;

						//	Get/Set:lpvarValue
						mscorlib::System::IntPtr  get_lpvarValue();
						void set_lpvarValue(mscorlib::System::IntPtr  value);

						//	Get/Set:oInst
						mscorlib::System::Int32  get_oInst();
						void set_oInst(mscorlib::System::Int32  value);

					
					protected:
					
					private:
					
					};
					
					VARDESC(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::ValueType(nativeTypeInfo)
					{
					};
				
					VARDESC(MonoObject *nativeObject)
					: mscorlib::System::ValueType(nativeObject)
					{
					};
				
					~VARDESC()
					{
					};
				

					VARDESC & operator=(VARDESC &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Fields
					__declspec(property(get=get_memid, put=set_memid)) mscorlib::System::Int32  memid;
					__declspec(property(get=get_lpstrSchema, put=set_lpstrSchema)) mscorlib::System::String  lpstrSchema;
					__declspec(property(get=get_elemdescVar, put=set_elemdescVar)) mscorlib::System::Runtime::InteropServices::ELEMDESC  elemdescVar;
					__declspec(property(get=get_wVarFlags, put=set_wVarFlags)) mscorlib::System::Int16  wVarFlags;
					__declspec(property(get=get_varkind, put=set_varkind)) mscorlib::System::Runtime::InteropServices::VarEnum::__ENUM__  varkind;

					//	Get/Set:memid
					mscorlib::System::Int32  get_memid();
					void set_memid(mscorlib::System::Int32  value);

					//	Get/Set:lpstrSchema
					mscorlib::System::String  get_lpstrSchema();
					void set_lpstrSchema(mscorlib::System::String  value);

					//	Get/Set:elemdescVar
					mscorlib::System::Runtime::InteropServices::ELEMDESC  get_elemdescVar();
					void set_elemdescVar(mscorlib::System::Runtime::InteropServices::ELEMDESC  value);

					//	Get/Set:wVarFlags
					mscorlib::System::Int16  get_wVarFlags();
					void set_wVarFlags(mscorlib::System::Int16  value);

					//	Get/Set:varkind
					mscorlib::System::Runtime::InteropServices::VarEnum::__ENUM__  get_varkind();
					void set_varkind(mscorlib::System::Runtime::InteropServices::VarEnum::__ENUM__  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
