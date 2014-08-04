#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_ASSEMBLYALGORITHMIDATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_ASSEMBLYALGORITHMIDATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
#include <mscorlib/System/Configuration/Assemblies/mscorlib_System_Configuration_Assemblies_AssemblyHashAlgorithm.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>
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

			class AssemblyAlgorithmIdAttribute
				: public mscorlib::System::Attribute
				, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
			{
			public:
				AssemblyAlgorithmIdAttribute(mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__ algorithmId)
				: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Reflection.AssemblyAlgorithmIdAttribute"))
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Configuration.Assemblies", "AssemblyHashAlgorithm");
					__parameters__[0] = reinterpret_cast<void*>(algorithmId);
					__native_object__ = Global::New("mscorlib", "System.Reflection", "AssemblyAlgorithmIdAttribute", 1, __parameter_types__, __parameters__);
				};
			
				AssemblyAlgorithmIdAttribute(mscorlib::System::UInt32 algorithmId)
				: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Reflection.AssemblyAlgorithmIdAttribute"))
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "UInt32");
					__parameters__[0] = &algorithmId;
					__native_object__ = Global::New("mscorlib", "System.Reflection", "AssemblyAlgorithmIdAttribute", 1, __parameter_types__, __parameters__);
				};
			
				AssemblyAlgorithmIdAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Attribute(nativeTypeInfo)
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
				};
			
				AssemblyAlgorithmIdAttribute(MonoObject *nativeObject)
				: mscorlib::System::Attribute(nativeObject)
				, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
				{
				};
			
				~AssemblyAlgorithmIdAttribute()
				{
				};
			

				AssemblyAlgorithmIdAttribute & operator=(AssemblyAlgorithmIdAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_AlgorithmId)) mscorlib::System::UInt32  AlgorithmId;
				__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

				//Get Set Properties Methods
				//	Get:AlgorithmId
				mscorlib::System::UInt32  get_AlgorithmId();

				//	Get:TypeId
				mscorlib::System::Object  get_TypeId();

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
