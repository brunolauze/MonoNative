#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_STRINGINFO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_STRINGINFO_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_String.h>

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
		namespace Globalization
		{

			class TextElementEnumerator;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			class StringInfo
				: public mscorlib::System::Object
			{
			public:
				StringInfo()
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Globalization.StringInfo"))
				{
					__native_object__ = Global::New("mscorlib", "System.Globalization", "StringInfo");
				};
			
				StringInfo(mscorlib::System::String value)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Globalization.StringInfo"))
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)value;
					__native_object__ = Global::New("mscorlib", "System.Globalization", "StringInfo", 1, __parameter_types__, __parameters__);
				};
			
				StringInfo(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				StringInfo(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~StringInfo()
				{
				};
			

				StringInfo & operator=(StringInfo &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(StringInfo &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object value) override;
				virtual mscorlib::System::Int32  GetHashCode() override;
				mscorlib::System::String  SubstringByTextElements(mscorlib::System::Int32 startingTextElement);
				mscorlib::System::String  SubstringByTextElements(mscorlib::System::Int32 startingTextElement, mscorlib::System::Int32 lengthInTextElements);
				static mscorlib::System::String  GetNextTextElement(mscorlib::System::String str);
				static mscorlib::System::String  GetNextTextElement(const char *str);
				static mscorlib::System::String  GetNextTextElement(mscorlib::System::String str, mscorlib::System::Int32 index);
				static mscorlib::System::String  GetNextTextElement(const char *str, mscorlib::System::Int32 index);
				static mscorlib::System::Globalization::TextElementEnumerator  GetTextElementEnumerator(mscorlib::System::String str);
				static mscorlib::System::Globalization::TextElementEnumerator  GetTextElementEnumerator(const char *str);
				static mscorlib::System::Globalization::TextElementEnumerator  GetTextElementEnumerator(mscorlib::System::String str, mscorlib::System::Int32 index);
				static mscorlib::System::Globalization::TextElementEnumerator  GetTextElementEnumerator(const char *str, mscorlib::System::Int32 index);
				static std::vector<mscorlib::System::Int32*>  ParseCombiningCharacters(mscorlib::System::String str);
				static std::vector<mscorlib::System::Int32*>  ParseCombiningCharacters(const char *str);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_LengthInTextElements)) mscorlib::System::Int32  LengthInTextElements;
				__declspec(property(get=get_String, put=set_String)) mscorlib::System::String  String;

				//Get Set Properties Methods
				//	Get:LengthInTextElements
				mscorlib::System::Int32  get_LengthInTextElements() const;

				//	Get/Set:String
				mscorlib::System::String  get_String() const;
				void set_String(mscorlib::System::String  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
