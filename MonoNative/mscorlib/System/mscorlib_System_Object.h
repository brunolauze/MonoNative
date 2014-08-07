#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_OBJECT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_OBJECT_H

#include <Global.h>

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

		class Object
		{
		public:
			Object()
			{
				__native_object__ = Global::New("mscorlib", "System", "Object");
			};
		
			Object(mscorlib::NativeTypeInfo *nativeTypeInfo)
			{
				__native_object__ = NULL;
				__native_type_info__ = nativeTypeInfo;
			};
		
			Object(MonoObject *nativeObject)
			{
				__native_object__ = nativeObject;
			};
		
			~Object()
			{
				__native_object__ = NULL;
				__native_type_info__ = NULL;
			};
		

			Object & operator=(Object &value) { __native_object__ = value.GetNativeObject(); return value; };
			bool operator==(Object &value) { return mscorlib::System::Object::Equals(value); };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj);
			static mscorlib::System::Boolean  Equals(mscorlib::System::Object objA, mscorlib::System::Object objB);
			virtual mscorlib::System::Int32  GetHashCode();
			mscorlib::System::Type  GetType();
			virtual mscorlib::System::String  ToString();
			static mscorlib::System::Boolean  ReferenceEquals(mscorlib::System::Object objA, mscorlib::System::Object objB);
			virtual MonoObject* GetNativeObject()  { return __native_object__; };


		
		protected:
			MonoObject *__native_object__;
			mscorlib::NativeTypeInfo *__native_type_info__;
		
		private:
		
		};

	}
}
#endif
