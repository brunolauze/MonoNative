#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_GUID_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_GUID_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_IComparable.h>
#include <mscorlib/System/mscorlib_System_IComparable_1.h>
#include <mscorlib/System/mscorlib_System_IEquatable_1.h>
#include <mscorlib/System/mscorlib_System_IFormattable.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_IFormatProvider.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{

		class Guid
			: public mscorlib::System::ValueType
			, public virtual mscorlib::System::IObjectComparable
			, public virtual mscorlib::System::IComparable<mscorlib::System::Guid>
			, public virtual mscorlib::System::IEquatable<mscorlib::System::Guid>
			, public virtual mscorlib::System::IFormattable
		{
		public:
			Guid(std::vector<mscorlib::System::Byte*> b)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Guid"))
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::IComparable<mscorlib::System::Guid>(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::Guid>(NULL)
			, mscorlib::System::IFormattable(NULL)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
				__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(b, "mscorlib", "System", "Byte");
				__native_object__ = Global::New("mscorlib", "System", "Guid", 1, __parameter_types__, __parameters__);
			};
		
			Guid(mscorlib::System::String g)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Guid"))
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::IComparable<mscorlib::System::Guid>(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::Guid>(NULL)
			, mscorlib::System::IFormattable(NULL)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = (MonoObject*)g;
				__native_object__ = Global::New("mscorlib", "System", "Guid", 1, __parameter_types__, __parameters__);
			};
		
			Guid(mscorlib::System::Int32 a, mscorlib::System::Int16 b, mscorlib::System::Int16 c, std::vector<mscorlib::System::Byte*> d)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Guid"))
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::IComparable<mscorlib::System::Guid>(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::Guid>(NULL)
			, mscorlib::System::IFormattable(NULL)
			{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int16");
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int16");
				__parameter_types__[3] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
				__parameters__[0] = &a;
				__parameters__[1] = &b;
				__parameters__[2] = &c;
				__parameters__[3] = Global::FromArray<mscorlib::System::Byte*>(d, "mscorlib", "System", "Byte");
				__native_object__ = Global::New("mscorlib", "System", "Guid", 4, __parameter_types__, __parameters__);
			};
		
			Guid(mscorlib::System::Int32 a, mscorlib::System::Int16 b, mscorlib::System::Int16 c, mscorlib::System::Byte d, mscorlib::System::Byte e, mscorlib::System::Byte f, mscorlib::System::Byte g, mscorlib::System::Byte h, mscorlib::System::Byte i, mscorlib::System::Byte j, mscorlib::System::Byte k)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Guid"))
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::IComparable<mscorlib::System::Guid>(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::Guid>(NULL)
			, mscorlib::System::IFormattable(NULL)
			{
				MonoType *__parameter_types__[11];
				void *__parameters__[11];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int16");
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int16");
				__parameter_types__[3] = Global::GetType("mscorlib", "System", "Byte");
				__parameter_types__[4] = Global::GetType("mscorlib", "System", "Byte");
				__parameter_types__[5] = Global::GetType("mscorlib", "System", "Byte");
				__parameter_types__[6] = Global::GetType("mscorlib", "System", "Byte");
				__parameter_types__[7] = Global::GetType("mscorlib", "System", "Byte");
				__parameter_types__[8] = Global::GetType("mscorlib", "System", "Byte");
				__parameter_types__[9] = Global::GetType("mscorlib", "System", "Byte");
				__parameter_types__[10] = Global::GetType("mscorlib", "System", "Byte");
				__parameters__[0] = &a;
				__parameters__[1] = &b;
				__parameters__[2] = &c;
				__parameters__[3] = (MonoObject*)d;
				__parameters__[4] = (MonoObject*)e;
				__parameters__[5] = (MonoObject*)f;
				__parameters__[6] = (MonoObject*)g;
				__parameters__[7] = (MonoObject*)h;
				__parameters__[8] = (MonoObject*)i;
				__parameters__[9] = (MonoObject*)j;
				__parameters__[10] = (MonoObject*)k;
				__native_object__ = Global::New("mscorlib", "System", "Guid", 11, __parameter_types__, __parameters__);
			};
		
			Guid(mscorlib::System::UInt32 a, mscorlib::System::UInt16 b, mscorlib::System::UInt16 c, mscorlib::System::Byte d, mscorlib::System::Byte e, mscorlib::System::Byte f, mscorlib::System::Byte g, mscorlib::System::Byte h, mscorlib::System::Byte i, mscorlib::System::Byte j, mscorlib::System::Byte k)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Guid"))
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::IComparable<mscorlib::System::Guid>(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::Guid>(NULL)
			, mscorlib::System::IFormattable(NULL)
			{
				MonoType *__parameter_types__[11];
				void *__parameters__[11];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "UInt32");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "UInt16");
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "UInt16");
				__parameter_types__[3] = Global::GetType("mscorlib", "System", "Byte");
				__parameter_types__[4] = Global::GetType("mscorlib", "System", "Byte");
				__parameter_types__[5] = Global::GetType("mscorlib", "System", "Byte");
				__parameter_types__[6] = Global::GetType("mscorlib", "System", "Byte");
				__parameter_types__[7] = Global::GetType("mscorlib", "System", "Byte");
				__parameter_types__[8] = Global::GetType("mscorlib", "System", "Byte");
				__parameter_types__[9] = Global::GetType("mscorlib", "System", "Byte");
				__parameter_types__[10] = Global::GetType("mscorlib", "System", "Byte");
				__parameters__[0] = &a;
				__parameters__[1] = &b;
				__parameters__[2] = &c;
				__parameters__[3] = (MonoObject*)d;
				__parameters__[4] = (MonoObject*)e;
				__parameters__[5] = (MonoObject*)f;
				__parameters__[6] = (MonoObject*)g;
				__parameters__[7] = (MonoObject*)h;
				__parameters__[8] = (MonoObject*)i;
				__parameters__[9] = (MonoObject*)j;
				__parameters__[10] = (MonoObject*)k;
				__native_object__ = Global::New("mscorlib", "System", "Guid", 11, __parameter_types__, __parameters__);
			};
		
			Guid(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::ValueType(nativeTypeInfo)
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::IComparable<mscorlib::System::Guid>(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::Guid>(NULL)
			, mscorlib::System::IFormattable(NULL)
			{
			};
		
			Guid(MonoObject *nativeObject)
			: mscorlib::System::ValueType(nativeObject)
			, mscorlib::System::IObjectComparable(nativeObject)
			, mscorlib::System::IComparable<mscorlib::System::Guid>(nativeObject)
			, mscorlib::System::IEquatable<mscorlib::System::Guid>(nativeObject)
			, mscorlib::System::IFormattable(nativeObject)
			{
			};
		
			~Guid()
			{
			};
		

			Guid & operator=(Guid &value) { __native_object__ = value.GetNativeObject(); return value; };
			bool operator==(Guid &value) { return mscorlib::System::Object::Equals(value); };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			virtual mscorlib::System::Int32  CompareTo(mscorlib::System::Object value);
			virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object o) override;
			virtual mscorlib::System::Int32  CompareTo(mscorlib::System::Guid value);
			virtual mscorlib::System::Boolean  Equals(mscorlib::System::Guid g);
			virtual mscorlib::System::Int32  GetHashCode() override;
			static mscorlib::System::Guid  NewGuid();
			std::vector<mscorlib::System::Byte*>  ToByteArray();
			virtual mscorlib::System::String  ToString() override;
			mscorlib::System::String  ToString(mscorlib::System::String format);
			mscorlib::System::String  ToString(const char *format);
			virtual mscorlib::System::String  ToString(mscorlib::System::String format, mscorlib::System::IFormatProvider provider);
			virtual mscorlib::System::String  ToString(const char *format, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::Guid  Parse(mscorlib::System::String input);
			static mscorlib::System::Guid  Parse(const char *input);
			static mscorlib::System::Guid  ParseExact(mscorlib::System::String input, mscorlib::System::String format);
			static mscorlib::System::Guid  ParseExact(const char *input, const char *format);
			static mscorlib::System::Boolean  TryParse(mscorlib::System::String input, mscorlib::System::Guid result);
			static mscorlib::System::Boolean  TryParse(const char *input, mscorlib::System::Guid result);
			static mscorlib::System::Boolean  TryParseExact(mscorlib::System::String input, mscorlib::System::String format, mscorlib::System::Guid result);
			static mscorlib::System::Boolean  TryParseExact(const char *input, const char *format, mscorlib::System::Guid result);
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Static Fields
			static Property<mscorlib::System::Guid , mscorlib::System::Guid> Empty;

			//	Get/Set:Empty
			static mscorlib::System::Guid  get_Empty();
			static void set_Empty(mscorlib::System::Guid  value);

		
		protected:
		
		private:
		
		};

	}
}
#endif
