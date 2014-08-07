#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_VERSIONING_VERSIONINGHELPER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_VERSIONING_VERSIONINGHELPER_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/Versioning/mscorlib_System_Runtime_Versioning_ResourceScope.h>

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
		namespace Runtime
		{
			namespace Versioning
			{

				class VersioningHelper
					: public mscorlib::System::Object
				{
				public:
					VersioningHelper(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					VersioningHelper(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~VersioningHelper()
					{
					};
				

					VersioningHelper & operator=(VersioningHelper &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(VersioningHelper &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					static mscorlib::System::String  MakeVersionSafeName(mscorlib::System::String name, mscorlib::System::Runtime::Versioning::ResourceScope::__ENUM__ from, mscorlib::System::Runtime::Versioning::ResourceScope::__ENUM__ to);
					static mscorlib::System::String  MakeVersionSafeName(const char *name, mscorlib::System::Runtime::Versioning::ResourceScope::__ENUM__ from, mscorlib::System::Runtime::Versioning::ResourceScope::__ENUM__ to);
					static mscorlib::System::String  MakeVersionSafeName(mscorlib::System::String name, mscorlib::System::Runtime::Versioning::ResourceScope::__ENUM__ from, mscorlib::System::Runtime::Versioning::ResourceScope::__ENUM__ to, mscorlib::System::Type type);
					static mscorlib::System::String  MakeVersionSafeName(const char *name, mscorlib::System::Runtime::Versioning::ResourceScope::__ENUM__ from, mscorlib::System::Runtime::Versioning::ResourceScope::__ENUM__ to, mscorlib::System::Type type);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
