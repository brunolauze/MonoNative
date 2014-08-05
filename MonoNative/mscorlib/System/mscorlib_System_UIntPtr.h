#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_UINTPTR_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_UINTPTR_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>
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

		class UIntPtr
			: public mscorlib::System::ValueType
			, public virtual mscorlib::System::Runtime::Serialization::ISerializable
		{
		public:
			UIntPtr(mscorlib::System::UInt64 value)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.UIntPtr"))
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "UInt64");
				__parameters__[0] = &value;
				__native_object__ = Global::New("mscorlib", "System", "UIntPtr", 1, __parameter_types__, __parameters__);
			};
		
			UIntPtr(mscorlib::System::UInt32 value)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.UIntPtr"))
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "UInt32");
				__parameters__[0] = &value;
				__native_object__ = Global::New("mscorlib", "System", "UIntPtr", 1, __parameter_types__, __parameters__);
			};
		
			UIntPtr(void*value)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.UIntPtr"))
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Void*");
				__parameters__[0] = value;
				__native_object__ = Global::New("mscorlib", "System", "UIntPtr", 1, __parameter_types__, __parameters__);
			};
		
			UIntPtr(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::ValueType(nativeTypeInfo)
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			{
			};
		
			UIntPtr(MonoObject *nativeObject)
			: mscorlib::System::ValueType(nativeObject)
			, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
			{
			};
		
			~UIntPtr()
			{
			};
		

			UIntPtr & operator=(UIntPtr &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
			virtual mscorlib::System::Int32  GetHashCode() override;
			mscorlib::System::UInt32  ToUInt32();
			mscorlib::System::UInt64  ToUInt64();
			void* ToPointer();
			virtual mscorlib::System::String  ToString() override;
			static mscorlib::System::UIntPtr  Add(mscorlib::System::UIntPtr pointer, mscorlib::System::Int32 offset);
			static mscorlib::System::UIntPtr  Subtract(mscorlib::System::UIntPtr pointer, mscorlib::System::Int32 offset);
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Static Properties
			static Property<mscorlib::System::Int32 , mscorlib::System::UIntPtr> Size;

			//Public Static Fields
			static Property<mscorlib::System::UIntPtr , mscorlib::System::UIntPtr> Zero;

			//Get Set Static Properties Methods
			//	Get:Size
			static mscorlib::System::Int32  get_Size();
			static void set_Size(mscorlib::System::Int32  value);


			//	Get/Set:Zero
			static mscorlib::System::UIntPtr  get_Zero();
			static void set_Zero(mscorlib::System::UIntPtr  value);

		
		protected:
		
		private:
		
		};

	}
}
#endif
