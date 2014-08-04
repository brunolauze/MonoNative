#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>
#include <mscorlib/System/mscorlib_System_ICloneable.h>
#include <mscorlib/System/mscorlib_System_IAsyncResult.h>

namespace mscorlib
{
	namespace System
	{

		class MulticastDelegate;
		class IntPtr;
		class Delegate;
		class Type;
		class String;
		class Array;
		class RuntimeFieldHandle;
		class RuntimeTypeHandle;
		class RuntimeMethodHandle;
		class ModuleHandle;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				class SerializationInfo;
				class StreamingContext;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class MethodInfo;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace CompilerServices
			{

				class RuntimeHelpers
					: public mscorlib::System::Object
				{
				public:
					RuntimeHelpers(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					RuntimeHelpers(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~RuntimeHelpers()
					{
					};
				

					RuntimeHelpers & operator=(RuntimeHelpers &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					static void  InitializeArray(mscorlib::System::Array array, mscorlib::System::RuntimeFieldHandle fldHandle);
					static mscorlib::System::Int32  GetHashCode(mscorlib::System::Object o);
					static mscorlib::System::Boolean  Equals(mscorlib::System::Object o1, mscorlib::System::Object o2);
					static mscorlib::System::Object  GetObjectValue(mscorlib::System::Object obj);
					static void  RunClassConstructor(mscorlib::System::RuntimeTypeHandle type);
					static void  EnsureSufficientExecutionStack();
					static void  ExecuteCodeWithGuaranteedCleanup(mscorlib::Callback<void  (mscorlib::System::Object )> code, mscorlib::Callback<void  (mscorlib::System::Object , mscorlib::System::Boolean )> backoutCode, mscorlib::System::Object userData);
					static void  PrepareConstrainedRegions();
					static void  PrepareConstrainedRegionsNoOP();
					static void  ProbeForSufficientStack();
					static void  PrepareDelegate(mscorlib::System::Delegate d);
					static void  PrepareMethod(mscorlib::System::RuntimeMethodHandle method);
					static void  PrepareMethod(mscorlib::System::RuntimeMethodHandle method, std::vector<mscorlib::System::RuntimeTypeHandle*> instantiation);
					static void  RunModuleConstructor(mscorlib::System::ModuleHandle module);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Static Properties
					static Property<mscorlib::System::Int32> OffsetToStringData;

					//Get Set Static Properties Methods
					//	Get:OffsetToStringData
					static mscorlib::System::Int32  get_OffsetToStringData();


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
