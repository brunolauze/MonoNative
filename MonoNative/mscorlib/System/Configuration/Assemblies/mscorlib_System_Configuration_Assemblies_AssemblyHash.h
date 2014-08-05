#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_CONFIGURATION_ASSEMBLIES_ASSEMBLYHASH_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_CONFIGURATION_ASSEMBLIES_ASSEMBLYHASH_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/Configuration/Assemblies/mscorlib_System_Configuration_Assemblies_AssemblyHashAlgorithm.h>
#include <mscorlib/System/mscorlib_System_ICloneable.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Byte;
		class String;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Configuration
		{
			namespace Assemblies
			{

				class AssemblyHash
					: public mscorlib::System::ValueType
					, public virtual mscorlib::System::ICloneable
				{
				public:
					AssemblyHash(mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__ algorithm, std::vector<mscorlib::System::Byte*> value)
					: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Configuration.Assemblies.AssemblyHash"))
					, mscorlib::System::ICloneable(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Configuration.Assemblies", "AssemblyHashAlgorithm");
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType("mscorlib", "System", "Byte"))->eklass);
						int __param_algorithm__ = algorithm;
						__parameters__[0] = &__param_algorithm__;
						__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(value, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "Byte");
						__native_object__ = Global::New("mscorlib", "System.Configuration.Assemblies", "AssemblyHash", 2, __parameter_types__, __parameters__);
					};
				
					AssemblyHash(std::vector<mscorlib::System::Byte*> value)
					: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Configuration.Assemblies.AssemblyHash"))
					, mscorlib::System::ICloneable(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType("mscorlib", "System", "Byte"))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(value, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "Byte");
						__native_object__ = Global::New("mscorlib", "System.Configuration.Assemblies", "AssemblyHash", 1, __parameter_types__, __parameters__);
					};
				
					AssemblyHash(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::ValueType(nativeTypeInfo)
					, mscorlib::System::ICloneable(NULL)
					{
					};
				
					AssemblyHash(MonoObject *nativeObject)
					: mscorlib::System::ValueType(nativeObject)
					, mscorlib::System::ICloneable(nativeObject)
					{
					};
				
					~AssemblyHash()
					{
					};
				

					AssemblyHash & operator=(AssemblyHash &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Object  Clone();
					std::vector<mscorlib::System::Byte*>  GetValue();
					void  SetValue(std::vector<mscorlib::System::Byte*> value);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Algorithm, put=set_Algorithm)) mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__  Algorithm;

					//Public Static Fields
					static Property<mscorlib::System::Configuration::Assemblies::AssemblyHash , mscorlib::System::Configuration::Assemblies::AssemblyHash> Empty;

					//Get Set Properties Methods
					//	Get/Set:Algorithm
					mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__  get_Algorithm() const;
					void set_Algorithm(mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__  value);

					//	Get/Set:Empty
					static mscorlib::System::Configuration::Assemblies::AssemblyHash  get_Empty();
					static void set_Empty(mscorlib::System::Configuration::Assemblies::AssemblyHash  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
