#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_WEAKREFERENCE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_WEAKREFERENCE_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>

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

		class WeakReferenceBase
			: public mscorlib::System::Object
			, public virtual mscorlib::System::Runtime::Serialization::ISerializable
		{
		public:
			WeakReferenceBase(mscorlib::System::Object target)
			: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.WeakReference"))
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Object");
				__parameters__[0] = (MonoObject*)target;
				__native_object__ = Global::New("mscorlib", "System", "WeakReference", 1, __parameter_types__, __parameters__);
			};
		
			WeakReferenceBase(mscorlib::System::Object target, mscorlib::System::Boolean trackResurrection)
			: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.WeakReference"))
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Object");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "Boolean");
				__parameters__[0] = (MonoObject*)target;
				__parameters__[1] = reinterpret_cast<void*>(trackResurrection);
				__native_object__ = Global::New("mscorlib", "System", "WeakReference", 2, __parameter_types__, __parameters__);
			};
		
			WeakReferenceBase(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::Object(nativeTypeInfo)
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			{
			};
		
			WeakReferenceBase(MonoObject *nativeObject)
			: mscorlib::System::Object(nativeObject)
			, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
			{
			};
		
			~WeakReferenceBase()
			{
			};
		

			WeakReferenceBase & operator=(WeakReferenceBase &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			virtual void  GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context);
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Properties
			__declspec(property(get=get_IsAlive)) mscorlib::System::Boolean  IsAlive;
			__declspec(property(get=get_Target, put=set_Target)) mscorlib::System::Object  Target;
			__declspec(property(get=get_TrackResurrection)) mscorlib::System::Boolean  TrackResurrection;

			//Get Set Properties Methods
			//	Get:IsAlive
			mscorlib::System::Boolean  get_IsAlive() const;

			//	Get/Set:Target
			mscorlib::System::Object  get_Target() const;
			void set_Target(mscorlib::System::Object  value);

			//	Get:TrackResurrection
			mscorlib::System::Boolean  get_TrackResurrection() const;

		
		protected:
		
		private:
		
		};

	}
}
#endif
