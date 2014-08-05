#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_WINDOWSRUNTIME_WINDOWSRUNTIMEMETADATA_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_WINDOWSRUNTIME_WINDOWSRUNTIMEMETADATA_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>

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
			namespace InteropServices
			{
				namespace WindowsRuntime
				{

					class DesignerNamespaceResolveEventArgs;
					class NamespaceResolveEventArgs;
					

				}
			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{
				namespace WindowsRuntime
				{

					class WindowsRuntimeMetadata
						: public mscorlib::System::Object
					{
					public:
						WindowsRuntimeMetadata(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Object(nativeTypeInfo)
						{
						};
					
						WindowsRuntimeMetadata(MonoObject *nativeObject)
						: mscorlib::System::Object(nativeObject)
						{
						};
					
						~WindowsRuntimeMetadata()
						{
						};
					

						WindowsRuntimeMetadata & operator=(WindowsRuntimeMetadata &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>  ResolveNamespace(mscorlib::System::String namespaceName, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> packageGraphFilePaths);
						static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>  ResolveNamespace(const char *namespaceName, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> packageGraphFilePaths);
						static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>  ResolveNamespace(mscorlib::System::String namespaceName, mscorlib::System::String windowsSdkFilePath, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> packageGraphFilePaths);
						static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>  ResolveNamespace(const char *namespaceName, const char *windowsSdkFilePath, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> packageGraphFilePaths);
						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
