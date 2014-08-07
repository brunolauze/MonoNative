#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_UNMANAGEDFUNCTIONPOINTERATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_UNMANAGEDFUNCTIONPOINTERATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_CallingConvention.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_CharSet.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		

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

				class UnmanagedFunctionPointerAttribute
					: public mscorlib::System::Attribute
					, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
				{
				public:
					UnmanagedFunctionPointerAttribute(mscorlib::System::Runtime::InteropServices::CallingConvention::__ENUM__ callingConvention)
					: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Runtime.InteropServices", "CallingConvention");
						mscorlib::System::Int32 __param_callingConvention__ = callingConvention;
						__parameters__[0] = &__param_callingConvention__;
						__native_object__ = Global::New("mscorlib", "System.Runtime.InteropServices", "UnmanagedFunctionPointerAttribute", 1, __parameter_types__, __parameters__);
					};
				
					UnmanagedFunctionPointerAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Attribute(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
					};
				
					UnmanagedFunctionPointerAttribute(MonoObject *nativeObject)
					: mscorlib::System::Attribute(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
					{
					};
				
					~UnmanagedFunctionPointerAttribute()
					{
					};
				

					UnmanagedFunctionPointerAttribute & operator=(UnmanagedFunctionPointerAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(UnmanagedFunctionPointerAttribute &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_CallingConvention)) mscorlib::System::Runtime::InteropServices::CallingConvention::__ENUM__  CallingConvention;
					__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

					//Public Fields
					__declspec(property(get=get_CharSet, put=set_CharSet)) mscorlib::System::Runtime::InteropServices::CharSet::__ENUM__  CharSet;
					__declspec(property(get=get_SetLastError, put=set_SetLastError)) mscorlib::System::Boolean  SetLastError;
					__declspec(property(get=get_BestFitMapping, put=set_BestFitMapping)) mscorlib::System::Boolean  BestFitMapping;
					__declspec(property(get=get_ThrowOnUnmappableChar, put=set_ThrowOnUnmappableChar)) mscorlib::System::Boolean  ThrowOnUnmappableChar;

					//Get Set Properties Methods
					//	Get:CallingConvention
					mscorlib::System::Runtime::InteropServices::CallingConvention::__ENUM__  get_CallingConvention() const;

					//	Get:TypeId
					mscorlib::System::Object  get_TypeId() const;

					//	Get/Set:CharSet
					mscorlib::System::Runtime::InteropServices::CharSet::__ENUM__  get_CharSet() const;
					void set_CharSet(mscorlib::System::Runtime::InteropServices::CharSet::__ENUM__  value);

					//	Get/Set:SetLastError
					mscorlib::System::Boolean  get_SetLastError() const;
					void set_SetLastError(mscorlib::System::Boolean  value);

					//	Get/Set:BestFitMapping
					mscorlib::System::Boolean  get_BestFitMapping() const;
					void set_BestFitMapping(mscorlib::System::Boolean  value);

					//	Get/Set:ThrowOnUnmappableChar
					mscorlib::System::Boolean  get_ThrowOnUnmappableChar() const;
					void set_ThrowOnUnmappableChar(mscorlib::System::Boolean  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
