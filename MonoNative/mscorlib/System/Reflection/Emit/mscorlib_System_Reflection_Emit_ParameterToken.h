#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_PARAMETERTOKEN_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_PARAMETERTOKEN_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
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

				class ParameterToken
					: public mscorlib::System::ValueType
				{
				public:
					ParameterToken(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::ValueType(nativeTypeInfo)
					{
					};
				
					ParameterToken(MonoObject *nativeObject)
					: mscorlib::System::ValueType(nativeObject)
					{
					};
				
					~ParameterToken()
					{
					};
				

					ParameterToken & operator=(ParameterToken &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
					mscorlib::System::Boolean  Equals(mscorlib::System::Reflection::Emit::ParameterToken obj);
					virtual mscorlib::System::Int32  GetHashCode() override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Token)) mscorlib::System::Int32  Token;

					//Public Static Fields
					static Property<mscorlib::System::Reflection::Emit::ParameterToken> Empty;

					//Get Set Properties Methods
					//	Get:Token
					mscorlib::System::Int32  get_Token();

					//	Get/Set:Empty
					static mscorlib::System::Reflection::Emit::ParameterToken  get_Empty();

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
