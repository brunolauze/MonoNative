#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_MODULEHANDLE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_MODULEHANDLE_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class RuntimeFieldHandle;
		class RuntimeMethodHandle;
		class RuntimeTypeHandle;
		class String;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{

		class ModuleHandle
			: public mscorlib::System::ValueType
		{
		public:
			ModuleHandle(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::ValueType(nativeTypeInfo)
			{
			};
		
			ModuleHandle(MonoObject *nativeObject)
			: mscorlib::System::ValueType(nativeObject)
			{
			};
		
			~ModuleHandle()
			{
			};
		

			ModuleHandle & operator=(ModuleHandle &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			mscorlib::System::RuntimeFieldHandle  ResolveFieldHandle(mscorlib::System::Int32 fieldToken);
			mscorlib::System::RuntimeMethodHandle  ResolveMethodHandle(mscorlib::System::Int32 methodToken);
			mscorlib::System::RuntimeTypeHandle  ResolveTypeHandle(mscorlib::System::Int32 typeToken);
			mscorlib::System::RuntimeTypeHandle  ResolveTypeHandle(mscorlib::System::Int32 typeToken, std::vector<mscorlib::System::RuntimeTypeHandle*> typeInstantiationContext, std::vector<mscorlib::System::RuntimeTypeHandle*> methodInstantiationContext);
			mscorlib::System::RuntimeMethodHandle  ResolveMethodHandle(mscorlib::System::Int32 methodToken, std::vector<mscorlib::System::RuntimeTypeHandle*> typeInstantiationContext, std::vector<mscorlib::System::RuntimeTypeHandle*> methodInstantiationContext);
			mscorlib::System::RuntimeFieldHandle  ResolveFieldHandle(mscorlib::System::Int32 fieldToken, std::vector<mscorlib::System::RuntimeTypeHandle*> typeInstantiationContext, std::vector<mscorlib::System::RuntimeTypeHandle*> methodInstantiationContext);
			mscorlib::System::RuntimeFieldHandle  GetRuntimeFieldHandleFromMetadataToken(mscorlib::System::Int32 fieldToken);
			mscorlib::System::RuntimeMethodHandle  GetRuntimeMethodHandleFromMetadataToken(mscorlib::System::Int32 methodToken);
			mscorlib::System::RuntimeTypeHandle  GetRuntimeTypeHandleFromMetadataToken(mscorlib::System::Int32 typeToken);
			virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
			mscorlib::System::Boolean  Equals(mscorlib::System::ModuleHandle handle);
			virtual mscorlib::System::Int32  GetHashCode() override;
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Properties
			__declspec(property(get=get_MDStreamVersion)) mscorlib::System::Int32  MDStreamVersion;

			//Public Static Fields
			static Property<mscorlib::System::ModuleHandle , mscorlib::System::ModuleHandle> EmptyHandle;

			//Get Set Properties Methods
			//	Get:MDStreamVersion
			mscorlib::System::Int32  get_MDStreamVersion() const;

			//	Get/Set:EmptyHandle
			static mscorlib::System::ModuleHandle  get_EmptyHandle();
			static void set_EmptyHandle(mscorlib::System::ModuleHandle  value);

		
		protected:
		
		private:
		
		};

	}
}
#endif
