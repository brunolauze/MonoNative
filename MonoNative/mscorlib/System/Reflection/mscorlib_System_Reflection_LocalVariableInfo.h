#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_LOCALVARIABLEINFO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_LOCALVARIABLEINFO_H

#include <mscorlib/System/mscorlib_System_Object.h>

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

			class LocalVariableInfo
				: public mscorlib::System::Object
			{
			public:
				LocalVariableInfo(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				LocalVariableInfo(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~LocalVariableInfo()
				{
				};
			

				LocalVariableInfo & operator=(LocalVariableInfo &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::String  ToString() override;
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_IsPinned)) mscorlib::System::Boolean  IsPinned;
				__declspec(property(get=get_LocalIndex)) mscorlib::System::Int32  LocalIndex;
				__declspec(property(get=get_LocalType)) mscorlib::System::Type  LocalType;

				//Get Set Properties Methods
				//	Get:IsPinned
				mscorlib::System::Boolean  get_IsPinned();

				//	Get:LocalIndex
				mscorlib::System::Int32  get_LocalIndex();

				//	Get:LocalType
				mscorlib::System::Type  get_LocalType();

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
