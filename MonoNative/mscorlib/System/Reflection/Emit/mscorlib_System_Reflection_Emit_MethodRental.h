#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_METHODRENTAL_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_METHODRENTAL_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__MethodRental.h>

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
		namespace Reflection
		{
			namespace Emit
			{

				class MethodRental
					: public mscorlib::System::Object
					, public virtual mscorlib::System::Runtime::InteropServices::_MethodRental
				{
				public:
					MethodRental(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_MethodRental(NULL)
					{
					};
				
					MethodRental(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_MethodRental(nativeObject)
					{
					};
				
					~MethodRental()
					{
					};
				

					MethodRental & operator=(MethodRental &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					static void  SwapMethodBody(mscorlib::System::Type cls, mscorlib::System::Int32 methodtoken, mscorlib::System::IntPtr rgIL, mscorlib::System::Int32 methodSize, mscorlib::System::Int32 flags);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Static Fields
					static Property<mscorlib::System::Int32> JitImmediate;
					static Property<mscorlib::System::Int32> JitOnDemand;

					//	Get/Set:JitImmediate
					static mscorlib::System::Int32  get_JitImmediate();
					static void set_JitImmediate(mscorlib::System::Int32  value);

					//	Get/Set:JitOnDemand
					static mscorlib::System::Int32  get_JitOnDemand();
					static void set_JitOnDemand(mscorlib::System::Int32  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
