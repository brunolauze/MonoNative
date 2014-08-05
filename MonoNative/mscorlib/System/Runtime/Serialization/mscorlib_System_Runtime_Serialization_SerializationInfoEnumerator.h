#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFOENUMERATOR_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFOENUMERATOR_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerator.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				class SerializationEntry;
				

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
		namespace Runtime
		{
			namespace Serialization
			{

				class SerializationInfoEnumerator
					: public mscorlib::System::Object
					, public virtual mscorlib::System::Collections::IEnumerator
				{
				public:
					SerializationInfoEnumerator(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::Collections::IEnumerator(NULL)
					{
					};
				
					SerializationInfoEnumerator(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::Collections::IEnumerator(nativeObject)
					{
					};
				
					~SerializationInfoEnumerator()
					{
					};
				

					SerializationInfoEnumerator & operator=(SerializationInfoEnumerator &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Boolean  MoveNext();
					virtual void  Reset();
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Current)) mscorlib::System::Runtime::Serialization::SerializationEntry  Current;
					__declspec(property(get=get_Name)) mscorlib::System::String  Name;
					__declspec(property(get=get_ObjectType)) mscorlib::System::Type  ObjectType;
					__declspec(property(get=get_Value)) mscorlib::System::Object  Value;

					//Get Set Properties Methods
					//	Get:Current
					mscorlib::System::Runtime::Serialization::SerializationEntry  get_Current() const;

					//	Get:Name
					mscorlib::System::String  get_Name() const;

					//	Get:ObjectType
					mscorlib::System::Type  get_ObjectType() const;

					//	Get:Value
					mscorlib::System::Object  get_Value() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
