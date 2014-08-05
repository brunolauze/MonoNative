#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_WINDOWSRUNTIME_RETURNVALUENAMEATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_WINDOWSRUNTIME_RETURNVALUENAMEATTRIBUTE_H

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
			namespace InteropServices
			{
				namespace WindowsRuntime
				{

					class ReturnValueNameAttribute
						: public mscorlib::System::Attribute
						, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
					{
					public:
						ReturnValueNameAttribute(mscorlib::System::String name)
						: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.InteropServices.WindowsRuntime.ReturnValueNameAttribute"))
						, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
						{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
							__parameters__[0] = (MonoObject*)name;
							__native_object__ = Global::New("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "ReturnValueNameAttribute", 1, __parameter_types__, __parameters__);
						};
					
						ReturnValueNameAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Attribute(nativeTypeInfo)
						, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
						{
						};
					
						ReturnValueNameAttribute(MonoObject *nativeObject)
						: mscorlib::System::Attribute(nativeObject)
						, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
						{
						};
					
						~ReturnValueNameAttribute()
						{
						};
					

						ReturnValueNameAttribute & operator=(ReturnValueNameAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Properties
						__declspec(property(get=get_Name, put=set_Name)) mscorlib::System::String  Name;
						__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

						//Get Set Properties Methods
						//	Get/Set:Name
						mscorlib::System::String  get_Name() const;
						void set_Name(mscorlib::System::String  value);

						//	Get:TypeId
						mscorlib::System::Object  get_TypeId() const;

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
