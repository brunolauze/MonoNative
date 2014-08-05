#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_STRUCTLAYOUTATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_STRUCTLAYOUTATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_LayoutKind.h>
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

				class StructLayoutAttribute
					: public mscorlib::System::Attribute
					, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
				{
				public:
					StructLayoutAttribute(mscorlib::System::Int16 layoutKind)
					: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.InteropServices.StructLayoutAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int16");
						__parameters__[0] = &layoutKind;
						__native_object__ = Global::New("mscorlib", "System.Runtime.InteropServices", "StructLayoutAttribute", 1, __parameter_types__, __parameters__);
					};
				
					StructLayoutAttribute(mscorlib::System::Runtime::InteropServices::LayoutKind::__ENUM__ layoutKind)
					: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.InteropServices.StructLayoutAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Runtime.InteropServices", "LayoutKind");
						__parameters__[0] = reinterpret_cast<void*>(layoutKind);
						__native_object__ = Global::New("mscorlib", "System.Runtime.InteropServices", "StructLayoutAttribute", 1, __parameter_types__, __parameters__);
					};
				
					StructLayoutAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Attribute(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
					};
				
					StructLayoutAttribute(MonoObject *nativeObject)
					: mscorlib::System::Attribute(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
					{
					};
				
					~StructLayoutAttribute()
					{
					};
				

					StructLayoutAttribute & operator=(StructLayoutAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Value)) mscorlib::System::Runtime::InteropServices::LayoutKind::__ENUM__  Value;
					__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

					//Public Fields
					__declspec(property(get=get_CharSet, put=set_CharSet)) mscorlib::System::Runtime::InteropServices::CharSet::__ENUM__  CharSet;
					__declspec(property(get=get_Pack, put=set_Pack)) mscorlib::System::Int32  Pack;
					__declspec(property(get=get_Size, put=set_Size)) mscorlib::System::Int32  Size;

					//Get Set Properties Methods
					//	Get:Value
					mscorlib::System::Runtime::InteropServices::LayoutKind::__ENUM__  get_Value() const;

					//	Get:TypeId
					mscorlib::System::Object  get_TypeId() const;

					//	Get/Set:CharSet
					mscorlib::System::Runtime::InteropServices::CharSet::__ENUM__  get_CharSet() const;
					void set_CharSet(mscorlib::System::Runtime::InteropServices::CharSet::__ENUM__  value);

					//	Get/Set:Pack
					mscorlib::System::Int32  get_Pack() const;
					void set_Pack(mscorlib::System::Int32  value);

					//	Get/Set:Size
					mscorlib::System::Int32  get_Size() const;
					void set_Size(mscorlib::System::Int32  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
