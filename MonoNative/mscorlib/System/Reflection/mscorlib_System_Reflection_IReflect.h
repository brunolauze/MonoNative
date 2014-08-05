#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_IREFLECT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_IREFLECT_H

#include <mscorlib/System/Reflection/mscorlib_System_Reflection_BindingFlags.h>
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
		namespace Reflection
		{

			class FieldInfo;
			class MemberInfo;
			class MethodInfo;
			class Binder;
			class ParameterModifier;
			class PropertyInfo;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			class CultureInfo;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class IReflect
			{
			public:
				IReflect(MonoObject *nativeObject)
				{
					__mscorlib_System_Reflection_IReflect = nativeObject;
				};
			
				~IReflect()
				{
				};
			

				IReflect & operator=(IReflect &value) { __mscorlib_System_Reflection_IReflect = value.__mscorlib_System_Reflection_IReflect; return value; };
				operator MonoObject*() { return __mscorlib_System_Reflection_IReflect; };
				MonoObject* operator=(MonoObject* value) { __mscorlib_System_Reflection_IReflect = value; return value; };


				virtual mscorlib::System::Reflection::FieldInfo  GetField(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr);
				virtual mscorlib::System::Reflection::FieldInfo  GetField(const char *name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr);
				virtual std::vector<mscorlib::System::Reflection::FieldInfo*>  GetFields(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr);
				virtual std::vector<mscorlib::System::Reflection::MemberInfo*>  GetMember(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr);
				virtual std::vector<mscorlib::System::Reflection::MemberInfo*>  GetMember(const char *name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr);
				virtual std::vector<mscorlib::System::Reflection::MemberInfo*>  GetMembers(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr);
				virtual mscorlib::System::Reflection::MethodInfo  GetMethod(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr);
				virtual mscorlib::System::Reflection::MethodInfo  GetMethod(const char *name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr);
				virtual mscorlib::System::Reflection::MethodInfo  GetMethod(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Type*> types, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers);
				virtual mscorlib::System::Reflection::MethodInfo  GetMethod(const char *name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Type*> types, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers);
				virtual std::vector<mscorlib::System::Reflection::MethodInfo*>  GetMethods(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr);
				virtual std::vector<mscorlib::System::Reflection::PropertyInfo*>  GetProperties(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr);
				virtual mscorlib::System::Reflection::PropertyInfo  GetProperty(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr);
				virtual mscorlib::System::Reflection::PropertyInfo  GetProperty(const char *name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr);
				virtual mscorlib::System::Reflection::PropertyInfo  GetProperty(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> types, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers);
				virtual mscorlib::System::Reflection::PropertyInfo  GetProperty(const char *name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> types, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers);
				virtual mscorlib::System::Object  InvokeMember(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Object target, std::vector<mscorlib::System::Object*> args, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::String*> namedParameters);
				virtual mscorlib::System::Object  InvokeMember(const char *name, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Object target, std::vector<mscorlib::System::Object*> args, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::String*> namedParameters);


				//Public Properties
				__declspec(property(get=get_UnderlyingSystemType)) mscorlib::System::Type  UnderlyingSystemType;

				//Get Set Properties Methods
				//	Get:UnderlyingSystemType
				mscorlib::System::Type  get_UnderlyingSystemType() const;

			
			protected:
				MonoObject *__mscorlib_System_Reflection_IReflect;
			
			private:
			
			};

		}
	}
}
#endif
