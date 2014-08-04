#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_TEXT_STRINGBUILDER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_TEXT_STRINGBUILDER_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>
#include <mscorlib/System/mscorlib_System_IFormatProvider.h>

namespace mscorlib
{
	namespace System
	{

		class Byte;
		class Decimal;
		class SByte;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Text
		{

			class StringBuilder
				: public mscorlib::System::Object
				, public virtual mscorlib::System::Runtime::Serialization::ISerializable
			{
			public:
				StringBuilder(mscorlib::System::String value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 length, mscorlib::System::Int32 capacity)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Text.StringBuilder"))
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
					__parameter_types__[3] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = (MonoObject*)value;
					__parameters__[1] = &startIndex;
					__parameters__[2] = &length;
					__parameters__[3] = &capacity;
					__native_object__ = Global::New("mscorlib", "System.Text", "StringBuilder", 4, __parameter_types__, __parameters__);
				};
			
				StringBuilder()
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Text.StringBuilder"))
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
					__native_object__ = Global::New("mscorlib", "System.Text", "StringBuilder");
				};
			
				StringBuilder(mscorlib::System::Int32 capacity)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Text.StringBuilder"))
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = &capacity;
					__native_object__ = Global::New("mscorlib", "System.Text", "StringBuilder", 1, __parameter_types__, __parameters__);
				};
			
				StringBuilder(mscorlib::System::Int32 capacity, mscorlib::System::Int32 maxCapacity)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Text.StringBuilder"))
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = &capacity;
					__parameters__[1] = &maxCapacity;
					__native_object__ = Global::New("mscorlib", "System.Text", "StringBuilder", 2, __parameter_types__, __parameters__);
				};
			
				StringBuilder(mscorlib::System::String value)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Text.StringBuilder"))
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)value;
					__native_object__ = Global::New("mscorlib", "System.Text", "StringBuilder", 1, __parameter_types__, __parameters__);
				};
			
				StringBuilder(mscorlib::System::String value, mscorlib::System::Int32 capacity)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Text.StringBuilder"))
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = (MonoObject*)value;
					__parameters__[1] = &capacity;
					__native_object__ = Global::New("mscorlib", "System.Text", "StringBuilder", 2, __parameter_types__, __parameters__);
				};
			
				StringBuilder(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
				};
			
				StringBuilder(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
				{
				};
			
				~StringBuilder()
				{
				};
			

				StringBuilder & operator=(StringBuilder &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::String  ToString() override;
				mscorlib::System::String  ToString(mscorlib::System::Int32 startIndex, mscorlib::System::Int32 length);
				mscorlib::System::Int32  EnsureCapacity(mscorlib::System::Int32 capacity);
				mscorlib::System::Boolean  Equals(mscorlib::System::Text::StringBuilder sb);
				mscorlib::System::Text::StringBuilder  Remove(mscorlib::System::Int32 startIndex, mscorlib::System::Int32 length);
				mscorlib::System::Text::StringBuilder  Replace(mscorlib::System::Char oldChar, mscorlib::System::Char newChar);
				mscorlib::System::Text::StringBuilder  Replace(mscorlib::System::Char oldChar, mscorlib::System::Char newChar, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count);
				mscorlib::System::Text::StringBuilder  Replace(mscorlib::System::String oldValue, mscorlib::System::String newValue);
				mscorlib::System::Text::StringBuilder  Replace(mscorlib::System::String oldValue, mscorlib::System::String newValue, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count);
				mscorlib::System::Text::StringBuilder  Append(std::vector<mscorlib::System::Char*> value);
				mscorlib::System::Text::StringBuilder  Append(mscorlib::System::String value);
				mscorlib::System::Text::StringBuilder  Append(mscorlib::System::Boolean value);
				mscorlib::System::Text::StringBuilder  Append(mscorlib::System::Byte value);
				mscorlib::System::Text::StringBuilder  Append(mscorlib::System::Decimal value);
				mscorlib::System::Text::StringBuilder  Append(mscorlib::System::Double value);
				mscorlib::System::Text::StringBuilder  Append(mscorlib::System::Int16 value);
				mscorlib::System::Text::StringBuilder  Append(mscorlib::System::Int32 value);
				mscorlib::System::Text::StringBuilder  Append(mscorlib::System::Int64 value);
				mscorlib::System::Text::StringBuilder  Append(mscorlib::System::Object value);
				mscorlib::System::Text::StringBuilder  Append(mscorlib::System::SByte value);
				mscorlib::System::Text::StringBuilder  Append(mscorlib::System::Single value);
				mscorlib::System::Text::StringBuilder  Append(mscorlib::System::UInt16 value);
				mscorlib::System::Text::StringBuilder  Append(mscorlib::System::UInt32 value);
				mscorlib::System::Text::StringBuilder  Append(mscorlib::System::UInt64 value);
				mscorlib::System::Text::StringBuilder  Append(mscorlib::System::Char value);
				mscorlib::System::Text::StringBuilder  Append(mscorlib::System::Char value, mscorlib::System::Int32 repeatCount);
				mscorlib::System::Text::StringBuilder  Append(std::vector<mscorlib::System::Char*> value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 charCount);
				mscorlib::System::Text::StringBuilder  Append(mscorlib::System::String value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count);
				mscorlib::System::Text::StringBuilder  Clear();
				mscorlib::System::Text::StringBuilder  AppendLine();
				mscorlib::System::Text::StringBuilder  AppendLine(mscorlib::System::String value);
				mscorlib::System::Text::StringBuilder  AppendFormat(mscorlib::System::String format, std::vector<mscorlib::System::Object*> args);
				mscorlib::System::Text::StringBuilder  AppendFormat(mscorlib::System::IFormatProvider provider, mscorlib::System::String format, std::vector<mscorlib::System::Object*> args);
				mscorlib::System::Text::StringBuilder  AppendFormat(mscorlib::System::String format, mscorlib::System::Object arg0);
				mscorlib::System::Text::StringBuilder  AppendFormat(mscorlib::System::String format, mscorlib::System::Object arg0, mscorlib::System::Object arg1);
				mscorlib::System::Text::StringBuilder  AppendFormat(mscorlib::System::String format, mscorlib::System::Object arg0, mscorlib::System::Object arg1, mscorlib::System::Object arg2);
				mscorlib::System::Text::StringBuilder  Insert(mscorlib::System::Int32 index, std::vector<mscorlib::System::Char*> value);
				mscorlib::System::Text::StringBuilder  Insert(mscorlib::System::Int32 index, mscorlib::System::String value);
				mscorlib::System::Text::StringBuilder  Insert(mscorlib::System::Int32 index, mscorlib::System::Boolean value);
				mscorlib::System::Text::StringBuilder  Insert(mscorlib::System::Int32 index, mscorlib::System::Byte value);
				mscorlib::System::Text::StringBuilder  Insert(mscorlib::System::Int32 index, mscorlib::System::Char value);
				mscorlib::System::Text::StringBuilder  Insert(mscorlib::System::Int32 index, mscorlib::System::Decimal value);
				mscorlib::System::Text::StringBuilder  Insert(mscorlib::System::Int32 index, mscorlib::System::Double value);
				mscorlib::System::Text::StringBuilder  Insert(mscorlib::System::Int32 index, mscorlib::System::Int16 value);
				mscorlib::System::Text::StringBuilder  Insert(mscorlib::System::Int32 index, mscorlib::System::Int32 value);
				mscorlib::System::Text::StringBuilder  Insert(mscorlib::System::Int32 index, mscorlib::System::Int64 value);
				mscorlib::System::Text::StringBuilder  Insert(mscorlib::System::Int32 index, mscorlib::System::Object value);
				mscorlib::System::Text::StringBuilder  Insert(mscorlib::System::Int32 index, mscorlib::System::SByte value);
				mscorlib::System::Text::StringBuilder  Insert(mscorlib::System::Int32 index, mscorlib::System::Single value);
				mscorlib::System::Text::StringBuilder  Insert(mscorlib::System::Int32 index, mscorlib::System::UInt16 value);
				mscorlib::System::Text::StringBuilder  Insert(mscorlib::System::Int32 index, mscorlib::System::UInt32 value);
				mscorlib::System::Text::StringBuilder  Insert(mscorlib::System::Int32 index, mscorlib::System::UInt64 value);
				mscorlib::System::Text::StringBuilder  Insert(mscorlib::System::Int32 index, mscorlib::System::String value, mscorlib::System::Int32 count);
				mscorlib::System::Text::StringBuilder  Insert(mscorlib::System::Int32 index, std::vector<mscorlib::System::Char*> value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 charCount);
				void  CopyTo(mscorlib::System::Int32 sourceIndex, std::vector<mscorlib::System::Char*> destination, mscorlib::System::Int32 destinationIndex, mscorlib::System::Int32 count);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_MaxCapacity)) mscorlib::System::Int32  MaxCapacity;
				__declspec(property(get=get_Capacity, put=set_Capacity)) mscorlib::System::Int32  Capacity;
				__declspec(property(get=get_Length, put=set_Length)) mscorlib::System::Int32  Length;
				__declspec(property(get=get_Chars, put=set_Chars)) mscorlib::System::Char  Chars[];

				//Get Set Properties Methods
				//	Get:MaxCapacity
				mscorlib::System::Int32  get_MaxCapacity();

				//	Get/Set:Capacity
				mscorlib::System::Int32  get_Capacity();
				void set_Capacity(mscorlib::System::Int32  value);

				//	Get/Set:Length
				mscorlib::System::Int32  get_Length();
				void set_Length(mscorlib::System::Int32  value);

				//	Get/Set:Chars
				mscorlib::System::Char  get_Chars(mscorlib::System::Int32 index);
				void set_Chars(mscorlib::System::Int32 index, mscorlib::System::Char  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
