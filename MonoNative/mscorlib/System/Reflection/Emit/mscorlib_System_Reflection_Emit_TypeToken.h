#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_TYPETOKEN_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_TYPETOKEN_H

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

				class TypeToken
					: public mscorlib::System::ValueType
				{
				public:
					TypeToken(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::ValueType(nativeTypeInfo)
					{
					};
				
					TypeToken(MonoObject *nativeObject)
					: mscorlib::System::ValueType(nativeObject)
					{
					};
				
					~TypeToken()
					{
					};
				

					TypeToken & operator=(TypeToken &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
					mscorlib::System::Boolean  Equals(mscorlib::System::Reflection::Emit::TypeToken obj);
					virtual mscorlib::System::Int32  GetHashCode() override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Token)) mscorlib::System::Int32  Token;

					//Public Static Fields
					static Property<mscorlib::System::Reflection::Emit::TypeToken , mscorlib::System::Reflection::Emit::TypeToken> Empty;

					//Get Set Properties Methods
					//	Get:Token
					mscorlib::System::Int32  get_Token() const;

					//	Get/Set:Empty
					static mscorlib::System::Reflection::Emit::TypeToken  get_Empty();
					static void set_Empty(mscorlib::System::Reflection::Emit::TypeToken  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
