#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_ACTIVATIONCONTEXT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_ACTIVATIONCONTEXT_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_IConvertible.h>
#include <mscorlib/System/mscorlib_System_IFormattable.h>
#include <mscorlib/System/mscorlib_System_IComparable.h>
#include <mscorlib/System/mscorlib_System_TypeCode.h>
#include <mscorlib/System/mscorlib_System_IFormatProvider.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>

namespace mscorlib
{
	namespace System
	{

		class Enum;
		class String;
		class Type;
		class ApplicationIdentity;
		

	}
}
namespace mscorlib
{
	namespace System
	{

		class ActivationContext
			: public mscorlib::System::Object
			, public virtual mscorlib::System::Runtime::Serialization::ISerializable
			, public virtual mscorlib::System::IDisposable
		{
		public:
			class ContextForm
			{
			public:
				enum __ENUM__
				{
					Loose = 0,
					StoreBounded = 1,
				};
			};
			
			ActivationContext(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::Object(nativeTypeInfo)
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			, mscorlib::System::IDisposable(NULL)
			{
			};
		
			ActivationContext(MonoObject *nativeObject)
			: mscorlib::System::Object(nativeObject)
			, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
			, mscorlib::System::IDisposable(nativeObject)
			{
			};
		
			~ActivationContext()
			{
			};
		

			ActivationContext & operator=(ActivationContext &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			static mscorlib::System::ActivationContext  CreatePartialActivationContext(mscorlib::System::ApplicationIdentity identity);
			static mscorlib::System::ActivationContext  CreatePartialActivationContext(mscorlib::System::ApplicationIdentity identity, std::vector<mscorlib::System::String*> manifestPaths);
			virtual void  Dispose();
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Properties
			__declspec(property(get=get_Form)) mscorlib::System::ActivationContext::ContextForm::__ENUM__  Form;
			__declspec(property(get=get_Identity)) mscorlib::System::ApplicationIdentity  Identity;

			//Get Set Properties Methods
			//	Get:Form
			mscorlib::System::ActivationContext::ContextForm::__ENUM__  get_Form();

			//	Get:Identity
			mscorlib::System::ApplicationIdentity  get_Identity();

		
		protected:
		
		private:
		
		};

	}
}
#endif
