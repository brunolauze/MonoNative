#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_SECURESTRING_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_SECURESTRING_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			class SecureString
				: public mscorlib::System::Object
				, public virtual mscorlib::System::IDisposable
			{
			public:
				SecureString()
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.SecureString"))
				, mscorlib::System::IDisposable(NULL)
				{
					__native_object__ = Global::New("mscorlib", "System.Security", "SecureString");
				};
			
				SecureString(mscorlib::System::Char* value, mscorlib::System::Int32 length)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.SecureString"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Char*");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = value;
					__parameters__[1] = &length;
					__native_object__ = Global::New("mscorlib", "System.Security", "SecureString", 2, __parameter_types__, __parameters__);
				};
			
				SecureString(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::IDisposable(NULL)
				{
				};
			
				SecureString(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::IDisposable(nativeObject)
				{
				};
			
				~SecureString()
				{
				};
			

				SecureString & operator=(SecureString &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(SecureString &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				void  AppendChar(mscorlib::System::Char c);
				void  Clear();
				mscorlib::System::Security::SecureString  Copy();
				virtual void  Dispose();
				void  InsertAt(mscorlib::System::Int32 index, mscorlib::System::Char c);
				mscorlib::System::Boolean  IsReadOnly();
				void  MakeReadOnly();
				void  RemoveAt(mscorlib::System::Int32 index);
				void  SetAt(mscorlib::System::Int32 index, mscorlib::System::Char c);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Length)) mscorlib::System::Int32  Length;

				//Get Set Properties Methods
				//	Get:Length
				mscorlib::System::Int32  get_Length() const;

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
