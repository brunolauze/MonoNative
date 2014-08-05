#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_MULTICASTDELEGATE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_MULTICASTDELEGATE_H

#include <mscorlib/System/mscorlib_System_Delegate.h>
#include <mscorlib/System/mscorlib_System_ICloneable.h>
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
		namespace Reflection
		{

			class MethodInfo;
			

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

		class MulticastDelegate
			: public mscorlib::System::Delegate
			, public virtual mscorlib::System::ICloneable
			, public virtual mscorlib::System::Runtime::Serialization::ISerializable
		{
		public:
			MulticastDelegate(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::Delegate(nativeTypeInfo)
			, mscorlib::System::ICloneable(NULL)
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			{
			};
		
			MulticastDelegate(MonoObject *nativeObject)
			: mscorlib::System::Delegate(nativeObject)
			, mscorlib::System::ICloneable(nativeObject)
			, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
			{
			};
		
			~MulticastDelegate()
			{
			};
		

			MulticastDelegate & operator=(MulticastDelegate &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			virtual void  GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context) override;
			virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
			virtual mscorlib::System::Int32  GetHashCode() override;
			virtual std::vector<mscorlib::System::Delegate*>  GetInvocationList() override;
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Properties
			__declspec(property(get=get_Method)) mscorlib::System::Reflection::MethodInfo  Method;
			__declspec(property(get=get_Target)) mscorlib::System::Object  Target;

			//Get Set Properties Methods
			//	Get:Method
			mscorlib::System::Reflection::MethodInfo  get_Method() const;

			//	Get:Target
			mscorlib::System::Object  get_Target() const;

		
		protected:
		
		private:
		
		};

	}
}
#endif
