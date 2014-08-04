#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_IFORMATTERCONVERTER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_IFORMATTERCONVERTER_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_TypeCode.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class Byte;
		class DateTime;
		class Decimal;
		class SByte;
		class String;
		

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

				class IFormatterConverter
				{
				public:
					IFormatterConverter(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_Serialization_IFormatterConverter = nativeObject;
					};
				
					~IFormatterConverter()
					{
					};
				

					IFormatterConverter & operator=(IFormatterConverter &value) { __mscorlib_System_Runtime_Serialization_IFormatterConverter = value.__mscorlib_System_Runtime_Serialization_IFormatterConverter; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_Serialization_IFormatterConverter; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Serialization_IFormatterConverter = value; return value; };


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
					virtual mscorlib::System::SByte  ToSByte(mscorlib::System::Object value);
					virtual mscorlib::System::Single  ToSingle(mscorlib::System::Object value);
					virtual mscorlib::System::String  ToString(mscorlib::System::Object value);
					virtual mscorlib::System::UInt16  ToUInt16(mscorlib::System::Object value);
					virtual mscorlib::System::UInt32  ToUInt32(mscorlib::System::Object value);
					virtual mscorlib::System::UInt64  ToUInt64(mscorlib::System::Object value);


				
				protected:
					MonoObject *__mscorlib_System_Runtime_Serialization_IFormatterConverter;
				
				private:
				
				};

			}
		}
	}
}
#endif
