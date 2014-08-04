#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_INTERNALRM_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_INTERNALRM_H

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
				namespace Formatters
				{

					class InternalRM
						: public mscorlib::System::Object
					{
					public:
						InternalRM()
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Serialization.Formatters.InternalRM"))
						{
							__native_object__ = Global::New("mscorlib", "System.Runtime.Serialization.Formatters", "InternalRM");
						};
					
						InternalRM(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Object(nativeTypeInfo)
						{
						};
					
						InternalRM(MonoObject *nativeObject)
						: mscorlib::System::Object(nativeObject)
						{
						};
					
						~InternalRM()
						{
						};
					

						InternalRM & operator=(InternalRM &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						static void  InfoSoap(std::vector<mscorlib::System::Object*> messages);
						static mscorlib::System::Boolean  SoapCheckEnabled();
						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
