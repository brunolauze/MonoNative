#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_MARSHALBYREFOBJECT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_MARSHALBYREFOBJECT_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{

				class ObjRef;
				

			}
		}
	}
}
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

		class MarshalByRefObject
			: public mscorlib::System::Object
		{
		public:
			MarshalByRefObject(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::Object(nativeTypeInfo)
			{
			};
		
			MarshalByRefObject(MonoObject *nativeObject)
			: mscorlib::System::Object(nativeObject)
			{
			};
		
			~MarshalByRefObject()
			{
			};
		

			MarshalByRefObject & operator=(MarshalByRefObject &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			virtual mscorlib::System::Runtime::Remoting::ObjRef  CreateObjRef(mscorlib::System::Type requestedType);
			virtual mscorlib::System::Object  GetLifetimeService();
			virtual mscorlib::System::Object  InitializeLifetimeService();
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


		
		protected:
		
		private:
		
		};

	}
}
#endif
