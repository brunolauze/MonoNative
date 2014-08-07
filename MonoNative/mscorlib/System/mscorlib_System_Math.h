#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_MATH_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_MATH_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_MidpointRounding.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		class Decimal;
		class SByte;
		class Byte;
		

	}
}
namespace mscorlib
{
	namespace System
	{

		class Math
			: public mscorlib::System::Object
		{
		public:
			Math(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::Object(nativeTypeInfo)
			{
			};
		
			Math(MonoObject *nativeObject)
			: mscorlib::System::Object(nativeObject)
			{
			};
		
			~Math()
			{
			};
		

			Math & operator=(Math &value) { __native_object__ = value.GetNativeObject(); return value; };
			bool operator==(Math &value) { return mscorlib::System::Object::Equals(value); };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			static mscorlib::System::Decimal  Abs(mscorlib::System::Decimal value);
			static mscorlib::System::Double  Abs(mscorlib::System::Double value);
			static mscorlib::System::Single  Abs(mscorlib::System::Single value);
			static mscorlib::System::Int32  Abs(mscorlib::System::Int32 value);
			static mscorlib::System::Int64  Abs(mscorlib::System::Int64 value);
			static mscorlib::System::SByte  Abs(mscorlib::System::SByte value);
			static mscorlib::System::Int16  Abs(mscorlib::System::Int16 value);
			static mscorlib::System::Decimal  Ceiling(mscorlib::System::Decimal d);
			static mscorlib::System::Double  Ceiling(mscorlib::System::Double a);
			static mscorlib::System::Int64  BigMul(mscorlib::System::Int32 a, mscorlib::System::Int32 b);
			static mscorlib::System::Int32  DivRem(mscorlib::System::Int32 a, mscorlib::System::Int32 b, mscorlib::System::Int32 result);
			static mscorlib::System::Int64  DivRem(mscorlib::System::Int64 a, mscorlib::System::Int64 b, mscorlib::System::Int64 result);
			static mscorlib::System::Double  Floor(mscorlib::System::Double d);
			static mscorlib::System::Double  IEEERemainder(mscorlib::System::Double x, mscorlib::System::Double y);
			static mscorlib::System::Double  Log(mscorlib::System::Double a, mscorlib::System::Double newBase);
			static mscorlib::System::Byte  Max(mscorlib::System::Byte val1, mscorlib::System::Byte val2);
			static mscorlib::System::Decimal  Max(mscorlib::System::Decimal val1, mscorlib::System::Decimal val2);
			static mscorlib::System::Double  Max(mscorlib::System::Double val1, mscorlib::System::Double val2);
			static mscorlib::System::Single  Max(mscorlib::System::Single val1, mscorlib::System::Single val2);
			static mscorlib::System::Int32  Max(mscorlib::System::Int32 val1, mscorlib::System::Int32 val2);
			static mscorlib::System::Int64  Max(mscorlib::System::Int64 val1, mscorlib::System::Int64 val2);
			static mscorlib::System::SByte  Max(mscorlib::System::SByte val1, mscorlib::System::SByte val2);
			static mscorlib::System::Int16  Max(mscorlib::System::Int16 val1, mscorlib::System::Int16 val2);
			static mscorlib::System::UInt32  Max(mscorlib::System::UInt32 val1, mscorlib::System::UInt32 val2);
			static mscorlib::System::UInt64  Max(mscorlib::System::UInt64 val1, mscorlib::System::UInt64 val2);
			static mscorlib::System::UInt16  Max(mscorlib::System::UInt16 val1, mscorlib::System::UInt16 val2);
			static mscorlib::System::Byte  Min(mscorlib::System::Byte val1, mscorlib::System::Byte val2);
			static mscorlib::System::Decimal  Min(mscorlib::System::Decimal val1, mscorlib::System::Decimal val2);
			static mscorlib::System::Double  Min(mscorlib::System::Double val1, mscorlib::System::Double val2);
			static mscorlib::System::Single  Min(mscorlib::System::Single val1, mscorlib::System::Single val2);
			static mscorlib::System::Int32  Min(mscorlib::System::Int32 val1, mscorlib::System::Int32 val2);
			static mscorlib::System::Int64  Min(mscorlib::System::Int64 val1, mscorlib::System::Int64 val2);
			static mscorlib::System::SByte  Min(mscorlib::System::SByte val1, mscorlib::System::SByte val2);
			static mscorlib::System::Int16  Min(mscorlib::System::Int16 val1, mscorlib::System::Int16 val2);
			static mscorlib::System::UInt32  Min(mscorlib::System::UInt32 val1, mscorlib::System::UInt32 val2);
			static mscorlib::System::UInt64  Min(mscorlib::System::UInt64 val1, mscorlib::System::UInt64 val2);
			static mscorlib::System::UInt16  Min(mscorlib::System::UInt16 val1, mscorlib::System::UInt16 val2);
			static mscorlib::System::Decimal  Round(mscorlib::System::Decimal d);
			static mscorlib::System::Decimal  Round(mscorlib::System::Decimal d, mscorlib::System::Int32 decimals);
			static mscorlib::System::Decimal  Round(mscorlib::System::Decimal d, mscorlib::System::MidpointRounding::__ENUM__ mode);
			static mscorlib::System::Decimal  Round(mscorlib::System::Decimal d, mscorlib::System::Int32 decimals, mscorlib::System::MidpointRounding::__ENUM__ mode);
			static mscorlib::System::Double  Round(mscorlib::System::Double a);
			static mscorlib::System::Double  Round(mscorlib::System::Double value, mscorlib::System::Int32 digits);
			static mscorlib::System::Double  Round(mscorlib::System::Double value, mscorlib::System::MidpointRounding::__ENUM__ mode);
			static mscorlib::System::Double  Round(mscorlib::System::Double value, mscorlib::System::Int32 digits, mscorlib::System::MidpointRounding::__ENUM__ mode);
			static mscorlib::System::Double  Truncate(mscorlib::System::Double d);
			static mscorlib::System::Decimal  Truncate(mscorlib::System::Decimal d);
			static mscorlib::System::Decimal  Floor(mscorlib::System::Decimal d);
			static mscorlib::System::Int32  Sign(mscorlib::System::Decimal value);
			static mscorlib::System::Int32  Sign(mscorlib::System::Double value);
			static mscorlib::System::Int32  Sign(mscorlib::System::Single value);
			static mscorlib::System::Int32  Sign(mscorlib::System::Int32 value);
			static mscorlib::System::Int32  Sign(mscorlib::System::Int64 value);
			static mscorlib::System::Int32  Sign(mscorlib::System::SByte value);
			static mscorlib::System::Int32  Sign(mscorlib::System::Int16 value);
			static mscorlib::System::Double  Sin(mscorlib::System::Double a);
			static mscorlib::System::Double  Cos(mscorlib::System::Double d);
			static mscorlib::System::Double  Tan(mscorlib::System::Double a);
			static mscorlib::System::Double  Sinh(mscorlib::System::Double value);
			static mscorlib::System::Double  Cosh(mscorlib::System::Double value);
			static mscorlib::System::Double  Tanh(mscorlib::System::Double value);
			static mscorlib::System::Double  Acos(mscorlib::System::Double d);
			static mscorlib::System::Double  Asin(mscorlib::System::Double d);
			static mscorlib::System::Double  Atan(mscorlib::System::Double d);
			static mscorlib::System::Double  Atan2(mscorlib::System::Double y, mscorlib::System::Double x);
			static mscorlib::System::Double  Exp(mscorlib::System::Double d);
			static mscorlib::System::Double  Log(mscorlib::System::Double d);
			static mscorlib::System::Double  Log10(mscorlib::System::Double d);
			static mscorlib::System::Double  Pow(mscorlib::System::Double x, mscorlib::System::Double y);
			static mscorlib::System::Double  Sqrt(mscorlib::System::Double d);
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Static Fields
			static Property<mscorlib::System::Double , mscorlib::System::Math> E;
			static Property<mscorlib::System::Double , mscorlib::System::Math> PI;

			//	Get/Set:E
			static mscorlib::System::Double  get_E();
			static void set_E(mscorlib::System::Double  value);

			//	Get/Set:PI
			static mscorlib::System::Double  get_PI();
			static void set_PI(mscorlib::System::Double  value);

		
		protected:
		
		private:
		
		};

	}
}
#endif
