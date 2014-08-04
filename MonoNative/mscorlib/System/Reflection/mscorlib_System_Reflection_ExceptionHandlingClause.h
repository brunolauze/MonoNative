#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EXCEPTIONHANDLINGCLAUSE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EXCEPTIONHANDLINGCLAUSE_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ExceptionHandlingClauseOptions.h>

namespace mscorlib
{
	namespace System
	{

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

			class ExceptionHandlingClause
				: public mscorlib::System::Object
			{
			public:
				ExceptionHandlingClause(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				ExceptionHandlingClause(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~ExceptionHandlingClause()
				{
				};
			

				ExceptionHandlingClause & operator=(ExceptionHandlingClause &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::String  ToString() override;
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_CatchType)) mscorlib::System::Type  CatchType;
				__declspec(property(get=get_FilterOffset)) mscorlib::System::Int32  FilterOffset;
				__declspec(property(get=get_Flags)) mscorlib::System::Reflection::ExceptionHandlingClauseOptions::__ENUM__  Flags;
				__declspec(property(get=get_HandlerLength)) mscorlib::System::Int32  HandlerLength;
				__declspec(property(get=get_HandlerOffset)) mscorlib::System::Int32  HandlerOffset;
				__declspec(property(get=get_TryLength)) mscorlib::System::Int32  TryLength;
				__declspec(property(get=get_TryOffset)) mscorlib::System::Int32  TryOffset;

				//Get Set Properties Methods
				//	Get:CatchType
				mscorlib::System::Type  get_CatchType();

				//	Get:FilterOffset
				mscorlib::System::Int32  get_FilterOffset();

				//	Get:Flags
				mscorlib::System::Reflection::ExceptionHandlingClauseOptions::__ENUM__  get_Flags();

				//	Get:HandlerLength
				mscorlib::System::Int32  get_HandlerLength();

				//	Get:HandlerOffset
				mscorlib::System::Int32  get_HandlerOffset();

				//	Get:TryLength
				mscorlib::System::Int32  get_TryLength();

				//	Get:TryOffset
				mscorlib::System::Int32  get_TryOffset();

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
