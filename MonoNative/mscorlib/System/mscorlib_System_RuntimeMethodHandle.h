#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIMEMETHODHANDLE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIMEMETHODHANDLE_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				class SerializationInfo;
				class StreamingContext;
				

			}
		}
	}
}
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

		class RuntimeMethodHandle
			: public mscorlib::System::ValueType
			, public virtual mscorlib::System::Runtime::Serialization::ISerializable
		{
		public:
			RuntimeMethodHandle(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::ValueType(nativeTypeInfo)
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			{
			};
		
			RuntimeMethodHandle(MonoObject *nativeObject)
			: mscorlib::System::ValueType(nativeObject)
			, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
			{
			};
		
			~RuntimeMethodHandle()
			{
			};
		

			RuntimeMethodHandle & operator=(RuntimeMethodHandle &value) { __native_object__ = value.GetNativeObject(); return value; };
			bool operator==(RuntimeMethodHandle &value) { return mscorlib::System::Object::Equals(value); };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			virtual void  GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context);
			mscorlib::System::IntPtr  GetFunctionPointer();
			virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
			mscorlib::System::Boolean  Equals(mscorlib::System::RuntimeMethodHandle handle);
			virtual mscorlib::System::Int32  GetHashCode() override;
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Properties
			__declspec(property(get=get_Value)) mscorlib::System::IntPtr  Value;

			//Get Set Properties Methods
			//	Get:Value
			mscorlib::System::IntPtr  get_Value() const;

		
		protected:
		
		private:
		
		};

	}
}
#endif
