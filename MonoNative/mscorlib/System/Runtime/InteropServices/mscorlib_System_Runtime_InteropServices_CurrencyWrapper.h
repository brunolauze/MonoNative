#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_CURRENCYWRAPPER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_CURRENCYWRAPPER_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_Decimal.h>

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
		namespace Runtime
		{
			namespace InteropServices
			{

				class CurrencyWrapper
					: public mscorlib::System::Object
				{
				public:
					CurrencyWrapper(mscorlib::System::Decimal obj)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.InteropServices.CurrencyWrapper"))
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Decimal");
						__parameters__[0] = (MonoObject*)obj;
						__native_object__ = Global::New("mscorlib", "System.Runtime.InteropServices", "CurrencyWrapper", 1, __parameter_types__, __parameters__);
					};
				
					CurrencyWrapper(mscorlib::System::Object obj)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.InteropServices.CurrencyWrapper"))
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Object");
						__parameters__[0] = (MonoObject*)obj;
						__native_object__ = Global::New("mscorlib", "System.Runtime.InteropServices", "CurrencyWrapper", 1, __parameter_types__, __parameters__);
					};
				
					CurrencyWrapper(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					CurrencyWrapper(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~CurrencyWrapper()
					{
					};
				

					CurrencyWrapper & operator=(CurrencyWrapper &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_WrappedObject)) mscorlib::System::Decimal  WrappedObject;

					//Get Set Properties Methods
					//	Get:WrappedObject
					mscorlib::System::Decimal  get_WrappedObject();

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
