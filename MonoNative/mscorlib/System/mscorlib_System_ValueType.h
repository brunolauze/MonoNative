#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_VALUETYPE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_VALUETYPE_H

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

		class ValueType
			: public mscorlib::System::Object
		{
		public:
			ValueType(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::Object(nativeTypeInfo)
			{
			};
		
			ValueType(MonoObject *nativeObject)
			: mscorlib::System::Object(nativeObject)
			{
			};
		
			~ValueType()
			{
			};
		

			ValueType & operator=(ValueType &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
			virtual mscorlib::System::Int32  GetHashCode() override;
			virtual mscorlib::System::String  ToString() override;
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


		
		protected:
		
		private:
		
		};

	}
}
#endif
