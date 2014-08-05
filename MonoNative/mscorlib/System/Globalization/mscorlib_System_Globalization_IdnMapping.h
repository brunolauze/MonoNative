#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_IDNMAPPING_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_IDNMAPPING_H

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
		namespace Globalization
		{

			class IdnMapping
				: public mscorlib::System::Object
			{
			public:
				IdnMapping()
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Globalization.IdnMapping"))
				{
					__native_object__ = Global::New("mscorlib", "System.Globalization", "IdnMapping");
				};
			
				IdnMapping(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				IdnMapping(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~IdnMapping()
				{
				};
			

				IdnMapping & operator=(IdnMapping &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
				virtual mscorlib::System::Int32  GetHashCode() override;
				mscorlib::System::String  GetAscii(mscorlib::System::String unicode);
				mscorlib::System::String  GetAscii(const char *unicode);
				mscorlib::System::String  GetAscii(mscorlib::System::String unicode, mscorlib::System::Int32 index);
				mscorlib::System::String  GetAscii(const char *unicode, mscorlib::System::Int32 index);
				mscorlib::System::String  GetAscii(mscorlib::System::String unicode, mscorlib::System::Int32 index, mscorlib::System::Int32 count);
				mscorlib::System::String  GetAscii(const char *unicode, mscorlib::System::Int32 index, mscorlib::System::Int32 count);
				mscorlib::System::String  GetUnicode(mscorlib::System::String ascii);
				mscorlib::System::String  GetUnicode(const char *ascii);
				mscorlib::System::String  GetUnicode(mscorlib::System::String ascii, mscorlib::System::Int32 index);
				mscorlib::System::String  GetUnicode(const char *ascii, mscorlib::System::Int32 index);
				mscorlib::System::String  GetUnicode(mscorlib::System::String ascii, mscorlib::System::Int32 index, mscorlib::System::Int32 count);
				mscorlib::System::String  GetUnicode(const char *ascii, mscorlib::System::Int32 index, mscorlib::System::Int32 count);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_AllowUnassigned, put=set_AllowUnassigned)) mscorlib::System::Boolean  AllowUnassigned;
				__declspec(property(get=get_UseStd3AsciiRules, put=set_UseStd3AsciiRules)) mscorlib::System::Boolean  UseStd3AsciiRules;

				//Get Set Properties Methods
				//	Get/Set:AllowUnassigned
				mscorlib::System::Boolean  get_AllowUnassigned() const;
				void set_AllowUnassigned(mscorlib::System::Boolean  value);

				//	Get/Set:UseStd3AsciiRules
				mscorlib::System::Boolean  get_UseStd3AsciiRules() const;
				void set_UseStd3AsciiRules(mscorlib::System::Boolean  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
