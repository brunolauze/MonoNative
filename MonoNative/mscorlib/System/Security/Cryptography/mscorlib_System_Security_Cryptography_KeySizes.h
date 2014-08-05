#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_KEYSIZES_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_KEYSIZES_H

#include <mscorlib/System/mscorlib_System_Object.h>

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
			namespace Cryptography
			{

				class KeySizes
					: public mscorlib::System::Object
				{
				public:
					KeySizes(mscorlib::System::Int32 minSize, mscorlib::System::Int32 maxSize, mscorlib::System::Int32 skipSize)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.KeySizes"))
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
						__parameters__[0] = &minSize;
						__parameters__[1] = &maxSize;
						__parameters__[2] = &skipSize;
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "KeySizes", 3, __parameter_types__, __parameters__);
					};
				
					KeySizes(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					KeySizes(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~KeySizes()
					{
					};
				

					KeySizes & operator=(KeySizes &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_MaxSize)) mscorlib::System::Int32  MaxSize;
					__declspec(property(get=get_MinSize)) mscorlib::System::Int32  MinSize;
					__declspec(property(get=get_SkipSize)) mscorlib::System::Int32  SkipSize;

					//Get Set Properties Methods
					//	Get:MaxSize
					mscorlib::System::Int32  get_MaxSize() const;

					//	Get:MinSize
					mscorlib::System::Int32  get_MinSize() const;

					//	Get:SkipSize
					mscorlib::System::Int32  get_SkipSize() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
