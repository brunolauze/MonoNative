#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXTPROPERTY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXTPROPERTY_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{
				namespace Contexts
				{

					class ContextProperty
						: public mscorlib::System::Object
					{
					public:
						ContextProperty(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Object(nativeTypeInfo)
						{
						};
					
						ContextProperty(MonoObject *nativeObject)
						: mscorlib::System::Object(nativeObject)
						{
						};
					
						~ContextProperty()
						{
						};
					

						ContextProperty & operator=(ContextProperty &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Properties
						__declspec(property(get=get_Name)) mscorlib::System::String  Name;
						__declspec(property(get=get_Property)) mscorlib::System::Object  Property;

						//Get Set Properties Methods
						//	Get:Name
						mscorlib::System::String  get_Name() const;

						//	Get:Property
						mscorlib::System::Object  get_Property() const;

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
