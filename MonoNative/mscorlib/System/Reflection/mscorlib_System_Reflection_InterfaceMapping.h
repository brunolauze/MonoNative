#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_INTERFACEMAPPING_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_INTERFACEMAPPING_H

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

			class MethodInfo;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class InterfaceMapping
				: public mscorlib::System::ValueType
			{
			public:
				InterfaceMapping(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::ValueType(nativeTypeInfo)
				{
				};
			
				InterfaceMapping(MonoObject *nativeObject)
				: mscorlib::System::ValueType(nativeObject)
				{
				};
			
				~InterfaceMapping()
				{
				};
			

				InterfaceMapping & operator=(InterfaceMapping &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(InterfaceMapping &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Fields
				__declspec(property(get=get_InterfaceMethods, put=set_InterfaceMethods)) std::vector<mscorlib::System::Reflection::MethodInfo*>  InterfaceMethods;
				__declspec(property(get=get_InterfaceType, put=set_InterfaceType)) mscorlib::System::Type  InterfaceType;
				__declspec(property(get=get_TargetMethods, put=set_TargetMethods)) std::vector<mscorlib::System::Reflection::MethodInfo*>  TargetMethods;
				__declspec(property(get=get_TargetType, put=set_TargetType)) mscorlib::System::Type  TargetType;

				//	Get/Set:InterfaceMethods
				std::vector<mscorlib::System::Reflection::MethodInfo*>  get_InterfaceMethods() const;
				void set_InterfaceMethods(std::vector<mscorlib::System::Reflection::MethodInfo*>  value);

				//	Get/Set:InterfaceType
				mscorlib::System::Type  get_InterfaceType() const;
				void set_InterfaceType(mscorlib::System::Type  value);

				//	Get/Set:TargetMethods
				std::vector<mscorlib::System::Reflection::MethodInfo*>  get_TargetMethods() const;
				void set_TargetMethods(std::vector<mscorlib::System::Reflection::MethodInfo*>  value);

				//	Get/Set:TargetType
				mscorlib::System::Type  get_TargetType() const;
				void set_TargetType(mscorlib::System::Type  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
