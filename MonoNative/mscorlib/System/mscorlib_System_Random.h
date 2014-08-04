#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RANDOM_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RANDOM_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Byte;
		class Type;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{

		class Random
			: public mscorlib::System::Object
		{
		public:
			Random()
			: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Random"))
			{
				__native_object__ = Global::New("mscorlib", "System", "Random");
			};
		
			Random(mscorlib::System::Int32 Seed)
			: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Random"))
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
				__parameters__[0] = &Seed;
				__native_object__ = Global::New("mscorlib", "System", "Random", 1, __parameter_types__, __parameters__);
			};
		
			Random(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::Object(nativeTypeInfo)
			{
			};
		
			Random(MonoObject *nativeObject)
			: mscorlib::System::Object(nativeObject)
			{
			};
		
			~Random()
			{
			};
		

			Random & operator=(Random &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			virtual mscorlib::System::Int32  Next(mscorlib::System::Int32 minValue, mscorlib::System::Int32 maxValue);
			virtual mscorlib::System::Int32  Next(mscorlib::System::Int32 maxValue);
			virtual mscorlib::System::Int32  Next();
			virtual void  NextBytes(std::vector<mscorlib::System::Byte*> buffer);
			virtual mscorlib::System::Double  NextDouble();
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


		
		protected:
		
		private:
		
		};

	}
}
#endif
