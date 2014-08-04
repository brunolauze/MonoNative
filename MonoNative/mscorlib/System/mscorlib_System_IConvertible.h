#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_ICONVERTIBLE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_ICONVERTIBLE_H

#include <mscorlib/System/mscorlib_System_TypeCode.h>
#include <mscorlib/System/mscorlib_System_IFormatProvider.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Byte;
		class DateTime;
		class Decimal;
		class SByte;
		class String;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{

		class IConvertible
		{
		public:
			IConvertible(MonoObject *nativeObject)
			{
				__mscorlib_System_IConvertible = nativeObject;
			};
		
			~IConvertible()
			{
			};
		

			IConvertible & operator=(IConvertible &value) { __mscorlib_System_IConvertible = value.__mscorlib_System_IConvertible; return value; };
			operator MonoObject*() { return __mscorlib_System_IConvertible; };
			MonoObject* operator=(MonoObject* value) { __mscorlib_System_IConvertible = value; return value; };


			virtual mscorlib::System::TypeCode::__ENUM__  GetTypeCode();
			virtual mscorlib::System::Boolean  ToBoolean(mscorlib::System::IFormatProvider provider);
			virtual mscorlib::System::Byte  ToByte(mscorlib::System::IFormatProvider provider);
			virtual mscorlib::System::Char  ToChar(mscorlib::System::IFormatProvider provider);
			virtual mscorlib::System::DateTime  ToDateTime(mscorlib::System::IFormatProvider provider);
			virtual mscorlib::System::Decimal  ToDecimal(mscorlib::System::IFormatProvider provider);
			virtual mscorlib::System::Double  ToDouble(mscorlib::System::IFormatProvider provider);
			virtual mscorlib::System::Int16  ToInt16(mscorlib::System::IFormatProvider provider);
			virtual mscorlib::System::Int32  ToInt32(mscorlib::System::IFormatProvider provider);
			virtual mscorlib::System::Int64  ToInt64(mscorlib::System::IFormatProvider provider);
			virtual mscorlib::System::SByte  ToSByte(mscorlib::System::IFormatProvider provider);
			virtual mscorlib::System::Single  ToSingle(mscorlib::System::IFormatProvider provider);
			virtual mscorlib::System::String  ToString(mscorlib::System::IFormatProvider provider);
			virtual mscorlib::System::Object  ToType(mscorlib::System::Type conversionType, mscorlib::System::IFormatProvider provider);
			virtual mscorlib::System::UInt16  ToUInt16(mscorlib::System::IFormatProvider provider);
			virtual mscorlib::System::UInt32  ToUInt32(mscorlib::System::IFormatProvider provider);
			virtual mscorlib::System::UInt64  ToUInt64(mscorlib::System::IFormatProvider provider);


		
		protected:
			MonoObject *__mscorlib_System_IConvertible;
		
		private:
		
		};

	}
}
#endif
