#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_MARSHALASATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_MARSHALASATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_UnmanagedType.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_VarEnum.h>

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

				class MarshalAsAttribute
					: public mscorlib::System::Attribute
					, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
				{
				public:
					MarshalAsAttribute(mscorlib::System::Int16 unmanagedType)
					: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.InteropServices.MarshalAsAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int16");
						__parameters__[0] = &unmanagedType;
						__native_object__ = Global::New("mscorlib", "System.Runtime.InteropServices", "MarshalAsAttribute", 1, __parameter_types__, __parameters__);
					};
				
					MarshalAsAttribute(mscorlib::System::Runtime::InteropServices::UnmanagedType::__ENUM__ unmanagedType)
					: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.InteropServices.MarshalAsAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Runtime.InteropServices", "UnmanagedType");
						mscorlib::System::Int32 __param_unmanagedType__ = unmanagedType;
						__parameters__[0] = &__param_unmanagedType__;
						__native_object__ = Global::New("mscorlib", "System.Runtime.InteropServices", "MarshalAsAttribute", 1, __parameter_types__, __parameters__);
					};
				
					MarshalAsAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Attribute(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
					};
				
					MarshalAsAttribute(MonoObject *nativeObject)
					: mscorlib::System::Attribute(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
					{
					};
				
					~MarshalAsAttribute()
					{
					};
				

					MarshalAsAttribute & operator=(MarshalAsAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(MarshalAsAttribute &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Value)) mscorlib::System::Runtime::InteropServices::UnmanagedType::__ENUM__  Value;
					__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

					//Public Fields
					__declspec(property(get=get_MarshalCookie, put=set_MarshalCookie)) mscorlib::System::String  MarshalCookie;
					__declspec(property(get=get_MarshalType, put=set_MarshalType)) mscorlib::System::String  MarshalType;
					__declspec(property(get=get_MarshalTypeRef, put=set_MarshalTypeRef)) mscorlib::System::Type  MarshalTypeRef;
					__declspec(property(get=get_SafeArrayUserDefinedSubType, put=set_SafeArrayUserDefinedSubType)) mscorlib::System::Type  SafeArrayUserDefinedSubType;
					__declspec(property(get=get_ArraySubType, put=set_ArraySubType)) mscorlib::System::Runtime::InteropServices::UnmanagedType::__ENUM__  ArraySubType;
					__declspec(property(get=get_SafeArraySubType, put=set_SafeArraySubType)) mscorlib::System::Runtime::InteropServices::VarEnum::__ENUM__  SafeArraySubType;
					__declspec(property(get=get_SizeConst, put=set_SizeConst)) mscorlib::System::Int32  SizeConst;
					__declspec(property(get=get_IidParameterIndex, put=set_IidParameterIndex)) mscorlib::System::Int32  IidParameterIndex;
					__declspec(property(get=get_SizeParamIndex, put=set_SizeParamIndex)) mscorlib::System::Int16  SizeParamIndex;

					//Get Set Properties Methods
					//	Get:Value
					mscorlib::System::Runtime::InteropServices::UnmanagedType::__ENUM__  get_Value() const;

					//	Get:TypeId
					mscorlib::System::Object  get_TypeId() const;

					//	Get/Set:MarshalCookie
					mscorlib::System::String  get_MarshalCookie() const;
					void set_MarshalCookie(mscorlib::System::String  value);

					//	Get/Set:MarshalType
					mscorlib::System::String  get_MarshalType() const;
					void set_MarshalType(mscorlib::System::String  value);

					//	Get/Set:MarshalTypeRef
					mscorlib::System::Type  get_MarshalTypeRef() const;
					void set_MarshalTypeRef(mscorlib::System::Type  value);

					//	Get/Set:SafeArrayUserDefinedSubType
					mscorlib::System::Type  get_SafeArrayUserDefinedSubType() const;
					void set_SafeArrayUserDefinedSubType(mscorlib::System::Type  value);

					//	Get/Set:ArraySubType
					mscorlib::System::Runtime::InteropServices::UnmanagedType::__ENUM__  get_ArraySubType() const;
					void set_ArraySubType(mscorlib::System::Runtime::InteropServices::UnmanagedType::__ENUM__  value);

					//	Get/Set:SafeArraySubType
					mscorlib::System::Runtime::InteropServices::VarEnum::__ENUM__  get_SafeArraySubType() const;
					void set_SafeArraySubType(mscorlib::System::Runtime::InteropServices::VarEnum::__ENUM__  value);

					//	Get/Set:SizeConst
					mscorlib::System::Int32  get_SizeConst() const;
					void set_SizeConst(mscorlib::System::Int32  value);

					//	Get/Set:IidParameterIndex
					mscorlib::System::Int32  get_IidParameterIndex() const;
					void set_IidParameterIndex(mscorlib::System::Int32  value);

					//	Get/Set:SizeParamIndex
					mscorlib::System::Int16  get_SizeParamIndex() const;
					void set_SizeParamIndex(mscorlib::System::Int16  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
