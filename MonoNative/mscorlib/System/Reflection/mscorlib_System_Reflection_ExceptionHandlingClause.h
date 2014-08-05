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
				mscorlib::System::Type  get_CatchType() const;

				//	Get:FilterOffset
				mscorlib::System::Int32  get_FilterOffset() const;

				//	Get:Flags
				mscorlib::System::Reflection::ExceptionHandlingClauseOptions::__ENUM__  get_Flags() const;

				//	Get:HandlerLength
				mscorlib::System::Int32  get_HandlerLength() const;

				//	Get:HandlerOffset
				mscorlib::System::Int32  get_HandlerOffset() const;

				//	Get:TryLength
				mscorlib::System::Int32  get_TryLength() const;

				//	Get:TryOffset
				mscorlib::System::Int32  get_TryOffset() const;

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
