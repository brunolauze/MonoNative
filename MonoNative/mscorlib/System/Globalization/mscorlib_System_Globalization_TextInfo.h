#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_TEXTINFO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_TEXTINFO_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_IDeserializationCallback.h>
#include <mscorlib/System/mscorlib_System_ICloneable.h>

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
		namespace Globalization
		{

			class TextInfo
				: public mscorlib::System::Object
				, public virtual mscorlib::System::Runtime::Serialization::IDeserializationCallback
				, public virtual mscorlib::System::ICloneable
			{
			public:
				TextInfo(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
				, mscorlib::System::ICloneable(NULL)
				{
				};
			
				TextInfo(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(nativeObject)
				, mscorlib::System::ICloneable(nativeObject)
				{
				};
			
				~TextInfo()
				{
				};
			

				TextInfo & operator=(TextInfo &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
				virtual mscorlib::System::Int32  GetHashCode() override;
				virtual mscorlib::System::String  ToString() override;
				mscorlib::System::String  ToTitleCase(mscorlib::System::String str);
				virtual mscorlib::System::Char  ToLower(mscorlib::System::Char c);
				virtual mscorlib::System::Char  ToUpper(mscorlib::System::Char c);
				virtual mscorlib::System::String  ToLower(mscorlib::System::String str);
				virtual mscorlib::System::String  ToUpper(mscorlib::System::String str);
				static mscorlib::System::Globalization::TextInfo  ReadOnly(mscorlib::System::Globalization::TextInfo textInfo);
				virtual mscorlib::System::Object  Clone();
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_ANSICodePage)) mscorlib::System::Int32  ANSICodePage;
				__declspec(property(get=get_EBCDICCodePage)) mscorlib::System::Int32  EBCDICCodePage;
				__declspec(property(get=get_LCID)) mscorlib::System::Int32  LCID;
				__declspec(property(get=get_ListSeparator, put=set_ListSeparator)) mscorlib::System::String  ListSeparator;
				__declspec(property(get=get_MacCodePage)) mscorlib::System::Int32  MacCodePage;
				__declspec(property(get=get_OEMCodePage)) mscorlib::System::Int32  OEMCodePage;
				__declspec(property(get=get_CultureName)) mscorlib::System::String  CultureName;
				__declspec(property(get=get_IsReadOnly)) mscorlib::System::Boolean  IsReadOnly;
				__declspec(property(get=get_IsRightToLeft)) mscorlib::System::Boolean  IsRightToLeft;

				//Get Set Properties Methods
				//	Get:ANSICodePage
				mscorlib::System::Int32  get_ANSICodePage();

				//	Get:EBCDICCodePage
				mscorlib::System::Int32  get_EBCDICCodePage();

				//	Get:LCID
				mscorlib::System::Int32  get_LCID();

				//	Get/Set:ListSeparator
				mscorlib::System::String  get_ListSeparator();
				void set_ListSeparator(mscorlib::System::String  value);

				//	Get:MacCodePage
				mscorlib::System::Int32  get_MacCodePage();

				//	Get:OEMCodePage
				mscorlib::System::Int32  get_OEMCodePage();

				//	Get:CultureName
				mscorlib::System::String  get_CultureName();

				//	Get:IsReadOnly
				mscorlib::System::Boolean  get_IsReadOnly();

				//	Get:IsRightToLeft
				mscorlib::System::Boolean  get_IsRightToLeft();

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
