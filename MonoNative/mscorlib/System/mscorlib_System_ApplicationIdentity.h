#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_APPLICATIONIDENTITY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_APPLICATIONIDENTITY_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{

		class ApplicationIdentity
			: public mscorlib::System::Object
			, public virtual mscorlib::System::Runtime::Serialization::ISerializable
		{
		public:
			ApplicationIdentity(mscorlib::System::String applicationIdentityFullName)
			: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.ApplicationIdentity"))
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = (MonoObject*)applicationIdentityFullName;
				__native_object__ = Global::New("mscorlib", "System", "ApplicationIdentity", 1, __parameter_types__, __parameters__);
			};
		
			ApplicationIdentity(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::Object(nativeTypeInfo)
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			{
			};
		
			ApplicationIdentity(MonoObject *nativeObject)
			: mscorlib::System::Object(nativeObject)
			, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
			{
			};
		
			~ApplicationIdentity()
			{
			};
		

			ApplicationIdentity & operator=(ApplicationIdentity &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			virtual mscorlib::System::String  ToString() override;
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Properties
			__declspec(property(get=get_CodeBase)) mscorlib::System::String  CodeBase;
			__declspec(property(get=get_FullName)) mscorlib::System::String  FullName;

			//Get Set Properties Methods
			//	Get:CodeBase
			mscorlib::System::String  get_CodeBase() const;

			//	Get:FullName
			mscorlib::System::String  get_FullName() const;

		
		protected:
		
		private:
		
		};

	}
}
#endif
