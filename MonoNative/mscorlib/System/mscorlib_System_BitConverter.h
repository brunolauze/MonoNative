#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_BITCONVERTER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_BITCONVERTER_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		class Byte;
		

	}
}
namespace mscorlib
{
	namespace System
	{

		class BitConverter
			: public mscorlib::System::Object
		{
		public:
			BitConverter(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::Object(nativeTypeInfo)
			{
			};
		
			BitConverter(MonoObject *nativeObject)
			: mscorlib::System::Object(nativeObject)
			{
			};
		
			~BitConverter()
			{
			};
		

			BitConverter & operator=(BitConverter &value) { __native_object__ = value.GetNativeObject(); return value; };
			bool operator==(BitConverter &value) { return mscorlib::System::Object::Equals(value); };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			static mscorlib::System::Int64  DoubleToInt64Bits(mscorlib::System::Double value);
			static mscorlib::System::Double  Int64BitsToDouble(mscorlib::System::Int64 value);
			static std::vector<mscorlib::System::Byte*>  GetBytes(mscorlib::System::Boolean value);
			static std::vector<mscorlib::System::Byte*>  GetBytes(mscorlib::System::Char value);
			static std::vector<mscorlib::System::Byte*>  GetBytes(mscorlib::System::Int16 value);
			static std::vector<mscorlib::System::Byte*>  GetBytes(mscorlib::System::Int32 value);
			static std::vector<mscorlib::System::Byte*>  GetBytes(mscorlib::System::Int64 value);
			static std::vector<mscorlib::System::Byte*>  GetBytes(mscorlib::System::UInt16 value);
			static std::vector<mscorlib::System::Byte*>  GetBytes(mscorlib::System::UInt32 value);
			static std::vector<mscorlib::System::Byte*>  GetBytes(mscorlib::System::UInt64 value);
			static std::vector<mscorlib::System::Byte*>  GetBytes(mscorlib::System::Single value);
			static std::vector<mscorlib::System::Byte*>  GetBytes(mscorlib::System::Double value);
			static mscorlib::System::Boolean  ToBoolean(std::vector<mscorlib::System::Byte*> value, mscorlib::System::Int32 startIndex);
			static mscorlib::System::Char  ToChar(std::vector<mscorlib::System::Byte*> value, mscorlib::System::Int32 startIndex);
			static mscorlib::System::Int16  ToInt16(std::vector<mscorlib::System::Byte*> value, mscorlib::System::Int32 startIndex);
			static mscorlib::System::Int32  ToInt32(std::vector<mscorlib::System::Byte*> value, mscorlib::System::Int32 startIndex);
			static mscorlib::System::Int64  ToInt64(std::vector<mscorlib::System::Byte*> value, mscorlib::System::Int32 startIndex);
			static mscorlib::System::UInt16  ToUInt16(std::vector<mscorlib::System::Byte*> value, mscorlib::System::Int32 startIndex);
			static mscorlib::System::UInt32  ToUInt32(std::vector<mscorlib::System::Byte*> value, mscorlib::System::Int32 startIndex);
			static mscorlib::System::UInt64  ToUInt64(std::vector<mscorlib::System::Byte*> value, mscorlib::System::Int32 startIndex);
			static mscorlib::System::Single  ToSingle(std::vector<mscorlib::System::Byte*> value, mscorlib::System::Int32 startIndex);
			static mscorlib::System::Double  ToDouble(std::vector<mscorlib::System::Byte*> value, mscorlib::System::Int32 startIndex);
			static mscorlib::System::String  ToString(std::vector<mscorlib::System::Byte*> value);
			static mscorlib::System::String  ToString(std::vector<mscorlib::System::Byte*> value, mscorlib::System::Int32 startIndex);
			static mscorlib::System::String  ToString(std::vector<mscorlib::System::Byte*> value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 length);
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Static Fields
			static Property<mscorlib::System::Boolean , mscorlib::System::BitConverter> IsLittleEndian;

			//	Get/Set:IsLittleEndian
			static mscorlib::System::Boolean  get_IsLittleEndian();
			static void set_IsLittleEndian(mscorlib::System::Boolean  value);

		
		protected:
		
		private:
		
		};

	}
}
#endif
