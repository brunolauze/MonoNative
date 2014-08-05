#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_IFormatterConverter.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfoEnumerator.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Byte;
		class SByte;
		class Decimal;
		class DateTime;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				class SerializationInfo
					: public mscorlib::System::Object
				{
				public:
					SerializationInfo(mscorlib::System::Type type, mscorlib::System::Runtime::Serialization::IFormatterConverter converter)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Serialization.SerializationInfo"))
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Type");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Runtime.Serialization", "IFormatterConverter");
						__parameters__[0] = (MonoObject*)type;
						__parameters__[1] = (MonoObject*)converter;
						__native_object__ = Global::New("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 2, __parameter_types__, __parameters__);
					};
				
					SerializationInfo(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					SerializationInfo(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~SerializationInfo()
					{
					};
				

					SerializationInfo & operator=(SerializationInfo &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					void  AddValue(mscorlib::System::String name, mscorlib::System::Object value, mscorlib::System::Type type);
					mscorlib::System::Object  GetValue(mscorlib::System::String name, mscorlib::System::Type type);
					void  SetType(mscorlib::System::Type type);
					mscorlib::System::Runtime::Serialization::SerializationInfoEnumerator * GetEnumerator();
					void  AddValue(mscorlib::System::String name, mscorlib::System::Int16 value);
					void  AddValue(mscorlib::System::String name, mscorlib::System::UInt16 value);
					void  AddValue(mscorlib::System::String name, mscorlib::System::Int32 value);
					void  AddValue(mscorlib::System::String name, mscorlib::System::Byte value);
					void  AddValue(mscorlib::System::String name, mscorlib::System::Boolean value);
					void  AddValue(mscorlib::System::String name, mscorlib::System::Char value);
					void  AddValue(mscorlib::System::String name, mscorlib::System::SByte value);
					void  AddValue(mscorlib::System::String name, mscorlib::System::Double value);
					void  AddValue(mscorlib::System::String name, mscorlib::System::Decimal value);
					void  AddValue(mscorlib::System::String name, mscorlib::System::DateTime value);
					void  AddValue(mscorlib::System::String name, mscorlib::System::Single value);
					void  AddValue(mscorlib::System::String name, mscorlib::System::UInt32 value);
					void  AddValue(mscorlib::System::String name, mscorlib::System::Int64 value);
					void  AddValue(mscorlib::System::String name, mscorlib::System::UInt64 value);
					void  AddValue(mscorlib::System::String name, mscorlib::System::Object value);
					mscorlib::System::Boolean  GetBoolean(mscorlib::System::String name);
					mscorlib::System::Byte  GetByte(mscorlib::System::String name);
					mscorlib::System::Char  GetChar(mscorlib::System::String name);
					mscorlib::System::DateTime  GetDateTime(mscorlib::System::String name);
					mscorlib::System::Decimal  GetDecimal(mscorlib::System::String name);
					mscorlib::System::Double  GetDouble(mscorlib::System::String name);
					mscorlib::System::Int16  GetInt16(mscorlib::System::String name);
					mscorlib::System::Int32  GetInt32(mscorlib::System::String name);
					mscorlib::System::Int64  GetInt64(mscorlib::System::String name);
					mscorlib::System::SByte  GetSByte(mscorlib::System::String name);
					mscorlib::System::Single  GetSingle(mscorlib::System::String name);
					mscorlib::System::String  GetString(mscorlib::System::String name);
					mscorlib::System::UInt16  GetUInt16(mscorlib::System::String name);
					mscorlib::System::UInt32  GetUInt32(mscorlib::System::String name);
					mscorlib::System::UInt64  GetUInt64(mscorlib::System::String name);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_AssemblyName, put=set_AssemblyName)) mscorlib::System::String  AssemblyName;
					__declspec(property(get=get_FullTypeName, put=set_FullTypeName)) mscorlib::System::String  FullTypeName;
					__declspec(property(get=get_MemberCount)) mscorlib::System::Int32  MemberCount;
					__declspec(property(get=get_IsAssemblyNameSetExplicit)) mscorlib::System::Boolean  IsAssemblyNameSetExplicit;
					__declspec(property(get=get_IsFullTypeNameSetExplicit)) mscorlib::System::Boolean  IsFullTypeNameSetExplicit;
					__declspec(property(get=get_ObjectType)) mscorlib::System::Type  ObjectType;

					//Get Set Properties Methods
					//	Get/Set:AssemblyName
					mscorlib::System::String  get_AssemblyName() const;
					void set_AssemblyName(mscorlib::System::String  value);

					//	Get/Set:FullTypeName
					mscorlib::System::String  get_FullTypeName() const;
					void set_FullTypeName(mscorlib::System::String  value);

					//	Get:MemberCount
					mscorlib::System::Int32  get_MemberCount() const;

					//	Get:IsAssemblyNameSetExplicit
					mscorlib::System::Boolean  get_IsAssemblyNameSetExplicit() const;

					//	Get:IsFullTypeNameSetExplicit
					mscorlib::System::Boolean  get_IsFullTypeNameSetExplicit() const;

					//	Get:ObjectType
					mscorlib::System::Type  get_ObjectType() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
