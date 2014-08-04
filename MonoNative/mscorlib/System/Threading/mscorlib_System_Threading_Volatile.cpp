#include <mscorlib/System/Threading/mscorlib_System_Threading_Volatile.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_SByte.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>
#include <mscorlib/System/mscorlib_System_UIntPtr.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			//Public Methods
			mscorlib::System::Boolean Volatile::Read(mscorlib::System::Boolean location)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(location).name());
					__parameters__[0] = &location;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Volatile", 0, NULL, "Read", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Byte Volatile::Read(mscorlib::System::Byte location)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(location).name());
					__parameters__[0] = (MonoObject*)location;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Volatile", 0, NULL, "Read", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Byte(__result__);
			}

			mscorlib::System::SByte Volatile::Read(mscorlib::System::SByte location)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(location).name());
					__parameters__[0] = (MonoObject*)location;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Volatile", 0, NULL, "Read", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::SByte(__result__);
			}

			mscorlib::System::Int16 Volatile::Read(mscorlib::System::Int16 location)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(location).name());
					__parameters__[0] = &location;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Volatile", 0, NULL, "Read", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int16*)mono_object_unbox(__result__);
			}

			mscorlib::System::UInt16 Volatile::Read(mscorlib::System::UInt16 location)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(location).name());
					__parameters__[0] = &location;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Volatile", 0, NULL, "Read", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::UInt16*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Volatile::Read(mscorlib::System::Int32 location)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(location).name());
					__parameters__[0] = &location;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Volatile", 0, NULL, "Read", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::UInt32 Volatile::Read(mscorlib::System::UInt32 location)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(location).name());
					__parameters__[0] = &location;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Volatile", 0, NULL, "Read", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::UInt32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int64 Volatile::Read(mscorlib::System::Int64 location)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(location).name());
					__parameters__[0] = &location;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Volatile", 0, NULL, "Read", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
			}

			mscorlib::System::UInt64 Volatile::Read(mscorlib::System::UInt64 location)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(location).name());
					__parameters__[0] = &location;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Volatile", 0, NULL, "Read", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::UInt64*)mono_object_unbox(__result__);
			}

			mscorlib::System::IntPtr Volatile::Read(mscorlib::System::IntPtr location)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(location).name());
					__parameters__[0] = (MonoObject*)location;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Volatile", 0, NULL, "Read", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IntPtr(__result__);
			}

			mscorlib::System::UIntPtr Volatile::Read(mscorlib::System::UIntPtr location)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(location).name());
					__parameters__[0] = (MonoObject*)location;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Volatile", 0, NULL, "Read", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::UIntPtr(__result__);
			}

			mscorlib::System::Double Volatile::Read(mscorlib::System::Double location)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(location).name());
					__parameters__[0] = &location;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Volatile", 0, NULL, "Read", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Double*)mono_object_unbox(__result__);
			}

			mscorlib::System::Single Volatile::Read(mscorlib::System::Single location)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(location).name());
					__parameters__[0] = &location;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Volatile", 0, NULL, "Read", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Single*)mono_object_unbox(__result__);
			}

			void Volatile::Write(mscorlib::System::Boolean location, mscorlib::System::Boolean value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(location).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &location;
					__parameters__[1] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Threading", "Volatile", 0, NULL, "Write", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void Volatile::Write(mscorlib::System::Byte location, mscorlib::System::Byte value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(location).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)location;
					__parameters__[1] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Threading", "Volatile", 0, NULL, "Write", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void Volatile::Write(mscorlib::System::SByte location, mscorlib::System::SByte value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(location).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)location;
					__parameters__[1] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Threading", "Volatile", 0, NULL, "Write", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void Volatile::Write(mscorlib::System::Int16 location, mscorlib::System::Int16 value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(location).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &location;
					__parameters__[1] = &value;
					Global::InvokeMethod("mscorlib", "System.Threading", "Volatile", 0, NULL, "Write", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void Volatile::Write(mscorlib::System::UInt16 location, mscorlib::System::UInt16 value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(location).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &location;
					__parameters__[1] = &value;
					Global::InvokeMethod("mscorlib", "System.Threading", "Volatile", 0, NULL, "Write", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void Volatile::Write(mscorlib::System::Int32 location, mscorlib::System::Int32 value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(location).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &location;
					__parameters__[1] = &value;
					Global::InvokeMethod("mscorlib", "System.Threading", "Volatile", 0, NULL, "Write", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void Volatile::Write(mscorlib::System::UInt32 location, mscorlib::System::UInt32 value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(location).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &location;
					__parameters__[1] = &value;
					Global::InvokeMethod("mscorlib", "System.Threading", "Volatile", 0, NULL, "Write", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void Volatile::Write(mscorlib::System::Int64 location, mscorlib::System::Int64 value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(location).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &location;
					__parameters__[1] = &value;
					Global::InvokeMethod("mscorlib", "System.Threading", "Volatile", 0, NULL, "Write", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void Volatile::Write(mscorlib::System::UInt64 location, mscorlib::System::UInt64 value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(location).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &location;
					__parameters__[1] = &value;
					Global::InvokeMethod("mscorlib", "System.Threading", "Volatile", 0, NULL, "Write", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void Volatile::Write(mscorlib::System::IntPtr location, mscorlib::System::IntPtr value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(location).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)location;
					__parameters__[1] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Threading", "Volatile", 0, NULL, "Write", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void Volatile::Write(mscorlib::System::UIntPtr location, mscorlib::System::UIntPtr value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(location).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)location;
					__parameters__[1] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Threading", "Volatile", 0, NULL, "Write", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void Volatile::Write(mscorlib::System::Double location, mscorlib::System::Double value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(location).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &location;
					__parameters__[1] = &value;
					Global::InvokeMethod("mscorlib", "System.Threading", "Volatile", 0, NULL, "Write", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void Volatile::Write(mscorlib::System::Single location, mscorlib::System::Single value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(location).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &location;
					__parameters__[1] = &value;
					Global::InvokeMethod("mscorlib", "System.Threading", "Volatile", 0, NULL, "Write", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}


		}
	}
}
