#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_INTPTR_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_INTPTR_H

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

		class IntPtr
			: public mscorlib::System::ValueType
			, public virtual mscorlib::System::Runtime::Serialization::ISerializable
		{
		public:
			IntPtr(mscorlib::System::Int32 value)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IntPtr"))
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
				__parameters__[0] = &value;
				__native_object__ = Global::New("mscorlib", "System", "IntPtr", 1, __parameter_types__, __parameters__);
			};
		
			IntPtr(mscorlib::System::Int64 value)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IntPtr"))
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int64");
				__parameters__[0] = &value;
				__native_object__ = Global::New("mscorlib", "System", "IntPtr", 1, __parameter_types__, __parameters__);
			};
		
			IntPtr(void*value)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IntPtr"))
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Void*");
				__parameters__[0] = value;
				__native_object__ = Global::New("mscorlib", "System", "IntPtr", 1, __parameter_types__, __parameters__);
			};
		
			IntPtr(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::ValueType(nativeTypeInfo)
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			{
			};
		
			IntPtr(MonoObject *nativeObject)
			: mscorlib::System::ValueType(nativeObject)
			, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
			{
			};
		
			~IntPtr()
			{
			};
		

			IntPtr & operator=(IntPtr &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
			virtual mscorlib::System::Int32  GetHashCode() override;
			mscorlib::System::Int32  ToInt32();
			mscorlib::System::Int64  ToInt64();
			void* ToPointer();
			virtual mscorlib::System::String  ToString() override;
			mscorlib::System::String  ToString(mscorlib::System::String format);
			static mscorlib::System::IntPtr  Add(mscorlib::System::IntPtr pointer, mscorlib::System::Int32 offset);
			static mscorlib::System::IntPtr  Subtract(mscorlib::System::IntPtr pointer, mscorlib::System::Int32 offset);
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Static Properties
			static Property<mscorlib::System::Int32 , mscorlib::System::IntPtr> Size;

			//Public Static Fields
			static Property<mscorlib::System::IntPtr , mscorlib::System::IntPtr> Zero;

			//Get Set Static Properties Methods
			//	Get:Size
			static mscorlib::System::Int32  get_Size();
			static void set_Size(mscorlib::System::Int32  value);


			//	Get/Set:Zero
			static mscorlib::System::IntPtr  get_Zero();
			static void set_Zero(mscorlib::System::IntPtr  value);

		
		protected:
		
		private:
		
		};

	}
}
#endif
