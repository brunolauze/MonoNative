#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_ARGITERATOR_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_ARGITERATOR_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/mscorlib_System_RuntimeArgumentHandle.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class TypedReference;
		class RuntimeTypeHandle;
		class String;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{

		class ArgIterator
			: public mscorlib::System::ValueType
		{
		public:
			ArgIterator(mscorlib::System::RuntimeArgumentHandle arglist)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.ArgIterator"))
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "RuntimeArgumentHandle");
				__parameters__[0] = (MonoObject*)arglist;
				__native_object__ = Global::New("mscorlib", "System", "ArgIterator", 1, __parameter_types__, __parameters__);
			};
		
			ArgIterator(mscorlib::System::RuntimeArgumentHandle arglist, void*ptr)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.ArgIterator"))
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "RuntimeArgumentHandle");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "Void*");
				__parameters__[0] = (MonoObject*)arglist;
				__parameters__[1] = ptr;
				__native_object__ = Global::New("mscorlib", "System", "ArgIterator", 2, __parameter_types__, __parameters__);
			};
		
			ArgIterator(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::ValueType(nativeTypeInfo)
			{
			};
		
			ArgIterator(MonoObject *nativeObject)
			: mscorlib::System::ValueType(nativeObject)
			{
			};
		
			~ArgIterator()
			{
			};
		

			ArgIterator & operator=(ArgIterator &value) { __native_object__ = value.GetNativeObject(); return value; };
			bool operator==(ArgIterator &value) { return mscorlib::System::Object::Equals(value); };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			void  End();
			virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object o) override;
			virtual mscorlib::System::Int32  GetHashCode() override;
			mscorlib::System::TypedReference  GetNextArg();
			mscorlib::System::TypedReference  GetNextArg(mscorlib::System::RuntimeTypeHandle rth);
			mscorlib::System::RuntimeTypeHandle  GetNextArgType();
			mscorlib::System::Int32  GetRemainingCount();
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


		
		protected:
		
		private:
		
		};

	}
}
#endif
