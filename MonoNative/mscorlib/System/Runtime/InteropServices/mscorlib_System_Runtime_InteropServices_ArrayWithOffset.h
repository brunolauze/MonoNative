#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_ARRAYWITHOFFSET_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_ARRAYWITHOFFSET_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
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
		namespace Runtime
		{
			namespace InteropServices
			{

				class ArrayWithOffset
					: public mscorlib::System::ValueType
				{
				public:
					ArrayWithOffset(mscorlib::System::Object array, mscorlib::System::Int32 offset)
					: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.InteropServices.ArrayWithOffset"))
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Object");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
						__parameters__[0] = (MonoObject*)array;
						__parameters__[1] = &offset;
						__native_object__ = Global::New("mscorlib", "System.Runtime.InteropServices", "ArrayWithOffset", 2, __parameter_types__, __parameters__);
					};
				
					ArrayWithOffset(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::ValueType(nativeTypeInfo)
					{
					};
				
					ArrayWithOffset(MonoObject *nativeObject)
					: mscorlib::System::ValueType(nativeObject)
					{
					};
				
					~ArrayWithOffset()
					{
					};
				

					ArrayWithOffset & operator=(ArrayWithOffset &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(ArrayWithOffset &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
					mscorlib::System::Boolean  Equals(mscorlib::System::Runtime::InteropServices::ArrayWithOffset obj);
					virtual mscorlib::System::Int32  GetHashCode() override;
					mscorlib::System::Object  GetArray();
					mscorlib::System::Int32  GetOffset();
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
