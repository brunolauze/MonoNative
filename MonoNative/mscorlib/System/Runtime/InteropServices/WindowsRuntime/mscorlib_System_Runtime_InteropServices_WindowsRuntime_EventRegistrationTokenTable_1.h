#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_WINDOWSRUNTIME_EVENTREGISTRATIONTOKENTABLE_1_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_WINDOWSRUNTIME_EVENTREGISTRATIONTOKENTABLE_1_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/InteropServices/WindowsRuntime/mscorlib_System_Runtime_InteropServices_WindowsRuntime_EventRegistrationToken.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{
				namespace WindowsRuntime
				{

					template<typename T>
					class EventRegistrationTokenTable
						: public mscorlib::System::Object
					{
					public:
						EventRegistrationTokenTable()
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.InteropServices.WindowsRuntime.EventRegistrationTokenTable`1"))
						{
							MonoType *__generic_types__[1];
							__generic_types__[0] = Global::GetType(typeid(T).name());
							__native_object__ = Global::New("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "EventRegistrationTokenTable`1", 1, __generic_types__, 0, NULL, NULL);
						};
					
						EventRegistrationTokenTable(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Object(nativeTypeInfo)
						{
						};
					
						EventRegistrationTokenTable(MonoObject *nativeObject)
						: mscorlib::System::Object(nativeObject)
						{
						};
					
						~EventRegistrationTokenTable()
						{
						};
					

						EventRegistrationTokenTable & operator=(EventRegistrationTokenTable &value) { __native_object__ = value.GetNativeObject(); return value; };
						bool operator==(EventRegistrationTokenTable &value) { return mscorlib::System::Object::Equals(value); };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						mscorlib::System::Runtime::InteropServices::WindowsRuntime::EventRegistrationToken  AddEventHandler(T handler)
						{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(handler).name());
							__parameters__[0] = (MonoObject*)handler;
							MonoType *__generic_types__[1];
							__generic_types__[0] = Global::GetType(typeid(T).name());
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "EventRegistrationTokenTable`1", 1, __generic_types__, "AddEventHandler", __native_object__, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Runtime::InteropServices::WindowsRuntime::EventRegistrationToken(__result__);
						};
						
						static mscorlib::System::Runtime::InteropServices::WindowsRuntime::EventRegistrationTokenTable<T>  GetOrCreateEventRegistrationTokenTable(mscorlib::System::Runtime::InteropServices::WindowsRuntime::EventRegistrationTokenTable<T> refEventTable)
						{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(refEventTable).name());
							__parameters__[0] = (MonoObject*)refEventTable;
							MonoType *__generic_types__[1];
							__generic_types__[0] = Global::GetType(typeid(T).name());
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "EventRegistrationTokenTable`1", 1, __generic_types__, "GetOrCreateEventRegistrationTokenTable", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Runtime::InteropServices::WindowsRuntime::EventRegistrationTokenTable<T>(__result__);
						};
						
						void  RemoveEventHandler(T handler)
						{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(handler).name());
							__parameters__[0] = (MonoObject*)handler;
							MonoType *__generic_types__[1];
							__generic_types__[0] = Global::GetType(typeid(T).name());
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "EventRegistrationTokenTable`1", 1, __generic_types__, "RemoveEventHandler", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						};
						
						void  RemoveEventHandler(mscorlib::System::Runtime::InteropServices::WindowsRuntime::EventRegistrationToken token)
						{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(token).name());
							__parameters__[0] = (MonoObject*)token;
							MonoType *__generic_types__[1];
							__generic_types__[0] = Global::GetType(typeid(T).name());
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "EventRegistrationTokenTable`1", 1, __generic_types__, "RemoveEventHandler", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						};
						
						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Properties
						__declspec(property(get=get_InvocationList, put=set_InvocationList)) T  InvocationList;

						//Get Set Properties Methods
						//	Get/Set:InvocationList
						T  get_InvocationList() const
						{
							MonoType *__generic_types__[1];
							__generic_types__[0] = Global::GetType(typeid(T).name());
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "EventRegistrationTokenTable`1", 1, __generic_types__, "get_InvocationList", __native_object__, 0, NULL, NULL, NULL);
							return T(__result__);
						}
						void set_InvocationList(T  value)
						{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(value).name());
							__parameters__[0] = (MonoObject*)value;
							MonoType *__generic_types__[1];
							__generic_types__[0] = Global::GetType(typeid(T).name());
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "EventRegistrationTokenTable`1", 1, __generic_types__, "set_InvocationList", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						}
					

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
