#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DBNULL_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DBNULL_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_IConvertible.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>
#include <mscorlib/System/mscorlib_System_TypeCode.h>
#include <mscorlib/System/mscorlib_System_IFormatProvider.h>

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

		class DBNull
			: public mscorlib::System::Object
			, public virtual mscorlib::System::IConvertible
			, public virtual mscorlib::System::Runtime::Serialization::ISerializable
		{
		public:
			DBNull(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::Object(nativeTypeInfo)
			, mscorlib::System::IConvertible(NULL)
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			{
			};
		
			DBNull(MonoObject *nativeObject)
			: mscorlib::System::Object(nativeObject)
			, mscorlib::System::IConvertible(nativeObject)
			, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
			{
			};
		
			~DBNull()
			{
			};
		

			DBNull & operator=(DBNull &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			virtual void  GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context);
			virtual mscorlib::System::TypeCode::__ENUM__  GetTypeCode();
			virtual mscorlib::System::String  ToString() override;
			virtual mscorlib::System::String  ToString(mscorlib::System::IFormatProvider provider);
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Static Fields
			static Property<mscorlib::System::DBNull> Value;

			//	Get/Set:Value
			static mscorlib::System::DBNull  get_Value();

		
		protected:
		
		private:
		
		};

	}
}
#endif
