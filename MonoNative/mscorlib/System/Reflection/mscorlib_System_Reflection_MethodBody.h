#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_METHODBODY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_METHODBODY_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IList_1.h>

namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class ExceptionHandlingClause;
			class LocalVariableInfo;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class Byte;
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

			class MethodBody
				: public mscorlib::System::Object
			{
			public:
				MethodBody(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				MethodBody(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~MethodBody()
				{
				};
			

				MethodBody & operator=(MethodBody &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(MethodBody &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual std::vector<mscorlib::System::Byte*>  GetILAsByteArray();
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_ExceptionHandlingClauses)) mscorlib::System::Collections::Generic::IList<mscorlib::System::Reflection::ExceptionHandlingClause>  ExceptionHandlingClauses;
				__declspec(property(get=get_LocalVariables)) mscorlib::System::Collections::Generic::IList<mscorlib::System::Reflection::LocalVariableInfo>  LocalVariables;
				__declspec(property(get=get_InitLocals)) mscorlib::System::Boolean  InitLocals;
				__declspec(property(get=get_LocalSignatureMetadataToken)) mscorlib::System::Int32  LocalSignatureMetadataToken;
				__declspec(property(get=get_MaxStackSize)) mscorlib::System::Int32  MaxStackSize;

				//Get Set Properties Methods
				//	Get:ExceptionHandlingClauses
				mscorlib::System::Collections::Generic::IList<mscorlib::System::Reflection::ExceptionHandlingClause>  get_ExceptionHandlingClauses() const;

				//	Get:LocalVariables
				mscorlib::System::Collections::Generic::IList<mscorlib::System::Reflection::LocalVariableInfo>  get_LocalVariables() const;

				//	Get:InitLocals
				mscorlib::System::Boolean  get_InitLocals() const;

				//	Get:LocalSignatureMetadataToken
				mscorlib::System::Int32  get_LocalSignatureMetadataToken() const;

				//	Get:MaxStackSize
				mscorlib::System::Int32  get_MaxStackSize() const;

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
