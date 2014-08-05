#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_TYPEIDENTIFIERATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_TYPEIDENTIFIERATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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

				class TypeIdentifierAttribute
					: public mscorlib::System::Attribute
					, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
				{
				public:
					TypeIdentifierAttribute()
					: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.InteropServices.TypeIdentifierAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						__native_object__ = Global::New("mscorlib", "System.Runtime.InteropServices", "TypeIdentifierAttribute");
					};
				
					TypeIdentifierAttribute(mscorlib::System::String scope, mscorlib::System::String identifier)
					: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.InteropServices.TypeIdentifierAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)scope;
						__parameters__[1] = (MonoObject*)identifier;
						__native_object__ = Global::New("mscorlib", "System.Runtime.InteropServices", "TypeIdentifierAttribute", 2, __parameter_types__, __parameters__);
					};
				
					TypeIdentifierAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Attribute(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
					};
				
					TypeIdentifierAttribute(MonoObject *nativeObject)
					: mscorlib::System::Attribute(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
					{
					};
				
					~TypeIdentifierAttribute()
					{
					};
				

					TypeIdentifierAttribute & operator=(TypeIdentifierAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Scope)) mscorlib::System::String  Scope;
					__declspec(property(get=get_Identifier)) mscorlib::System::String  Identifier;
					__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

					//Get Set Properties Methods
					//	Get:Scope
					mscorlib::System::String  get_Scope() const;

					//	Get:Identifier
					mscorlib::System::String  get_Identifier() const;

					//	Get:TypeId
					mscorlib::System::Object  get_TypeId() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
