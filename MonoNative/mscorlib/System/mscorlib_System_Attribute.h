#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_ATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_ATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>

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

			class ParameterInfo;
			class MemberInfo;
			class Assembly;
			class Module;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class Attribute
			: public mscorlib::System::Object
			, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
		{
		public:
			Attribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::Object(nativeTypeInfo)
			, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
			{
			};
		
			Attribute(MonoObject *nativeObject)
			: mscorlib::System::Object(nativeObject)
			, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
			{
			};
		
			~Attribute()
			{
			};
		

			Attribute & operator=(Attribute &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			static mscorlib::System::Attribute  GetCustomAttribute(mscorlib::System::Reflection::ParameterInfo element, mscorlib::System::Type attributeType);
			static mscorlib::System::Attribute  GetCustomAttribute(mscorlib::System::Reflection::MemberInfo element, mscorlib::System::Type attributeType);
			static mscorlib::System::Attribute  GetCustomAttribute(mscorlib::System::Reflection::Assembly element, mscorlib::System::Type attributeType);
			static mscorlib::System::Attribute  GetCustomAttribute(mscorlib::System::Reflection::Module element, mscorlib::System::Type attributeType);
			static mscorlib::System::Attribute  GetCustomAttribute(mscorlib::System::Reflection::Module element, mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);
			static mscorlib::System::Attribute  GetCustomAttribute(mscorlib::System::Reflection::Assembly element, mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);
			static mscorlib::System::Attribute  GetCustomAttribute(mscorlib::System::Reflection::ParameterInfo element, mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);
			static mscorlib::System::Attribute  GetCustomAttribute(mscorlib::System::Reflection::MemberInfo element, mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);
			static std::vector<mscorlib::System::Attribute*>  GetCustomAttributes(mscorlib::System::Reflection::Assembly element);
			static std::vector<mscorlib::System::Attribute*>  GetCustomAttributes(mscorlib::System::Reflection::ParameterInfo element);
			static std::vector<mscorlib::System::Attribute*>  GetCustomAttributes(mscorlib::System::Reflection::MemberInfo element);
			static std::vector<mscorlib::System::Attribute*>  GetCustomAttributes(mscorlib::System::Reflection::Module element);
			static std::vector<mscorlib::System::Attribute*>  GetCustomAttributes(mscorlib::System::Reflection::Assembly element, mscorlib::System::Type attributeType);
			static std::vector<mscorlib::System::Attribute*>  GetCustomAttributes(mscorlib::System::Reflection::Module element, mscorlib::System::Type attributeType);
			static std::vector<mscorlib::System::Attribute*>  GetCustomAttributes(mscorlib::System::Reflection::ParameterInfo element, mscorlib::System::Type attributeType);
			static std::vector<mscorlib::System::Attribute*>  GetCustomAttributes(mscorlib::System::Reflection::MemberInfo element, mscorlib::System::Type type);
			static std::vector<mscorlib::System::Attribute*>  GetCustomAttributes(mscorlib::System::Reflection::Assembly element, mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);
			static std::vector<mscorlib::System::Attribute*>  GetCustomAttributes(mscorlib::System::Reflection::ParameterInfo element, mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);
			static std::vector<mscorlib::System::Attribute*>  GetCustomAttributes(mscorlib::System::Reflection::Module element, mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);
			static std::vector<mscorlib::System::Attribute*>  GetCustomAttributes(mscorlib::System::Reflection::MemberInfo element, mscorlib::System::Type type, mscorlib::System::Boolean inherit);
			static std::vector<mscorlib::System::Attribute*>  GetCustomAttributes(mscorlib::System::Reflection::Module element, mscorlib::System::Boolean inherit);
			static std::vector<mscorlib::System::Attribute*>  GetCustomAttributes(mscorlib::System::Reflection::Assembly element, mscorlib::System::Boolean inherit);
			static std::vector<mscorlib::System::Attribute*>  GetCustomAttributes(mscorlib::System::Reflection::MemberInfo element, mscorlib::System::Boolean inherit);
			static std::vector<mscorlib::System::Attribute*>  GetCustomAttributes(mscorlib::System::Reflection::ParameterInfo element, mscorlib::System::Boolean inherit);
			virtual mscorlib::System::Int32  GetHashCode() override;
			virtual mscorlib::System::Boolean  IsDefaultAttribute();
			static mscorlib::System::Boolean  IsDefined(mscorlib::System::Reflection::Module element, mscorlib::System::Type attributeType);
			static mscorlib::System::Boolean  IsDefined(mscorlib::System::Reflection::ParameterInfo element, mscorlib::System::Type attributeType);
			static mscorlib::System::Boolean  IsDefined(mscorlib::System::Reflection::MemberInfo element, mscorlib::System::Type attributeType);
			static mscorlib::System::Boolean  IsDefined(mscorlib::System::Reflection::Assembly element, mscorlib::System::Type attributeType);
			static mscorlib::System::Boolean  IsDefined(mscorlib::System::Reflection::MemberInfo element, mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);
			static mscorlib::System::Boolean  IsDefined(mscorlib::System::Reflection::Assembly element, mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);
			static mscorlib::System::Boolean  IsDefined(mscorlib::System::Reflection::Module element, mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);
			static mscorlib::System::Boolean  IsDefined(mscorlib::System::Reflection::ParameterInfo element, mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);
			virtual mscorlib::System::Boolean  Match(mscorlib::System::Object obj);
			virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Properties
			__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

			//Get Set Properties Methods
			//	Get:TypeId
			mscorlib::System::Object  get_TypeId();

		
		protected:
		
		private:
		
		};

	}
}
#endif
