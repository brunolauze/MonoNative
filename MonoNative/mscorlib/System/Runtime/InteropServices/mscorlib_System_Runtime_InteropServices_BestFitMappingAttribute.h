#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_BESTFITMAPPINGATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_BESTFITMAPPINGATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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

				class BestFitMappingAttribute
					: public mscorlib::System::Attribute
					, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
				{
				public:
					BestFitMappingAttribute(mscorlib::System::Boolean BestFitMapping)
					: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.InteropServices.BestFitMappingAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Boolean");
						__parameters__[0] = reinterpret_cast<void*>(BestFitMapping);
						__native_object__ = Global::New("mscorlib", "System.Runtime.InteropServices", "BestFitMappingAttribute", 1, __parameter_types__, __parameters__);
					};
				
					BestFitMappingAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Attribute(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
					};
				
					BestFitMappingAttribute(MonoObject *nativeObject)
					: mscorlib::System::Attribute(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
					{
					};
				
					~BestFitMappingAttribute()
					{
					};
				

					BestFitMappingAttribute & operator=(BestFitMappingAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(BestFitMappingAttribute &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_BestFitMapping)) mscorlib::System::Boolean  BestFitMapping;
					__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

					//Public Fields
					__declspec(property(get=get_ThrowOnUnmappableChar, put=set_ThrowOnUnmappableChar)) mscorlib::System::Boolean  ThrowOnUnmappableChar;

					//Get Set Properties Methods
					//	Get:BestFitMapping
					mscorlib::System::Boolean  get_BestFitMapping() const;

					//	Get:TypeId
					mscorlib::System::Object  get_TypeId() const;

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
