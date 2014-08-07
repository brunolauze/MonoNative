#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_IFormatterConverter.h>
#include <mscorlib/System/mscorlib_System_TypeCode.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class Byte;
		class DateTime;
		class Decimal;
		class String;
		class SByte;
		

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

				class FormatterConverter
					: public mscorlib::System::Object
					, public virtual mscorlib::System::Runtime::Serialization::IFormatterConverter
				{
				public:
					FormatterConverter()
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Serialization.FormatterConverter"))
					, mscorlib::System::Runtime::Serialization::IFormatterConverter(NULL)
					{
						__native_object__ = Global::New("mscorlib", "System.Runtime.Serialization", "FormatterConverter");
					};
				
					FormatterConverter(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::Runtime::Serialization::IFormatterConverter(NULL)
					{
					};
				
					FormatterConverter(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::Runtime::Serialization::IFormatterConverter(nativeObject)
					{
					};
				
					~FormatterConverter()
					{
					};
				

					FormatterConverter & operator=(FormatterConverter &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(FormatterConverter &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Object  Convert(mscorlib::System::Object value, mscorlib::System::Type type);
					virtual mscorlib::System::Object  Convert(mscorlib::System::Object value, mscorlib::System::TypeCode::__ENUM__ typeCode);
					virtual mscorlib::System::Boolean  ToBoolean(mscorlib::System::Object value);
					virtual mscorlib::System::Byte  ToByte(mscorlib::System::Object value);
					virtual mscorlib::System::Char  ToChar(mscorlib::System::Object value);
					virtual mscorlib::System::DateTime  ToDateTime(mscorlib::System::Object value);
					virtual mscorlib::System::Decimal  ToDecimal(mscorlib::System::Object value);
					virtual mscorlib::System::Double  ToDouble(mscorlib::System::Object value);
					virtual mscorlib::System::Int16  ToInt16(mscorlib::System::Object value);
					virtual mscorlib::System::Int32  ToInt32(mscorlib::System::Object value);
					virtual mscorlib::System::Int64  ToInt64(mscorlib::System::Object value);
					virtual mscorlib::System::Single  ToSingle(mscorlib::System::Object value);
					virtual mscorlib::System::String  ToString(mscorlib::System::Object value);
					virtual mscorlib::System::SByte  ToSByte(mscorlib::System::Object value);
					virtual mscorlib::System::UInt16  ToUInt16(mscorlib::System::Object value);
					virtual mscorlib::System::UInt32  ToUInt32(mscorlib::System::Object value);
					virtual mscorlib::System::UInt64  ToUInt64(mscorlib::System::Object value);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
