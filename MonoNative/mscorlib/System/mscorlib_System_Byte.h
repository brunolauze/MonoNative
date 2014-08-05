#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_BYTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_BYTE_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/mscorlib_System_IComparable_1.h>
#include <mscorlib/System/mscorlib_System_IEquatable_1.h>
#include <mscorlib/System/mscorlib_System_IConvertible.h>
#include <mscorlib/System/mscorlib_System_IComparable.h>
#include <mscorlib/System/mscorlib_System_IFormattable.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_IFormatProvider.h>
#include <mscorlib/System/mscorlib_System_TypeCode.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_NumberStyles.h>

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

		class Byte
			: public mscorlib::System::ValueType
			, public virtual mscorlib::System::IComparable<mscorlib::System::Byte>
			, public virtual mscorlib::System::IEquatable<mscorlib::System::Byte>
			, public virtual mscorlib::System::IConvertible
			, public virtual mscorlib::System::IObjectComparable
			, public virtual mscorlib::System::IFormattable
		{
		public:
			Byte(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::ValueType(nativeTypeInfo)
			, mscorlib::System::IComparable<mscorlib::System::Byte>(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::Byte>(NULL)
			, mscorlib::System::IConvertible(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::IFormattable(NULL)
			{
			};
		
			Byte(MonoObject *nativeObject)
			: mscorlib::System::ValueType(nativeObject)
			, mscorlib::System::IComparable<mscorlib::System::Byte>(nativeObject)
			, mscorlib::System::IEquatable<mscorlib::System::Byte>(nativeObject)
			, mscorlib::System::IConvertible(nativeObject)
			, mscorlib::System::IObjectComparable(nativeObject)
			, mscorlib::System::IFormattable(nativeObject)
			{
			};
		
			~Byte()
			{
			};
		

			Byte & operator=(Byte &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			virtual mscorlib::System::Int32  CompareTo(mscorlib::System::Object value);
			virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
			virtual mscorlib::System::Int32  GetHashCode() override;
			virtual mscorlib::System::Int32  CompareTo(mscorlib::System::Byte value);
			virtual mscorlib::System::Boolean  Equals(mscorlib::System::Byte obj);
			static mscorlib::System::Byte  Parse(mscorlib::System::String s, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::Byte  Parse(const char *s, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::Byte  Parse(mscorlib::System::String s, mscorlib::System::Globalization::NumberStyles::__ENUM__ style);
			static mscorlib::System::Byte  Parse(const char *s, mscorlib::System::Globalization::NumberStyles::__ENUM__ style);
			static mscorlib::System::Byte  Parse(mscorlib::System::String s, mscorlib::System::Globalization::NumberStyles::__ENUM__ style, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::Byte  Parse(const char *s, mscorlib::System::Globalization::NumberStyles::__ENUM__ style, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::Byte  Parse(mscorlib::System::String s);
			static mscorlib::System::Byte  Parse(const char *s);
			static mscorlib::System::Boolean  TryParse(mscorlib::System::String s, mscorlib::System::Byte result);
			static mscorlib::System::Boolean  TryParse(const char *s, mscorlib::System::Byte result);
			static mscorlib::System::Boolean  TryParse(mscorlib::System::String s, mscorlib::System::Globalization::NumberStyles::__ENUM__ style, mscorlib::System::IFormatProvider provider, mscorlib::System::Byte result);
			static mscorlib::System::Boolean  TryParse(const char *s, mscorlib::System::Globalization::NumberStyles::__ENUM__ style, mscorlib::System::IFormatProvider provider, mscorlib::System::Byte result);
			virtual mscorlib::System::String  ToString() override;
			mscorlib::System::String  ToString(mscorlib::System::String format);
			mscorlib::System::String  ToString(const char *format);
			virtual mscorlib::System::String  ToString(mscorlib::System::IFormatProvider provider);
			virtual mscorlib::System::String  ToString(mscorlib::System::String format, mscorlib::System::IFormatProvider provider);
			virtual mscorlib::System::String  ToString(const char *format, mscorlib::System::IFormatProvider provider);
			virtual mscorlib::System::TypeCode::__ENUM__  GetTypeCode();
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Static Fields
			static Property<mscorlib::System::Byte , mscorlib::System::Byte> MinValue;
			static Property<mscorlib::System::Byte , mscorlib::System::Byte> MaxValue;

			//	Get/Set:MinValue
			static mscorlib::System::Byte  get_MinValue();
			static void set_MinValue(mscorlib::System::Byte  value);

			//	Get/Set:MaxValue
			static mscorlib::System::Byte  get_MaxValue();
			static void set_MaxValue(mscorlib::System::Byte  value);

		
		protected:
		
		private:
		
		};

	}
}
#endif
