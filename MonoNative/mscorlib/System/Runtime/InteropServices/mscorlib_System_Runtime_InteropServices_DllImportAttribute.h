#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_DLLIMPORTATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_DLLIMPORTATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_CallingConvention.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_CharSet.h>

namespace mscorlib
{
	namespace System
	{

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

				class DllImportAttribute
					: public mscorlib::System::Attribute
					, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
				{
				public:
					DllImportAttribute(mscorlib::System::String dllName)
					: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.InteropServices.DllImportAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)dllName;
						__native_object__ = Global::New("mscorlib", "System.Runtime.InteropServices", "DllImportAttribute", 1, __parameter_types__, __parameters__);
					};
				
					DllImportAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Attribute(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
					};
				
					DllImportAttribute(MonoObject *nativeObject)
					: mscorlib::System::Attribute(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
					{
					};
				
					~DllImportAttribute()
					{
					};
				

					DllImportAttribute & operator=(DllImportAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Value)) mscorlib::System::String  Value;
					__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

					//Public Fields
					__declspec(property(get=get_CallingConvention, put=set_CallingConvention)) mscorlib::System::Runtime::InteropServices::CallingConvention::__ENUM__  CallingConvention;
					__declspec(property(get=get_CharSet, put=set_CharSet)) mscorlib::System::Runtime::InteropServices::CharSet::__ENUM__  CharSet;
					__declspec(property(get=get_EntryPoint, put=set_EntryPoint)) mscorlib::System::String  EntryPoint;
					__declspec(property(get=get_ExactSpelling, put=set_ExactSpelling)) mscorlib::System::Boolean  ExactSpelling;
					__declspec(property(get=get_PreserveSig, put=set_PreserveSig)) mscorlib::System::Boolean  PreserveSig;
					__declspec(property(get=get_SetLastError, put=set_SetLastError)) mscorlib::System::Boolean  SetLastError;
					__declspec(property(get=get_BestFitMapping, put=set_BestFitMapping)) mscorlib::System::Boolean  BestFitMapping;
					__declspec(property(get=get_ThrowOnUnmappableChar, put=set_ThrowOnUnmappableChar)) mscorlib::System::Boolean  ThrowOnUnmappableChar;

					//Get Set Properties Methods
					//	Get:Value
					mscorlib::System::String  get_Value();

					//	Get:TypeId
					mscorlib::System::Object  get_TypeId();

					//	Get/Set:CallingConvention
					mscorlib::System::Runtime::InteropServices::CallingConvention::__ENUM__  get_CallingConvention();
					void set_CallingConvention(mscorlib::System::Runtime::InteropServices::CallingConvention::__ENUM__  value);

					//	Get/Set:CharSet
					mscorlib::System::Runtime::InteropServices::CharSet::__ENUM__  get_CharSet();
					void set_CharSet(mscorlib::System::Runtime::InteropServices::CharSet::__ENUM__  value);

					//	Get/Set:EntryPoint
					mscorlib::System::String  get_EntryPoint();
					void set_EntryPoint(mscorlib::System::String  value);

					//	Get/Set:ExactSpelling
					mscorlib::System::Boolean  get_ExactSpelling();
					void set_ExactSpelling(mscorlib::System::Boolean  value);

					//	Get/Set:PreserveSig
					mscorlib::System::Boolean  get_PreserveSig();
					void set_PreserveSig(mscorlib::System::Boolean  value);

					//	Get/Set:SetLastError
					mscorlib::System::Boolean  get_SetLastError();
					void set_SetLastError(mscorlib::System::Boolean  value);

					//	Get/Set:BestFitMapping
					mscorlib::System::Boolean  get_BestFitMapping();
					void set_BestFitMapping(mscorlib::System::Boolean  value);

					//	Get/Set:ThrowOnUnmappableChar
					mscorlib::System::Boolean  get_ThrowOnUnmappableChar();
					void set_ThrowOnUnmappableChar(mscorlib::System::Boolean  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
