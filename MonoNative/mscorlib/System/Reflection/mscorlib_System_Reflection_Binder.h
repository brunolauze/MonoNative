#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_BINDER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_BINDER_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_BindingFlags.h>

namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class FieldInfo;
			class MethodBase;
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

		class String;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class Binder
				: public mscorlib::System::Object
			{
			public:
				Binder(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				Binder(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~Binder()
				{
				};
			

				Binder & operator=(Binder &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Reflection::FieldInfo  BindToField(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, std::vector<mscorlib::System::Reflection::FieldInfo*> match, mscorlib::System::Object value, mscorlib::System::Globalization::CultureInfo culture);
				virtual mscorlib::System::Reflection::MethodBase  BindToMethod(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, std::vector<mscorlib::System::Reflection::MethodBase*> match, mscorlib::System::Object* args, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::String*> names, mscorlib::System::Object state);
				virtual mscorlib::System::Object  ChangeType(mscorlib::System::Object value, mscorlib::System::Type type, mscorlib::System::Globalization::CultureInfo culture);
				virtual void  ReorderArgumentArray(mscorlib::System::Object* args, mscorlib::System::Object state);
				virtual mscorlib::System::Reflection::MethodBase  SelectMethod(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, std::vector<mscorlib::System::Reflection::MethodBase*> match, std::vector<mscorlib::System::Type*> types, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers);
				virtual mscorlib::System::Reflection::PropertyInfo  SelectProperty(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, std::vector<mscorlib::System::Reflection::PropertyInfo*> match, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> indexes, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
