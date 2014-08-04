#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_INTERLOCKED_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_INTERLOCKED_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		class IntPtr;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			class Interlocked
				: public mscorlib::System::Object
			{
			public:
				Interlocked(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				Interlocked(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~Interlocked()
				{
				};
			

				Interlocked & operator=(Interlocked &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				static mscorlib::System::Int32  CompareExchange(mscorlib::System::Int32 location1, mscorlib::System::Int32 value, mscorlib::System::Int32 comparand);
				static mscorlib::System::Object  CompareExchange(mscorlib::System::Object location1, mscorlib::System::Object value, mscorlib::System::Object comparand);
				static mscorlib::System::Single  CompareExchange(mscorlib::System::Single location1, mscorlib::System::Single value, mscorlib::System::Single comparand);
				static mscorlib::System::Int32  Decrement(mscorlib::System::Int32 location);
				static mscorlib::System::Int64  Decrement(mscorlib::System::Int64 location);
				static mscorlib::System::Int32  Increment(mscorlib::System::Int32 location);
				static mscorlib::System::Int64  Increment(mscorlib::System::Int64 location);
				static mscorlib::System::Int32  Exchange(mscorlib::System::Int32 location1, mscorlib::System::Int32 value);
				static mscorlib::System::Object  Exchange(mscorlib::System::Object location1, mscorlib::System::Object value);
				static mscorlib::System::Single  Exchange(mscorlib::System::Single location1, mscorlib::System::Single value);
				static mscorlib::System::Int64  CompareExchange(mscorlib::System::Int64 location1, mscorlib::System::Int64 value, mscorlib::System::Int64 comparand);
				static mscorlib::System::IntPtr  CompareExchange(mscorlib::System::IntPtr location1, mscorlib::System::IntPtr value, mscorlib::System::IntPtr comparand);
				static mscorlib::System::Double  CompareExchange(mscorlib::System::Double location1, mscorlib::System::Double value, mscorlib::System::Double comparand);
				template<typename T>
				static T  CompareExchange(T location1, T value, T comparand)
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
					return T(__result__);
				};
				
				static mscorlib::System::Int64  Exchange(mscorlib::System::Int64 location1, mscorlib::System::Int64 value);
				static mscorlib::System::IntPtr  Exchange(mscorlib::System::IntPtr location1, mscorlib::System::IntPtr value);
				static mscorlib::System::Double  Exchange(mscorlib::System::Double location1, mscorlib::System::Double value);
				template<typename T>
				static T  Exchange(T location1, T value)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(location1).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)location1;
					__parameters__[1] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Interlocked", 0, NULL, "Exchange", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return T(__result__);
				};
				
				static mscorlib::System::Int64  Read(mscorlib::System::Int64 location);
				static mscorlib::System::Int32  Add(mscorlib::System::Int32 location1, mscorlib::System::Int32 value);
				static mscorlib::System::Int64  Add(mscorlib::System::Int64 location1, mscorlib::System::Int64 value);
				static void  MemoryBarrier();
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
