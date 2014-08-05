#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_MANIFESTRESOURCEINFO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_MANIFESTRESOURCEINFO_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Assembly.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ResourceLocation.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class ManifestResourceInfo
				: public mscorlib::System::Object
			{
			public:
				ManifestResourceInfo(mscorlib::System::Reflection::Assembly containingAssembly, mscorlib::System::String containingFileName, mscorlib::System::Reflection::ResourceLocation::__ENUM__ resourceLocation)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Reflection.ManifestResourceInfo"))
				{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Reflection", "Assembly");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[2] = Global::GetType("mscorlib", "System.Reflection", "ResourceLocation");
					__parameters__[0] = (MonoObject*)containingAssembly;
					__parameters__[1] = (MonoObject*)containingFileName;
					int __param_resourceLocation__ = resourceLocation;
					__parameters__[2] = &__param_resourceLocation__;
					__native_object__ = Global::New("mscorlib", "System.Reflection", "ManifestResourceInfo", 3, __parameter_types__, __parameters__);
				};
			
				ManifestResourceInfo(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				ManifestResourceInfo(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~ManifestResourceInfo()
				{
				};
			

				ManifestResourceInfo & operator=(ManifestResourceInfo &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_FileName)) mscorlib::System::String  FileName;
				__declspec(property(get=get_ReferencedAssembly)) mscorlib::System::Reflection::Assembly  ReferencedAssembly;
				__declspec(property(get=get_ResourceLocation)) mscorlib::System::Reflection::ResourceLocation::__ENUM__  ResourceLocation;

				//Get Set Properties Methods
				//	Get:FileName
				mscorlib::System::String  get_FileName() const;

				//	Get:ReferencedAssembly
				mscorlib::System::Reflection::Assembly  get_ReferencedAssembly() const;

				//	Get:ResourceLocation
				mscorlib::System::Reflection::ResourceLocation::__ENUM__  get_ResourceLocation() const;

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
