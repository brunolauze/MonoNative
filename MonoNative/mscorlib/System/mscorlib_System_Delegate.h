#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DELEGATE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DELEGATE_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_ICloneable.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>

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

		class Type;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{

		class Delegate
			: public mscorlib::System::Object
			, public virtual mscorlib::System::ICloneable
			, public virtual mscorlib::System::Runtime::Serialization::ISerializable
		{
		public:
			Delegate(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::Object(nativeTypeInfo)
			, mscorlib::System::ICloneable(NULL)
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			{
			};
		
			Delegate(MonoObject *nativeObject)
			: mscorlib::System::Object(nativeObject)
			, mscorlib::System::ICloneable(nativeObject)
			, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
			{
			};
		
			~Delegate()
			{
			};
		

			Delegate & operator=(Delegate &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			static mscorlib::System::Delegate  CreateDelegate(mscorlib::System::Type type, mscorlib::System::Object firstArgument, mscorlib::System::Reflection::MethodInfo method, mscorlib::System::Boolean throwOnBindFailure);
			static mscorlib::System::Delegate  CreateDelegate(mscorlib::System::Type type, mscorlib::System::Object firstArgument, mscorlib::System::Reflection::MethodInfo method);
			static mscorlib::System::Delegate  CreateDelegate(mscorlib::System::Type type, mscorlib::System::Reflection::MethodInfo method, mscorlib::System::Boolean throwOnBindFailure);
			static mscorlib::System::Delegate  CreateDelegate(mscorlib::System::Type type, mscorlib::System::Reflection::MethodInfo method);
			static mscorlib::System::Delegate  CreateDelegate(mscorlib::System::Type type, mscorlib::System::Object target, mscorlib::System::String method);
			static mscorlib::System::Delegate  CreateDelegate(mscorlib::System::Type type, mscorlib::System::Object target, const char *method);
			static mscorlib::System::Delegate  CreateDelegate(mscorlib::System::Type type, mscorlib::System::Type target, mscorlib::System::String method, mscorlib::System::Boolean ignoreCase, mscorlib::System::Boolean throwOnBindFailure);
			static mscorlib::System::Delegate  CreateDelegate(mscorlib::System::Type type, mscorlib::System::Type target, const char *method, mscorlib::System::Boolean ignoreCase, mscorlib::System::Boolean throwOnBindFailure);
			static mscorlib::System::Delegate  CreateDelegate(mscorlib::System::Type type, mscorlib::System::Type target, mscorlib::System::String method);
			static mscorlib::System::Delegate  CreateDelegate(mscorlib::System::Type type, mscorlib::System::Type target, const char *method);
			static mscorlib::System::Delegate  CreateDelegate(mscorlib::System::Type type, mscorlib::System::Type target, mscorlib::System::String method, mscorlib::System::Boolean ignoreCase);
			static mscorlib::System::Delegate  CreateDelegate(mscorlib::System::Type type, mscorlib::System::Type target, const char *method, mscorlib::System::Boolean ignoreCase);
			static mscorlib::System::Delegate  CreateDelegate(mscorlib::System::Type type, mscorlib::System::Object target, mscorlib::System::String method, mscorlib::System::Boolean ignoreCase, mscorlib::System::Boolean throwOnBindFailure);
			static mscorlib::System::Delegate  CreateDelegate(mscorlib::System::Type type, mscorlib::System::Object target, const char *method, mscorlib::System::Boolean ignoreCase, mscorlib::System::Boolean throwOnBindFailure);
			static mscorlib::System::Delegate  CreateDelegate(mscorlib::System::Type type, mscorlib::System::Object target, mscorlib::System::String method, mscorlib::System::Boolean ignoreCase);
			static mscorlib::System::Delegate  CreateDelegate(mscorlib::System::Type type, mscorlib::System::Object target, const char *method, mscorlib::System::Boolean ignoreCase);
			mscorlib::System::Object  DynamicInvoke(std::vector<mscorlib::System::Object*> args);
			virtual mscorlib::System::Object  Clone();
			virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
			virtual mscorlib::System::Int32  GetHashCode() override;
			virtual void  GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context);
			virtual std::vector<mscorlib::System::Delegate*>  GetInvocationList();
			static mscorlib::System::Delegate  Combine(mscorlib::System::Delegate a, mscorlib::System::Delegate b);
			static mscorlib::System::Delegate  Combine(std::vector<mscorlib::System::Delegate*> delegates);
			static mscorlib::System::Delegate  Remove(mscorlib::System::Delegate source, mscorlib::System::Delegate value);
			static mscorlib::System::Delegate  RemoveAll(mscorlib::System::Delegate source, mscorlib::System::Delegate value);
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
