#include <mscorlib/System/Threading/mscorlib_System_Threading_Interlocked.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			//Public Methods
			mscorlib::System::Int32 Interlocked::CompareExchange(mscorlib::System::Int32 location1, mscorlib::System::Int32 value, mscorlib::System::Int32 comparand)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(location1).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameter_types__[2] = Global::GetType(typeid(comparand).name());
					__parameters__[0] = &location1;
					__parameters__[1] = &value;
					__parameters__[2] = &comparand;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Interlocked", 0, NULL, "CompareExchange", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Object Interlocked::CompareExchange(mscorlib::System::Object location1, mscorlib::System::Object value, mscorlib::System::Object comparand)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(location1).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameter_types__[2] = Global::GetType(typeid(comparand).name());
					__parameters__[0] = (MonoObject*)location1;
					__parameters__[1] = (MonoObject*)value;
					__parameters__[2] = (MonoObject*)comparand;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Interlocked", 0, NULL, "CompareExchange", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Object(__result__);
			}

			mscorlib::System::Single Interlocked::CompareExchange(mscorlib::System::Single location1, mscorlib::System::Single value, mscorlib::System::Single comparand)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(location1).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameter_types__[2] = Global::GetType(typeid(comparand).name());
					__parameters__[0] = &location1;
					__parameters__[1] = &value;
					__parameters__[2] = &comparand;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Interlocked", 0, NULL, "CompareExchange", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Single*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Interlocked::Decrement(mscorlib::System::Int32 location)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(location).name());
					__parameters__[0] = &location;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Interlocked", 0, NULL, "Decrement", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int64 Interlocked::Decrement(mscorlib::System::Int64 location)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(location).name());
					__parameters__[0] = &location;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Interlocked", 0, NULL, "Decrement", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Interlocked::Increment(mscorlib::System::Int32 location)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(location).name());
					__parameters__[0] = &location;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Interlocked", 0, NULL, "Increment", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int64 Interlocked::Increment(mscorlib::System::Int64 location)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(location).name());
					__parameters__[0] = &location;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Interlocked", 0, NULL, "Increment", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Interlocked::Exchange(mscorlib::System::Int32 location1, mscorlib::System::Int32 value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(location1).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &location1;
					__parameters__[1] = &value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Interlocked", 0, NULL, "Exchange", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Object Interlocked::Exchange(mscorlib::System::Object location1, mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(location1).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)location1;
					__parameters__[1] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Interlocked", 0, NULL, "Exchange", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Object(__result__);
			}

			mscorlib::System::Single Interlocked::Exchange(mscorlib::System::Single location1, mscorlib::System::Single value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(location1).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &location1;
					__parameters__[1] = &value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Interlocked", 0, NULL, "Exchange", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Single*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int64 Interlocked::CompareExchange(mscorlib::System::Int64 location1, mscorlib::System::Int64 value, mscorlib::System::Int64 comparand)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(location1).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameter_types__[2] = Global::GetType(typeid(comparand).name());
					__parameters__[0] = &location1;
					__parameters__[1] = &value;
					__parameters__[2] = &comparand;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Interlocked", 0, NULL, "CompareExchange", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
			}

			mscorlib::System::IntPtr Interlocked::CompareExchange(mscorlib::System::IntPtr location1, mscorlib::System::IntPtr value, mscorlib::System::IntPtr comparand)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(location1).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameter_types__[2] = Global::GetType(typeid(comparand).name());
					__parameters__[0] = (MonoObject*)location1;
					__parameters__[1] = (MonoObject*)value;
					__parameters__[2] = (MonoObject*)comparand;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Interlocked", 0, NULL, "CompareExchange", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IntPtr(__result__);
			}

			mscorlib::System::Double Interlocked::CompareExchange(mscorlib::System::Double location1, mscorlib::System::Double value, mscorlib::System::Double comparand)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(location1).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameter_types__[2] = Global::GetType(typeid(comparand).name());
					__parameters__[0] = &location1;
					__parameters__[1] = &value;
					__parameters__[2] = &comparand;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Interlocked", 0, NULL, "CompareExchange", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Double*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int64 Interlocked::Exchange(mscorlib::System::Int64 location1, mscorlib::System::Int64 value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(location1).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &location1;
					__parameters__[1] = &value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Interlocked", 0, NULL, "Exchange", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
			}

			mscorlib::System::IntPtr Interlocked::Exchange(mscorlib::System::IntPtr location1, mscorlib::System::IntPtr value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(location1).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)location1;
					__parameters__[1] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Interlocked", 0, NULL, "Exchange", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IntPtr(__result__);
			}

			mscorlib::System::Double Interlocked::Exchange(mscorlib::System::Double location1, mscorlib::System::Double value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(location1).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &location1;
					__parameters__[1] = &value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Interlocked", 0, NULL, "Exchange", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Double*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int64 Interlocked::Read(mscorlib::System::Int64 location)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(location).name());
					__parameters__[0] = &location;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Interlocked", 0, NULL, "Read", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Interlocked::Add(mscorlib::System::Int32 location1, mscorlib::System::Int32 value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(location1).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &location1;
					__parameters__[1] = &value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Interlocked", 0, NULL, "Add", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int64 Interlocked::Add(mscorlib::System::Int64 location1, mscorlib::System::Int64 value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(location1).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &location1;
					__parameters__[1] = &value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Interlocked", 0, NULL, "Add", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
			}

			void Interlocked::MemoryBarrier()
			{
					Global::InvokeMethod("mscorlib", "System.Threading", "Interlocked", 0, NULL, "MemoryBarrier", NullMonoObject, 0, NULL, NULL, NULL);
			}


		}
	}
}
