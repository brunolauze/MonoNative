#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_WINDOWSRUNTIME_DESIGNERNAMESPACERESOLVEEVENTARGS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_WINDOWSRUNTIME_DESIGNERNAMESPACERESOLVEEVENTARGS_H

#include <mscorlib/System/mscorlib_System_EventArgs.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Collections/ObjectModel/mscorlib_System_Collections_ObjectModel_Collection_1.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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
		namespace Runtime
		{
			namespace InteropServices
			{
				namespace WindowsRuntime
				{

					class DesignerNamespaceResolveEventArgs
						: public mscorlib::System::EventArgs
					{
					public:
						DesignerNamespaceResolveEventArgs(mscorlib::System::String namespaceName)
						: mscorlib::System::EventArgs(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.InteropServices.WindowsRuntime.DesignerNamespaceResolveEventArgs"))
						{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
							__parameters__[0] = (MonoObject*)namespaceName;
							__native_object__ = Global::New("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "DesignerNamespaceResolveEventArgs", 1, __parameter_types__, __parameters__);
						};
					
						DesignerNamespaceResolveEventArgs(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::EventArgs(nativeTypeInfo)
						{
						};
					
						DesignerNamespaceResolveEventArgs(MonoObject *nativeObject)
						: mscorlib::System::EventArgs(nativeObject)
						{
						};
					
						~DesignerNamespaceResolveEventArgs()
						{
						};
					

						DesignerNamespaceResolveEventArgs & operator=(DesignerNamespaceResolveEventArgs &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Properties
						__declspec(property(get=get_NamespaceName, put=set_NamespaceName)) mscorlib::System::String  NamespaceName;
						__declspec(property(get=get_ResolvedAssemblyFiles, put=set_ResolvedAssemblyFiles)) mscorlib::System::Collections::ObjectModel::Collection<mscorlib::System::String>  ResolvedAssemblyFiles;

						//Get Set Properties Methods
						//	Get/Set:NamespaceName
						mscorlib::System::String  get_NamespaceName() const;
						void set_NamespaceName(mscorlib::System::String  value);

						//	Get/Set:ResolvedAssemblyFiles
						mscorlib::System::Collections::ObjectModel::Collection<mscorlib::System::String>  get_ResolvedAssemblyFiles() const;
						void set_ResolvedAssemblyFiles(mscorlib::System::Collections::ObjectModel::Collection<mscorlib::System::String>  value);

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
