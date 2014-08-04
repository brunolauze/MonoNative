#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_ASSEMBLYDEFAULTALIASATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_ASSEMBLYDEFAULTALIASATTRIBUTE_H

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
		namespace Reflection
		{

			class AssemblyDefaultAliasAttribute
				: public mscorlib::System::Attribute
				, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
			{
			public:
				AssemblyDefaultAliasAttribute(mscorlib::System::String defaultAlias)
				: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Reflection.AssemblyDefaultAliasAttribute"))
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)defaultAlias;
					__native_object__ = Global::New("mscorlib", "System.Reflection", "AssemblyDefaultAliasAttribute", 1, __parameter_types__, __parameters__);
				};
			
				AssemblyDefaultAliasAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Attribute(nativeTypeInfo)
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
				};
			
				AssemblyDefaultAliasAttribute(MonoObject *nativeObject)
				: mscorlib::System::Attribute(nativeObject)
				, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
				{
				};
			
				~AssemblyDefaultAliasAttribute()
				{
				};
			

				AssemblyDefaultAliasAttribute & operator=(AssemblyDefaultAliasAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_DefaultAlias)) mscorlib::System::String  DefaultAlias;
				__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

				//Get Set Properties Methods
				//	Get:DefaultAlias
				mscorlib::System::String  get_DefaultAlias();

				//	Get:TypeId
				mscorlib::System::Object  get_TypeId();

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
