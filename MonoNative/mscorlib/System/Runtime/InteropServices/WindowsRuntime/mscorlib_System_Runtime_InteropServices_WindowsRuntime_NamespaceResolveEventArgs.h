#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_WINDOWSRUNTIME_NAMESPACERESOLVEEVENTARGS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_WINDOWSRUNTIME_NAMESPACERESOLVEEVENTARGS_H

#include <mscorlib/System/mscorlib_System_EventArgs.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Assembly.h>
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

					class NamespaceResolveEventArgs
						: public mscorlib::System::EventArgs
					{
					public:
						NamespaceResolveEventArgs(mscorlib::System::String namespaceName, mscorlib::System::Reflection::Assembly requestingAssembly)
						: mscorlib::System::EventArgs(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.InteropServices.WindowsRuntime.NamespaceResolveEventArgs"))
						{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
							__parameter_types__[1] = Global::GetType("mscorlib", "System.Reflection", "Assembly");
							__parameters__[0] = (MonoObject*)namespaceName;
							__parameters__[1] = (MonoObject*)requestingAssembly;
							__native_object__ = Global::New("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "NamespaceResolveEventArgs", 2, __parameter_types__, __parameters__);
						};
					
						NamespaceResolveEventArgs(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::EventArgs(nativeTypeInfo)
						{
						};
					
						NamespaceResolveEventArgs(MonoObject *nativeObject)
						: mscorlib::System::EventArgs(nativeObject)
						{
						};
					
						~NamespaceResolveEventArgs()
						{
						};
					

						NamespaceResolveEventArgs & operator=(NamespaceResolveEventArgs &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Properties
						__declspec(property(get=get_NamespaceName, put=set_NamespaceName)) mscorlib::System::String  NamespaceName;
						__declspec(property(get=get_RequestingAssembly, put=set_RequestingAssembly)) mscorlib::System::Reflection::Assembly  RequestingAssembly;
						__declspec(property(get=get_ResolvedAssemblies, put=set_ResolvedAssemblies)) mscorlib::System::Collections::ObjectModel::Collection<mscorlib::System::Reflection::Assembly>  ResolvedAssemblies;

						//Get Set Properties Methods
						//	Get/Set:NamespaceName
						mscorlib::System::String  get_NamespaceName() const;
						void set_NamespaceName(mscorlib::System::String  value);

						//	Get/Set:RequestingAssembly
						mscorlib::System::Reflection::Assembly  get_RequestingAssembly() const;
						void set_RequestingAssembly(mscorlib::System::Reflection::Assembly  value);

						//	Get/Set:ResolvedAssemblies
						mscorlib::System::Collections::ObjectModel::Collection<mscorlib::System::Reflection::Assembly>  get_ResolvedAssemblies() const;
						void set_ResolvedAssemblies(mscorlib::System::Collections::ObjectModel::Collection<mscorlib::System::Reflection::Assembly>  value);

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
