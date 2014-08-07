#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_LOCALBUILDER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_LOCALBUILDER_H

#include <mscorlib/System/Reflection/mscorlib_System_Reflection_LocalVariableInfo.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__LocalBuilder.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Type;
		

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

				class LocalBuilder
					: public mscorlib::System::Reflection::LocalVariableInfo
					, public virtual mscorlib::System::Runtime::InteropServices::_LocalBuilder
				{
				public:
					LocalBuilder(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Reflection::LocalVariableInfo(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_LocalBuilder(NULL)
					{
					};
				
					LocalBuilder(MonoObject *nativeObject)
					: mscorlib::System::Reflection::LocalVariableInfo(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_LocalBuilder(nativeObject)
					{
					};
				
					~LocalBuilder()
					{
					};
				

					LocalBuilder & operator=(LocalBuilder &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(LocalBuilder &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					void  SetLocalSymInfo(mscorlib::System::String name, mscorlib::System::Int32 startOffset, mscorlib::System::Int32 endOffset);
					void  SetLocalSymInfo(const char *name, mscorlib::System::Int32 startOffset, mscorlib::System::Int32 endOffset);
					void  SetLocalSymInfo(mscorlib::System::String name);
					void  SetLocalSymInfo(const char *name);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_LocalType)) mscorlib::System::Type  LocalType;
					__declspec(property(get=get_IsPinned)) mscorlib::System::Boolean  IsPinned;
					__declspec(property(get=get_LocalIndex)) mscorlib::System::Int32  LocalIndex;

					//Get Set Properties Methods
					//	Get:LocalType
					mscorlib::System::Type  get_LocalType() const;

					//	Get:IsPinned
					mscorlib::System::Boolean  get_IsPinned() const;

					//	Get:LocalIndex
					mscorlib::System::Int32  get_LocalIndex() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
