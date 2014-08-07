#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_TYPEDREFERENCE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_TYPEDREFERENCE_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Type;
		class RuntimeTypeHandle;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class FieldInfo;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class TypedReference
			: public mscorlib::System::ValueType
		{
		public:
			TypedReference(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::ValueType(nativeTypeInfo)
			{
			};
		
			TypedReference(MonoObject *nativeObject)
			: mscorlib::System::ValueType(nativeObject)
			{
			};
		
			~TypedReference()
			{
			};
		

			TypedReference & operator=(TypedReference &value) { __native_object__ = value.GetNativeObject(); return value; };
			bool operator==(TypedReference &value) { return mscorlib::System::Object::Equals(value); };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object o) override;
			virtual mscorlib::System::Int32  GetHashCode() override;
			static mscorlib::System::Type  GetTargetType(mscorlib::System::TypedReference value);
			static mscorlib::System::TypedReference  MakeTypedReference(mscorlib::System::Object target, std::vector<mscorlib::System::Reflection::FieldInfo*> flds);
			static void  SetTypedReference(mscorlib::System::TypedReference target, mscorlib::System::Object value);
			static mscorlib::System::RuntimeTypeHandle  TargetTypeToken(mscorlib::System::TypedReference value);
			static mscorlib::System::Object  ToObject(mscorlib::System::TypedReference value);
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


		
		protected:
		
		private:
		
		};

	}
}
#endif
