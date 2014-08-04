#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_CONTEXTBOUNDOBJECT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_CONTEXTBOUNDOBJECT_H

#include <mscorlib/System/mscorlib_System_MarshalByRefObject.h>
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

		class ContextBoundObject
			: public mscorlib::System::MarshalByRefObject
		{
		public:
			ContextBoundObject(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::MarshalByRefObject(nativeTypeInfo)
			{
			};
		
			ContextBoundObject(MonoObject *nativeObject)
			: mscorlib::System::MarshalByRefObject(nativeObject)
			{
			};
		
			~ContextBoundObject()
			{
			};
		

			ContextBoundObject & operator=(ContextBoundObject &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


		
		protected:
		
		private:
		
		};

	}
}
#endif
