#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_LOCALDATASTORESLOT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_LOCALDATASTORESLOT_H

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

		class LocalDataStoreSlot
			: public mscorlib::System::Object
		{
		public:
			LocalDataStoreSlot(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::Object(nativeTypeInfo)
			{
			};
		
			LocalDataStoreSlot(MonoObject *nativeObject)
			: mscorlib::System::Object(nativeObject)
			{
			};
		
			~LocalDataStoreSlot()
			{
			};
		

			LocalDataStoreSlot & operator=(LocalDataStoreSlot &value) { __native_object__ = value.GetNativeObject(); return value; };
			bool operator==(LocalDataStoreSlot &value) { return mscorlib::System::Object::Equals(value); };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


		
		protected:
		
		private:
		
		};

	}
}
#endif
