#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DECIMAL_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DECIMAL_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_IConvertible.h>
#include <mscorlib/System/mscorlib_System_IComparable.h>
#include <mscorlib/System/mscorlib_System_IFormattable.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_IDeserializationCallback.h>
#include <mscorlib/System/mscorlib_System_IComparable_1.h>
#include <mscorlib/System/mscorlib_System_IEquatable_1.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_TypeCode.h>
#include <mscorlib/System/mscorlib_System_IFormatProvider.h>
#include <mscorlib/System/mscorlib_System_MidpointRounding.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_NumberStyles.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Type;
		class SByte;
		

	}
}
namespace mscorlib
{
	namespace System
	{

		class Decimal
			: public mscorlib::System::ValueType
			, public virtual mscorlib::System::IConvertible
			, public virtual mscorlib::System::IObjectComparable
			, public virtual mscorlib::System::IFormattable
			, public virtual mscorlib::System::Runtime::Serialization::IDeserializationCallback
			, public virtual mscorlib::System::IComparable<mscorlib::System::Decimal>
			, public virtual mscorlib::System::IEquatable<mscorlib::System::Decimal>
		{
		public:
			Decimal(mscorlib::System::Int32 lo, mscorlib::System::Int32 mid, mscorlib::System::Int32 hi, mscorlib::System::Boolean isNegative, mscorlib::System::Byte scale)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Decimal"))
			, mscorlib::System::IConvertible(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::IFormattable(NULL)
			, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
			, mscorlib::System::IComparable<mscorlib::System::Decimal>(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::Decimal>(NULL)
			{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[3] = Global::GetType("mscorlib", "System", "Boolean");
				__parameter_types__[4] = Global::GetType("mscorlib", "System", "Byte");
				__parameters__[0] = &lo;
				__parameters__[1] = &mid;
				__parameters__[2] = &hi;
				__parameters__[3] = reinterpret_cast<void*>(isNegative);
				__parameters__[4] = (MonoObject*)scale;
				__native_object__ = Global::New("mscorlib", "System", "Decimal", 5, __parameter_types__, __parameters__);
			};
		
			Decimal(mscorlib::System::Int32 value)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Decimal"))
			, mscorlib::System::IConvertible(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::IFormattable(NULL)
			, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
			, mscorlib::System::IComparable<mscorlib::System::Decimal>(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::Decimal>(NULL)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
				__parameters__[0] = &value;
				__native_object__ = Global::New("mscorlib", "System", "Decimal", 1, __parameter_types__, __parameters__);
			};
		
			Decimal(mscorlib::System::UInt32 value)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Decimal"))
			, mscorlib::System::IConvertible(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::IFormattable(NULL)
			, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
			, mscorlib::System::IComparable<mscorlib::System::Decimal>(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::Decimal>(NULL)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "UInt32");
				__parameters__[0] = &value;
				__native_object__ = Global::New("mscorlib", "System", "Decimal", 1, __parameter_types__, __parameters__);
			};
		
			Decimal(mscorlib::System::Int64 value)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Decimal"))
			, mscorlib::System::IConvertible(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::IFormattable(NULL)
			, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
			, mscorlib::System::IComparable<mscorlib::System::Decimal>(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::Decimal>(NULL)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int64");
				__parameters__[0] = &value;
				__native_object__ = Global::New("mscorlib", "System", "Decimal", 1, __parameter_types__, __parameters__);
			};
		
			Decimal(mscorlib::System::UInt64 value)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Decimal"))
			, mscorlib::System::IConvertible(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::IFormattable(NULL)
			, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
			, mscorlib::System::IComparable<mscorlib::System::Decimal>(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::Decimal>(NULL)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "UInt64");
				__parameters__[0] = &value;
				__native_object__ = Global::New("mscorlib", "System", "Decimal", 1, __parameter_types__, __parameters__);
			};
		
			Decimal(mscorlib::System::Single value)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Decimal"))
			, mscorlib::System::IConvertible(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::IFormattable(NULL)
			, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
			, mscorlib::System::IComparable<mscorlib::System::Decimal>(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::Decimal>(NULL)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Single");
				__parameters__[0] = &value;
				__native_object__ = Global::New("mscorlib", "System", "Decimal", 1, __parameter_types__, __parameters__);
			};
		
			Decimal(mscorlib::System::Double value)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Decimal"))
			, mscorlib::System::IConvertible(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::IFormattable(NULL)
			, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
			, mscorlib::System::IComparable<mscorlib::System::Decimal>(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::Decimal>(NULL)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Double");
				__parameters__[0] = &value;
				__native_object__ = Global::New("mscorlib", "System", "Decimal", 1, __parameter_types__, __parameters__);
			};
		
			Decimal(std::vector<mscorlib::System::Int32*> bits)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Decimal"))
			, mscorlib::System::IConvertible(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::IFormattable(NULL)
			, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
			, mscorlib::System::IComparable<mscorlib::System::Decimal>(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::Decimal>(NULL)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType("mscorlib", "System", "Int32"))->eklass);
				__parameters__[0] = Global::FromArray<mscorlib::System::Int32*>(bits, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "Int32");
				__native_object__ = Global::New("mscorlib", "System", "Decimal", 1, __parameter_types__, __parameters__);
			};
		
			Decimal(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::ValueType(nativeTypeInfo)
			, mscorlib::System::IConvertible(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::IFormattable(NULL)
			, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
			, mscorlib::System::IComparable<mscorlib::System::Decimal>(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::Decimal>(NULL)
			{
			};
		
			Decimal(MonoObject *nativeObject)
			: mscorlib::System::ValueType(nativeObject)
			, mscorlib::System::IConvertible(nativeObject)
			, mscorlib::System::IObjectComparable(nativeObject)
			, mscorlib::System::IFormattable(nativeObject)
			, mscorlib::System::Runtime::Serialization::IDeserializationCallback(nativeObject)
			, mscorlib::System::IComparable<mscorlib::System::Decimal>(nativeObject)
			, mscorlib::System::IEquatable<mscorlib::System::Decimal>(nativeObject)
			{
			};
		
			~Decimal()
			{
			};
		

			Decimal & operator=(Decimal &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			static mscorlib::System::Decimal  FromOACurrency(mscorlib::System::Int64 cy);
			static std::vector<mscorlib::System::Int32*>  GetBits(mscorlib::System::Decimal d);
			static mscorlib::System::Decimal  Negate(mscorlib::System::Decimal d);
			static mscorlib::System::Decimal  Add(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2);
			static mscorlib::System::Decimal  Subtract(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2);
			virtual mscorlib::System::Int32  GetHashCode() override;
			static mscorlib::System::Boolean  Equals(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2);
			virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object value) override;
			static mscorlib::System::Decimal  Floor(mscorlib::System::Decimal d);
			static mscorlib::System::Decimal  Truncate(mscorlib::System::Decimal d);
			static mscorlib::System::Decimal  Round(mscorlib::System::Decimal d, mscorlib::System::Int32 decimals);
			static mscorlib::System::Decimal  Round(mscorlib::System::Decimal d, mscorlib::System::Int32 decimals, mscorlib::System::MidpointRounding::__ENUM__ mode);
			static mscorlib::System::Decimal  Round(mscorlib::System::Decimal d);
			static mscorlib::System::Decimal  Round(mscorlib::System::Decimal d, mscorlib::System::MidpointRounding::__ENUM__ mode);
			static mscorlib::System::Decimal  Multiply(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2);
			static mscorlib::System::Decimal  Divide(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2);
			static mscorlib::System::Decimal  Remainder(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2);
			static mscorlib::System::Int32  Compare(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2);
			virtual mscorlib::System::Int32  CompareTo(mscorlib::System::Object value);
			virtual mscorlib::System::Int32  CompareTo(mscorlib::System::Decimal value);
			virtual mscorlib::System::Boolean  Equals(mscorlib::System::Decimal value);
			static mscorlib::System::Decimal  Ceiling(mscorlib::System::Decimal d);
			static mscorlib::System::Decimal  Parse(mscorlib::System::String s);
			static mscorlib::System::Decimal  Parse(mscorlib::System::String s, mscorlib::System::Globalization::NumberStyles::__ENUM__ style);
			static mscorlib::System::Decimal  Parse(mscorlib::System::String s, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::Decimal  Parse(mscorlib::System::String s, mscorlib::System::Globalization::NumberStyles::__ENUM__ style, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::Boolean  TryParse(mscorlib::System::String s, mscorlib::System::Decimal result);
			static mscorlib::System::Boolean  TryParse(mscorlib::System::String s, mscorlib::System::Globalization::NumberStyles::__ENUM__ style, mscorlib::System::IFormatProvider provider, mscorlib::System::Decimal result);
			virtual mscorlib::System::TypeCode::__ENUM__  GetTypeCode();
			static mscorlib::System::Byte  ToByte(mscorlib::System::Decimal value);
			static mscorlib::System::Double  ToDouble(mscorlib::System::Decimal d);
			static mscorlib::System::Int16  ToInt16(mscorlib::System::Decimal value);
			static mscorlib::System::Int32  ToInt32(mscorlib::System::Decimal d);
			static mscorlib::System::Int64  ToInt64(mscorlib::System::Decimal d);
			static mscorlib::System::Int64  ToOACurrency(mscorlib::System::Decimal value);
			static mscorlib::System::SByte  ToSByte(mscorlib::System::Decimal value);
			static mscorlib::System::Single  ToSingle(mscorlib::System::Decimal d);
			static mscorlib::System::UInt16  ToUInt16(mscorlib::System::Decimal value);
			static mscorlib::System::UInt32  ToUInt32(mscorlib::System::Decimal d);
			static mscorlib::System::UInt64  ToUInt64(mscorlib::System::Decimal d);
			virtual mscorlib::System::String  ToString(mscorlib::System::String format, mscorlib::System::IFormatProvider provider);
			virtual mscorlib::System::String  ToString() override;
			mscorlib::System::String  ToString(mscorlib::System::String format);
			virtual mscorlib::System::String  ToString(mscorlib::System::IFormatProvider provider);
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Static Fields
			static Property<mscorlib::System::Decimal> MinValue;
			static Property<mscorlib::System::Decimal> MaxValue;
			static Property<mscorlib::System::Decimal> MinusOne;
			static Property<mscorlib::System::Decimal> One;
			static Property<mscorlib::System::Decimal> Zero;

			//	Get/Set:MinValue
			static mscorlib::System::Decimal  get_MinValue();

			//	Get/Set:MaxValue
			static mscorlib::System::Decimal  get_MaxValue();

			//	Get/Set:MinusOne
			static mscorlib::System::Decimal  get_MinusOne();

			//	Get/Set:One
			static mscorlib::System::Decimal  get_One();

			//	Get/Set:Zero
			static mscorlib::System::Decimal  get_Zero();

		
		protected:
		
		private:
		
		};

	}
}
#endif
