#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_CHARENUMERATOR_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_CHARENUMERATOR_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_ICloneable.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerator.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerator_1.h>

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

		class CharEnumerator
			: public mscorlib::System::Object
			, public virtual mscorlib::System::ICloneable
			, public virtual mscorlib::System::Collections::IEnumerator
			, public virtual mscorlib::System::IDisposable
			, public virtual mscorlib::System::Collections::Generic::IEnumerator<mscorlib::System::Char>
		{
		public:
			CharEnumerator(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::Object(nativeTypeInfo)
			, mscorlib::System::ICloneable(NULL)
			, mscorlib::System::Collections::IEnumerator(NULL)
			, mscorlib::System::IDisposable(NULL)
			, mscorlib::System::Collections::Generic::IEnumerator<mscorlib::System::Char>(NULL)
			{
			};
		
			CharEnumerator(MonoObject *nativeObject)
			: mscorlib::System::Object(nativeObject)
			, mscorlib::System::ICloneable(nativeObject)
			, mscorlib::System::Collections::IEnumerator(nativeObject)
			, mscorlib::System::IDisposable(nativeObject)
			, mscorlib::System::Collections::Generic::IEnumerator<mscorlib::System::Char>(nativeObject)
			{
			};
		
			~CharEnumerator()
			{
			};
		

			CharEnumerator & operator=(CharEnumerator &value) { __native_object__ = value.GetNativeObject(); return value; };
			bool operator==(CharEnumerator &value) { return mscorlib::System::Object::Equals(value); };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			virtual void  Dispose();
			virtual mscorlib::System::Object  Clone();
			virtual mscorlib::System::Boolean  MoveNext();
			virtual void  Reset();
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Properties
			__declspec(property(get=get_Current)) mscorlib::System::Char  Current;

			//Get Set Properties Methods
			//	Get:Current
			mscorlib::System::Char  get_Current() const;

		
		protected:
		
		private:
		
		};

	}
}
#endif
