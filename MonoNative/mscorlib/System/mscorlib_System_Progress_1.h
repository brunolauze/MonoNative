#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_PROGRESS_1_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_PROGRESS_1_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_IProgress_1.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>

namespace mscorlib
{
	namespace System
	{

		template<typename T>
		class Progress
			: public mscorlib::System::Object
			, public virtual mscorlib::System::IProgress<T>
		{
		public:
			Progress()
			: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Progress`1"))
			, mscorlib::System::IProgress<T>(NULL)
			{
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				__native_object__ = Global::New("mscorlib", "System", "Progress`1", 1, __generic_types__, 0, NULL, NULL);
			};
		
			Progress(mscorlib::Callback<void  (T )> handler)
			: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Progress`1"))
			, mscorlib::System::IProgress<T>(NULL)
			{
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Action`1");
				__parameters__[0] = &handler;
				__native_object__ = Global::New("mscorlib", "System", "Progress`1", 1, __generic_types__, __parameters__);
			};
		
			Progress(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::Object(nativeTypeInfo)
			, mscorlib::System::IProgress<T>(NULL)
			{
			};
		
			Progress(MonoObject *nativeObject)
			: mscorlib::System::Object(nativeObject)
			, mscorlib::System::IProgress<T>(nativeObject)
			{
			};
		
			~Progress()
			{
			};
		

			Progress & operator=(Progress &value) { __native_object__ = value.GetNativeObject(); return value; };
			bool operator==(Progress &value) { return mscorlib::System::Object::Equals(value); };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


		
		protected:
		
		private:
		
		};

	}
}
#endif
