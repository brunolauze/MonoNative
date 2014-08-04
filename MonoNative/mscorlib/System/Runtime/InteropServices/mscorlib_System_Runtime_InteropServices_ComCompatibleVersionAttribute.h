#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMCOMPATIBLEVERSIONATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMCOMPATIBLEVERSIONATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
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
		namespace Runtime
		{
			namespace InteropServices
			{

				class ComCompatibleVersionAttribute
					: public mscorlib::System::Attribute
					, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
				{
				public:
					ComCompatibleVersionAttribute(mscorlib::System::Int32 major, mscorlib::System::Int32 minor, mscorlib::System::Int32 build, mscorlib::System::Int32 revision)
					: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.InteropServices.ComCompatibleVersionAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
						__parameter_types__[3] = Global::GetType("mscorlib", "System", "Int32");
						__parameters__[0] = &major;
						__parameters__[1] = &minor;
						__parameters__[2] = &build;
						__parameters__[3] = &revision;
						__native_object__ = Global::New("mscorlib", "System.Runtime.InteropServices", "ComCompatibleVersionAttribute", 4, __parameter_types__, __parameters__);
					};
				
					ComCompatibleVersionAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Attribute(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
					};
				
					ComCompatibleVersionAttribute(MonoObject *nativeObject)
					: mscorlib::System::Attribute(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
					{
					};
				
					~ComCompatibleVersionAttribute()
					{
					};
				

					ComCompatibleVersionAttribute & operator=(ComCompatibleVersionAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_MajorVersion)) mscorlib::System::Int32  MajorVersion;
					__declspec(property(get=get_MinorVersion)) mscorlib::System::Int32  MinorVersion;
					__declspec(property(get=get_BuildNumber)) mscorlib::System::Int32  BuildNumber;
					__declspec(property(get=get_RevisionNumber)) mscorlib::System::Int32  RevisionNumber;
					__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

					//Get Set Properties Methods
					//	Get:MajorVersion
					mscorlib::System::Int32  get_MajorVersion();

					//	Get:MinorVersion
					mscorlib::System::Int32  get_MinorVersion();

					//	Get:BuildNumber
					mscorlib::System::Int32  get_BuildNumber();

					//	Get:RevisionNumber
					mscorlib::System::Int32  get_RevisionNumber();

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
