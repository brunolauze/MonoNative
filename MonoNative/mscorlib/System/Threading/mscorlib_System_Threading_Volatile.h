#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_VOLATILE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_VOLATILE_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		class Byte;
		class SByte;
		class IntPtr;
		class UIntPtr;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			class Volatile
				: public mscorlib::System::Object
			{
			public:
				Volatile(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				Volatile(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~Volatile()
				{
				};
			

				Volatile & operator=(Volatile &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				static mscorlib::System::Boolean  Read(mscorlib::System::Boolean location);
				static mscorlib::System::Byte  Read(mscorlib::System::Byte location);
				static mscorlib::System::SByte  Read(mscorlib::System::SByte location);
				static mscorlib::System::Int16  Read(mscorlib::System::Int16 location);
				static mscorlib::System::UInt16  Read(mscorlib::System::UInt16 location);
				static mscorlib::System::Int32  Read(mscorlib::System::Int32 location);
				static mscorlib::System::UInt32  Read(mscorlib::System::UInt32 location);
				static mscorlib::System::Int64  Read(mscorlib::System::Int64 location);
				static mscorlib::System::UInt64  Read(mscorlib::System::UInt64 location);
				static mscorlib::System::IntPtr  Read(mscorlib::System::IntPtr location);
				static mscorlib::System::UIntPtr  Read(mscorlib::System::UIntPtr location);
				static mscorlib::System::Double  Read(mscorlib::System::Double location);
				static mscorlib::System::Single  Read(mscorlib::System::Single location);
				template<typename T>
				static T  Read(T location)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(location).name());
					__parameters__[0] = (MonoObject*)location;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Volatile", 0, NULL, "Read", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return T(__result__);
				};
				
				static void  Write(mscorlib::System::Boolean location, mscorlib::System::Boolean value);
				static void  Write(mscorlib::System::Byte location, mscorlib::System::Byte value);
				static void  Write(mscorlib::System::SByte location, mscorlib::System::SByte value);
				static void  Write(mscorlib::System::Int16 location, mscorlib::System::Int16 value);
				static void  Write(mscorlib::System::UInt16 location, mscorlib::System::UInt16 value);
				static void  Write(mscorlib::System::Int32 location, mscorlib::System::Int32 value);
				static void  Write(mscorlib::System::UInt32 location, mscorlib::System::UInt32 value);
				static void  Write(mscorlib::System::Int64 location, mscorlib::System::Int64 value);
				static void  Write(mscorlib::System::UInt64 location, mscorlib::System::UInt64 value);
				static void  Write(mscorlib::System::IntPtr location, mscorlib::System::IntPtr value);
				static void  Write(mscorlib::System::UIntPtr location, mscorlib::System::UIntPtr value);
				static void  Write(mscorlib::System::Double location, mscorlib::System::Double value);
				static void  Write(mscorlib::System::Single location, mscorlib::System::Single value);
				template<typename T>
				static void  Write(T location, T value)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(location).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)location;
					__parameters__[1] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Threading", "Volatile", 0, NULL, "Write", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				};
				
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
