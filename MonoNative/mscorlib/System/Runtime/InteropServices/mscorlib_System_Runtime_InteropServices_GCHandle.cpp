#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_GCHandle.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Public Methods
				mscorlib::System::IntPtr GCHandle::AddrOfPinnedObject()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "GCHandle", 0, NULL, "AddrOfPinnedObject", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::IntPtr(__result__);
				}

				mscorlib::System::Runtime::InteropServices::GCHandle GCHandle::Alloc(mscorlib::System::Object value)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "GCHandle", 0, NULL, "Alloc", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Runtime::InteropServices::GCHandle(__result__);
				}

				mscorlib::System::Runtime::InteropServices::GCHandle GCHandle::Alloc(mscorlib::System::Object value, mscorlib::System::Runtime::InteropServices::GCHandleType::__ENUM__ type)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameter_types__[1] = Global::GetType(typeid(type).name());
						__parameters__[0] = (MonoObject*)value;
						__parameters__[1] = reinterpret_cast<void*>(type);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "GCHandle", 0, NULL, "Alloc", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Runtime::InteropServices::GCHandle(__result__);
				}

				void GCHandle::Free()
				{
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "GCHandle", 0, NULL, "Free", __native_object__, 0, NULL, NULL, NULL);
				}

				mscorlib::System::Boolean GCHandle::Equals(mscorlib::System::Object o)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(o).name());
						__parameters__[0] = (MonoObject*)o;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "GCHandle", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 GCHandle::GetHashCode()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "GCHandle", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Runtime::InteropServices::GCHandle GCHandle::FromIntPtr(mscorlib::System::IntPtr value)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "GCHandle", 0, NULL, "FromIntPtr", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Runtime::InteropServices::GCHandle(__result__);
				}

				mscorlib::System::IntPtr GCHandle::ToIntPtr(mscorlib::System::Runtime::InteropServices::GCHandle value)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "GCHandle", 0, NULL, "ToIntPtr", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
				}

				//Get Set Properties Methods
				//	Get:IsAllocated
				mscorlib::System::Boolean  GCHandle::get_IsAllocated() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "GCHandle", 0, NULL, "get_IsAllocated", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get/Set:Target
				mscorlib::System::Object  GCHandle::get_Target() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "GCHandle", 0, NULL, "get_Target", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}

				void GCHandle::set_Target(mscorlib::System::Object  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "GCHandle", 0, NULL, "set_Target", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}



			}
		}
	}
}
