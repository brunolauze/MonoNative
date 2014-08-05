#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES__PROPERTYINFO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES__PROPERTYINFO_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_BindingFlags.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_PropertyAttributes.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MemberTypes.h>

namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class MethodInfo;
			class ParameterInfo;
			class Binder;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class Type;
		class Guid;
		class IntPtr;
		class String;
		

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
		namespace Runtime
		{
			namespace InteropServices
			{

				class _PropertyInfo
				{
				public:
					_PropertyInfo(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_InteropServices__PropertyInfo = nativeObject;
					};
				
					~_PropertyInfo()
					{
					};
				

					_PropertyInfo & operator=(_PropertyInfo &value) { __mscorlib_System_Runtime_InteropServices__PropertyInfo = value.__mscorlib_System_Runtime_InteropServices__PropertyInfo; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices__PropertyInfo; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices__PropertyInfo = value; return value; };


					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object other);
					virtual std::vector<mscorlib::System::Reflection::MethodInfo*>  GetAccessors();
					virtual std::vector<mscorlib::System::Reflection::MethodInfo*>  GetAccessors(mscorlib::System::Boolean nonPublic);
					virtual std::vector<mscorlib::System::Object*>  GetCustomAttributes(mscorlib::System::Boolean inherit);
					virtual std::vector<mscorlib::System::Object*>  GetCustomAttributes(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);
					virtual mscorlib::System::Reflection::MethodInfo  GetGetMethod();
					virtual mscorlib::System::Reflection::MethodInfo  GetGetMethod(mscorlib::System::Boolean nonPublic);
					virtual mscorlib::System::Int32  GetHashCode();
					virtual std::vector<mscorlib::System::Reflection::ParameterInfo*>  GetIndexParameters();
					virtual mscorlib::System::Reflection::MethodInfo  GetSetMethod();
					virtual mscorlib::System::Reflection::MethodInfo  GetSetMethod(mscorlib::System::Boolean nonPublic);
					virtual void  GetIDsOfNames(mscorlib::System::Guid riid, mscorlib::System::IntPtr rgszNames, mscorlib::System::UInt32 cNames, mscorlib::System::UInt32 lcid, mscorlib::System::IntPtr rgDispId);
					virtual void  GetTypeInfo(mscorlib::System::UInt32 iTInfo, mscorlib::System::UInt32 lcid, mscorlib::System::IntPtr ppTInfo);
					virtual void  GetTypeInfoCount(mscorlib::System::UInt32 pcTInfo);
					virtual void  Invoke(mscorlib::System::UInt32 dispIdMember, mscorlib::System::Guid riid, mscorlib::System::UInt32 lcid, mscorlib::System::Int16 wFlags, mscorlib::System::IntPtr pDispParams, mscorlib::System::IntPtr pVarResult, mscorlib::System::IntPtr pExcepInfo, mscorlib::System::IntPtr puArgErr);
					virtual mscorlib::System::Type  GetType();
					virtual mscorlib::System::Object  GetValue(mscorlib::System::Object obj, std::vector<mscorlib::System::Object*> index);
					virtual mscorlib::System::Object  GetValue(mscorlib::System::Object obj, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> index, mscorlib::System::Globalization::CultureInfo culture);
					virtual mscorlib::System::Boolean  IsDefined(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);
					virtual void  SetValue(mscorlib::System::Object obj, mscorlib::System::Object value, std::vector<mscorlib::System::Object*> index);
					virtual void  SetValue(mscorlib::System::Object obj, mscorlib::System::Object value, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> index, mscorlib::System::Globalization::CultureInfo culture);
					virtual mscorlib::System::String  ToString();


					//Public Properties
					__declspec(property(get=get_Attributes)) mscorlib::System::Reflection::PropertyAttributes::__ENUM__  Attributes;
					__declspec(property(get=get_CanRead)) mscorlib::System::Boolean  CanRead;
					__declspec(property(get=get_CanWrite)) mscorlib::System::Boolean  CanWrite;
					__declspec(property(get=get_DeclaringType)) mscorlib::System::Type  DeclaringType;
					__declspec(property(get=get_IsSpecialName)) mscorlib::System::Boolean  IsSpecialName;
					__declspec(property(get=get_MemberType)) mscorlib::System::Reflection::MemberTypes::__ENUM__  MemberType;
					__declspec(property(get=get_Name)) mscorlib::System::String  Name;
					__declspec(property(get=get_PropertyType)) mscorlib::System::Type  PropertyType;
					__declspec(property(get=get_ReflectedType)) mscorlib::System::Type  ReflectedType;

					//Get Set Properties Methods
					//	Get:Attributes
					mscorlib::System::Reflection::PropertyAttributes::__ENUM__  get_Attributes() const;

					//	Get:CanRead
					mscorlib::System::Boolean  get_CanRead() const;

					//	Get:CanWrite
					mscorlib::System::Boolean  get_CanWrite() const;

					//	Get:DeclaringType
					mscorlib::System::Type  get_DeclaringType() const;

					//	Get:IsSpecialName
					mscorlib::System::Boolean  get_IsSpecialName() const;

					//	Get:MemberType
					mscorlib::System::Reflection::MemberTypes::__ENUM__  get_MemberType() const;

					//	Get:Name
					mscorlib::System::String  get_Name() const;

					//	Get:PropertyType
					mscorlib::System::Type  get_PropertyType() const;

					//	Get:ReflectedType
					mscorlib::System::Type  get_ReflectedType() const;

				
				protected:
					MonoObject *__mscorlib_System_Runtime_InteropServices__PropertyInfo;
				
				private:
				
				};

			}
		}
	}
}
#endif
