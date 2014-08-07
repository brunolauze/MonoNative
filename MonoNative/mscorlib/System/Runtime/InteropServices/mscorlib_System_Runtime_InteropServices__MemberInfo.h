#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES__MEMBERINFO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES__MEMBERINFO_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MemberTypes.h>
#include <mscorlib/System/mscorlib_System_Guid.h>

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

				class _MemberInfo
				{
				public:
					_MemberInfo(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_InteropServices__MemberInfo = nativeObject;
					};
				
					~_MemberInfo()
					{
					};
				

					_MemberInfo & operator=(_MemberInfo &value) { __mscorlib_System_Runtime_InteropServices__MemberInfo = value.__mscorlib_System_Runtime_InteropServices__MemberInfo; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices__MemberInfo; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices__MemberInfo = value; return value; };


					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object other);
					virtual std::vector<mscorlib::System::Object*>  GetCustomAttributes(mscorlib::System::Boolean inherit);
					virtual std::vector<mscorlib::System::Object*>  GetCustomAttributes(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);
					virtual mscorlib::System::Int32  GetHashCode();
					virtual mscorlib::System::Type  GetType();
					virtual mscorlib::System::Boolean  IsDefined(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);
					virtual mscorlib::System::String  ToString();
					virtual void  GetIDsOfNames(mscorlib::System::Guid riid, mscorlib::System::IntPtr rgszNames, mscorlib::System::UInt32 cNames, mscorlib::System::UInt32 lcid, mscorlib::System::IntPtr rgDispId);
					virtual void  GetTypeInfo(mscorlib::System::UInt32 iTInfo, mscorlib::System::UInt32 lcid, mscorlib::System::IntPtr ppTInfo);
					virtual void  GetTypeInfoCount(mscorlib::System::UInt32 pcTInfo);
					virtual void  Invoke(mscorlib::System::UInt32 dispIdMember, mscorlib::System::Guid riid, mscorlib::System::UInt32 lcid, mscorlib::System::Int16 wFlags, mscorlib::System::IntPtr pDispParams, mscorlib::System::IntPtr pVarResult, mscorlib::System::IntPtr pExcepInfo, mscorlib::System::IntPtr puArgErr);


					//Public Properties
					__declspec(property(get=get_DeclaringType)) mscorlib::System::Type  DeclaringType;
					__declspec(property(get=get_MemberType)) mscorlib::System::Reflection::MemberTypes::__ENUM__  MemberType;
					__declspec(property(get=get_Name)) mscorlib::System::String  Name;
					__declspec(property(get=get_ReflectedType)) mscorlib::System::Type  ReflectedType;

					//Get Set Properties Methods
					//	Get:DeclaringType
					mscorlib::System::Type  get_DeclaringType() const;

					//	Get:MemberType
					mscorlib::System::Reflection::MemberTypes::__ENUM__  get_MemberType() const;

					//	Get:Name
					mscorlib::System::String  get_Name() const;

					//	Get:ReflectedType
					mscorlib::System::Type  get_ReflectedType() const;

				
				protected:
					MonoObject *__mscorlib_System_Runtime_InteropServices__MemberInfo;
				
				private:
				
				};

			}
		}
	}
}
#endif
