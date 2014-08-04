#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_LABEL_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_LABEL_H

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

				class Label
					: public mscorlib::System::ValueType
				{
				public:
					Label(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::ValueType(nativeTypeInfo)
					{
					};
				
					Label(MonoObject *nativeObject)
					: mscorlib::System::ValueType(nativeObject)
					{
					};
				
					~Label()
					{
					};
				

					Label & operator=(Label &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
					mscorlib::System::Boolean  Equals(mscorlib::System::Reflection::Emit::Label obj);
					virtual mscorlib::System::Int32  GetHashCode() override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
