#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_INTERNALSVISIBLETOATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_INTERNALSVISIBLETOATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>
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
			namespace CompilerServices
			{

				class InternalsVisibleToAttribute
					: public mscorlib::System::Attribute
					, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
				{
				public:
					InternalsVisibleToAttribute(mscorlib::System::String assemblyName)
					: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.CompilerServices.InternalsVisibleToAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)assemblyName;
						__native_object__ = Global::New("mscorlib", "System.Runtime.CompilerServices", "InternalsVisibleToAttribute", 1, __parameter_types__, __parameters__);
					};
				
					InternalsVisibleToAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Attribute(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
					};
				
					InternalsVisibleToAttribute(MonoObject *nativeObject)
					: mscorlib::System::Attribute(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
					{
					};
				
					~InternalsVisibleToAttribute()
					{
					};
				

					InternalsVisibleToAttribute & operator=(InternalsVisibleToAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_AssemblyName)) mscorlib::System::String  AssemblyName;
					__declspec(property(get=get_AllInternalsVisible, put=set_AllInternalsVisible)) mscorlib::System::Boolean  AllInternalsVisible;
					__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

					//Get Set Properties Methods
					//	Get:AssemblyName
					mscorlib::System::String  get_AssemblyName();

					//	Get/Set:AllInternalsVisible
					mscorlib::System::Boolean  get_AllInternalsVisible();
					void set_AllInternalsVisible(mscorlib::System::Boolean  value);

					//	Get:TypeId
					mscorlib::System::Object  get_TypeId();

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
