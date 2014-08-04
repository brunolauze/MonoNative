#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_TEXT_ENCODINGINFO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_TEXT_ENCODINGINFO_H

#include <mscorlib/System/mscorlib_System_Object.h>

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
		namespace Text
		{

			class Encoding;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Text
		{

			class EncodingInfo
				: public mscorlib::System::Object
			{
			public:
				EncodingInfo(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				EncodingInfo(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~EncodingInfo()
				{
				};
			

				EncodingInfo & operator=(EncodingInfo &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object value) override;
				virtual mscorlib::System::Int32  GetHashCode() override;
				mscorlib::System::Text::Encoding  GetEncoding();
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_CodePage)) mscorlib::System::Int32  CodePage;
				__declspec(property(get=get_DisplayName)) mscorlib::System::String  DisplayName;
				__declspec(property(get=get_Name)) mscorlib::System::String  Name;

				//Get Set Properties Methods
				//	Get:CodePage
				mscorlib::System::Int32  get_CodePage();

				//	Get:DisplayName
				mscorlib::System::String  get_DisplayName();

				//	Get:Name
				mscorlib::System::String  get_Name();

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
