#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_OBJECTIDGENERATOR_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_OBJECTIDGENERATOR_H

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
		namespace Runtime
		{
			namespace Serialization
			{

				class ObjectIDGenerator
					: public mscorlib::System::Object
				{
				public:
					ObjectIDGenerator()
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Serialization.ObjectIDGenerator"))
					{
						__native_object__ = Global::New("mscorlib", "System.Runtime.Serialization", "ObjectIDGenerator");
					};
				
					ObjectIDGenerator(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					ObjectIDGenerator(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~ObjectIDGenerator()
					{
					};
				

					ObjectIDGenerator & operator=(ObjectIDGenerator &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Int64  GetId(mscorlib::System::Object obj, mscorlib::System::Boolean firstTime);
					virtual mscorlib::System::Int64  HasId(mscorlib::System::Object obj, mscorlib::System::Boolean firstTime);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
