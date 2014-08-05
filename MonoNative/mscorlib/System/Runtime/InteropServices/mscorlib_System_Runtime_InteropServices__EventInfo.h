#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES__EVENTINFO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES__EVENTINFO_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_EventAttributes.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MemberTypes.h>

namespace mscorlib
{
	namespace System
	{

		class Delegate;
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
		namespace Reflection
		{

			class MethodInfo;
			

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

				class _EventInfo
				{
				public:
					_EventInfo(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_InteropServices__EventInfo = nativeObject;
					};
				
					~_EventInfo()
					{
					};
				

					_EventInfo & operator=(_EventInfo &value) { __mscorlib_System_Runtime_InteropServices__EventInfo = value.__mscorlib_System_Runtime_InteropServices__EventInfo; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices__EventInfo; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices__EventInfo = value; return value; };


					virtual void  AddEventHandler(mscorlib::System::Object target, mscorlib::System::Delegate handler);
					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object other);
					virtual mscorlib::System::Reflection::MethodInfo  GetAddMethod();
					virtual mscorlib::System::Reflection::MethodInfo  GetAddMethod(mscorlib::System::Boolean nonPublic);
					virtual std::vector<mscorlib::System::Object*>  GetCustomAttributes(mscorlib::System::Boolean inherit);
					virtual std::vector<mscorlib::System::Object*>  GetCustomAttributes(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);
					virtual mscorlib::System::Int32  GetHashCode();
					virtual void  GetIDsOfNames(mscorlib::System::Guid riid, mscorlib::System::IntPtr rgszNames, mscorlib::System::UInt32 cNames, mscorlib::System::UInt32 lcid, mscorlib::System::IntPtr rgDispId);
					virtual void  GetTypeInfo(mscorlib::System::UInt32 iTInfo, mscorlib::System::UInt32 lcid, mscorlib::System::IntPtr ppTInfo);
					virtual void  GetTypeInfoCount(mscorlib::System::UInt32 pcTInfo);
					virtual void  Invoke(mscorlib::System::UInt32 dispIdMember, mscorlib::System::Guid riid, mscorlib::System::UInt32 lcid, mscorlib::System::Int16 wFlags, mscorlib::System::IntPtr pDispParams, mscorlib::System::IntPtr pVarResult, mscorlib::System::IntPtr pExcepInfo, mscorlib::System::IntPtr puArgErr);
					virtual mscorlib::System::Reflection::MethodInfo  GetRaiseMethod();
					virtual mscorlib::System::Reflection::MethodInfo  GetRaiseMethod(mscorlib::System::Boolean nonPublic);
					virtual mscorlib::System::Reflection::MethodInfo  GetRemoveMethod();
					virtual mscorlib::System::Reflection::MethodInfo  GetRemoveMethod(mscorlib::System::Boolean nonPublic);
					virtual mscorlib::System::Type  GetType();
					virtual mscorlib::System::Boolean  IsDefined(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);
					virtual void  RemoveEventHandler(mscorlib::System::Object target, mscorlib::System::Delegate handler);
					virtual mscorlib::System::String  ToString();


					//Public Properties
					__declspec(property(get=get_Attributes)) mscorlib::System::Reflection::EventAttributes::__ENUM__  Attributes;
					__declspec(property(get=get_DeclaringType)) mscorlib::System::Type  DeclaringType;
					__declspec(property(get=get_EventHandlerType)) mscorlib::System::Type  EventHandlerType;
					__declspec(property(get=get_IsMulticast)) mscorlib::System::Boolean  IsMulticast;
					__declspec(property(get=get_IsSpecialName)) mscorlib::System::Boolean  IsSpecialName;
					__declspec(property(get=get_MemberType)) mscorlib::System::Reflection::MemberTypes::__ENUM__  MemberType;
					__declspec(property(get=get_Name)) mscorlib::System::String  Name;
					__declspec(property(get=get_ReflectedType)) mscorlib::System::Type  ReflectedType;

					//Get Set Properties Methods
					//	Get:Attributes
					mscorlib::System::Reflection::EventAttributes::__ENUM__  get_Attributes() const;

					//	Get:DeclaringType
					mscorlib::System::Type  get_DeclaringType() const;

					//	Get:EventHandlerType
					mscorlib::System::Type  get_EventHandlerType() const;

					//	Get:IsMulticast
					mscorlib::System::Boolean  get_IsMulticast() const;

					//	Get:IsSpecialName
					mscorlib::System::Boolean  get_IsSpecialName() const;

					//	Get:MemberType
					mscorlib::System::Reflection::MemberTypes::__ENUM__  get_MemberType() const;

					//	Get:Name
					mscorlib::System::String  get_Name() const;

					//	Get:ReflectedType
					mscorlib::System::Type  get_ReflectedType() const;

				
				protected:
					MonoObject *__mscorlib_System_Runtime_InteropServices__EventInfo;
				
				private:
				
				};

			}
		}
	}
}
#endif
