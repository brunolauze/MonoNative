#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_CODEANALYSIS_SUPPRESSMESSAGEATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_CODEANALYSIS_SUPPRESSMESSAGEATTRIBUTE_H

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
		namespace Diagnostics
		{
			namespace CodeAnalysis
			{

				class SuppressMessageAttribute
					: public mscorlib::System::Attribute
					, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
				{
				public:
					SuppressMessageAttribute(mscorlib::System::String category, mscorlib::System::String checkId)
					: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Diagnostics.CodeAnalysis.SuppressMessageAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)category;
						__parameters__[1] = (MonoObject*)checkId;
						__native_object__ = Global::New("mscorlib", "System.Diagnostics.CodeAnalysis", "SuppressMessageAttribute", 2, __parameter_types__, __parameters__);
					};
				
					SuppressMessageAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Attribute(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
					};
				
					SuppressMessageAttribute(MonoObject *nativeObject)
					: mscorlib::System::Attribute(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
					{
					};
				
					~SuppressMessageAttribute()
					{
					};
				

					SuppressMessageAttribute & operator=(SuppressMessageAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(SuppressMessageAttribute &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Category)) mscorlib::System::String  Category;
					__declspec(property(get=get_CheckId)) mscorlib::System::String  CheckId;
					__declspec(property(get=get_Justification, put=set_Justification)) mscorlib::System::String  Justification;
					__declspec(property(get=get_MessageId, put=set_MessageId)) mscorlib::System::String  MessageId;
					__declspec(property(get=get_Scope, put=set_Scope)) mscorlib::System::String  Scope;
					__declspec(property(get=get_Target, put=set_Target)) mscorlib::System::String  Target;
					__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

					//Get Set Properties Methods
					//	Get:Category
					mscorlib::System::String  get_Category() const;

					//	Get:CheckId
					mscorlib::System::String  get_CheckId() const;

					//	Get/Set:Justification
					mscorlib::System::String  get_Justification() const;
					void set_Justification(mscorlib::System::String  value);

					//	Get/Set:MessageId
					mscorlib::System::String  get_MessageId() const;
					void set_MessageId(mscorlib::System::String  value);

					//	Get/Set:Scope
					mscorlib::System::String  get_Scope() const;
					void set_Scope(mscorlib::System::String  value);

					//	Get/Set:Target
					mscorlib::System::String  get_Target() const;
					void set_Target(mscorlib::System::String  value);

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
