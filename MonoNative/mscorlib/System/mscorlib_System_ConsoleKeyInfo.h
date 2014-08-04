#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_CONSOLEKEYINFO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_CONSOLEKEYINFO_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/mscorlib_System_ConsoleKey.h>
#include <mscorlib/System/mscorlib_System_ConsoleModifiers.h>
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

		class ConsoleKeyInfo
			: public mscorlib::System::ValueType
		{
		public:
			ConsoleKeyInfo(mscorlib::System::Char keyChar, mscorlib::System::ConsoleKey::__ENUM__ key, mscorlib::System::Boolean shift, mscorlib::System::Boolean alt, mscorlib::System::Boolean control)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.ConsoleKeyInfo"))
			{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Char");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "ConsoleKey");
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "Boolean");
				__parameter_types__[3] = Global::GetType("mscorlib", "System", "Boolean");
				__parameter_types__[4] = Global::GetType("mscorlib", "System", "Boolean");
				__parameters__[0] = &keyChar;
				__parameters__[1] = reinterpret_cast<void*>(key);
				__parameters__[2] = reinterpret_cast<void*>(shift);
				__parameters__[3] = reinterpret_cast<void*>(alt);
				__parameters__[4] = reinterpret_cast<void*>(control);
				__native_object__ = Global::New("mscorlib", "System", "ConsoleKeyInfo", 5, __parameter_types__, __parameters__);
			};
		
			ConsoleKeyInfo(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::ValueType(nativeTypeInfo)
			{
			};
		
			ConsoleKeyInfo(MonoObject *nativeObject)
			: mscorlib::System::ValueType(nativeObject)
			{
			};
		
			~ConsoleKeyInfo()
			{
			};
		

			ConsoleKeyInfo & operator=(ConsoleKeyInfo &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object value) override;
			mscorlib::System::Boolean  Equals(mscorlib::System::ConsoleKeyInfo obj);
			virtual mscorlib::System::Int32  GetHashCode() override;
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Properties
			__declspec(property(get=get_Key)) mscorlib::System::ConsoleKey::__ENUM__  Key;
			__declspec(property(get=get_KeyChar)) mscorlib::System::Char  KeyChar;
			__declspec(property(get=get_Modifiers)) mscorlib::System::ConsoleModifiers::__ENUM__  Modifiers;

			//Get Set Properties Methods
			//	Get:Key
			mscorlib::System::ConsoleKey::__ENUM__  get_Key();

			//	Get:KeyChar
			mscorlib::System::Char  get_KeyChar();

			//	Get:Modifiers
			mscorlib::System::ConsoleModifiers::__ENUM__  get_Modifiers();

		
		protected:
		
		private:
		
		};

	}
}
#endif
