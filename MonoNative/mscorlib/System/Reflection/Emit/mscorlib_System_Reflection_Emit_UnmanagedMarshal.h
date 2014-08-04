#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_UNMANAGEDMARSHAL_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_UNMANAGEDMARSHAL_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_UnmanagedType.h>

namespace mscorlib
{
	namespace System
	{

		class Guid;
		class Type;
		class String;
		

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

				class UnmanagedMarshal
					: public mscorlib::System::Object
				{
				public:
					UnmanagedMarshal(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					UnmanagedMarshal(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~UnmanagedMarshal()
					{
					};
				

					UnmanagedMarshal & operator=(UnmanagedMarshal &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					static mscorlib::System::Reflection::Emit::UnmanagedMarshal  DefineByValArray(mscorlib::System::Int32 elemCount);
					static mscorlib::System::Reflection::Emit::UnmanagedMarshal  DefineByValTStr(mscorlib::System::Int32 elemCount);
					static mscorlib::System::Reflection::Emit::UnmanagedMarshal  DefineLPArray(mscorlib::System::Runtime::InteropServices::UnmanagedType::__ENUM__ elemType);
					static mscorlib::System::Reflection::Emit::UnmanagedMarshal  DefineSafeArray(mscorlib::System::Runtime::InteropServices::UnmanagedType::__ENUM__ elemType);
					static mscorlib::System::Reflection::Emit::UnmanagedMarshal  DefineUnmanagedMarshal(mscorlib::System::Runtime::InteropServices::UnmanagedType::__ENUM__ unmanagedType);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_BaseType)) mscorlib::System::Runtime::InteropServices::UnmanagedType::__ENUM__  BaseType;
					__declspec(property(get=get_ElementCount)) mscorlib::System::Int32  ElementCount;
					__declspec(property(get=get_GetUnmanagedType)) mscorlib::System::Runtime::InteropServices::UnmanagedType::__ENUM__  GetUnmanagedType;
					__declspec(property(get=get_IIDGuid)) mscorlib::System::Guid  IIDGuid;

					//Get Set Properties Methods
					//	Get:BaseType
					mscorlib::System::Runtime::InteropServices::UnmanagedType::__ENUM__  get_BaseType();

					//	Get:ElementCount
					mscorlib::System::Int32  get_ElementCount();

					//	Get:GetUnmanagedType
					mscorlib::System::Runtime::InteropServices::UnmanagedType::__ENUM__  get_GetUnmanagedType();

					//	Get:IIDGuid
					mscorlib::System::Guid  get_IIDGuid();

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
