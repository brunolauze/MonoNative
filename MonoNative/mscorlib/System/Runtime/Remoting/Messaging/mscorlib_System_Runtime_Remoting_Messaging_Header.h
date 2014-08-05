#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_MESSAGING_HEADER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_MESSAGING_HEADER_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_String.h>

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
			namespace Remoting
			{
				namespace Messaging
				{

					class Header
						: public mscorlib::System::Object
					{
					public:
						Header(mscorlib::System::String _Name, mscorlib::System::Object _Value)
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.Messaging.Header"))
						{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
							__parameter_types__[1] = Global::GetType("mscorlib", "System", "Object");
							__parameters__[0] = (MonoObject*)_Name;
							__parameters__[1] = (MonoObject*)_Value;
							__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting.Messaging", "Header", 2, __parameter_types__, __parameters__);
						};
					
						Header(mscorlib::System::String _Name, mscorlib::System::Object _Value, mscorlib::System::Boolean _MustUnderstand)
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.Messaging.Header"))
						{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
							__parameter_types__[1] = Global::GetType("mscorlib", "System", "Object");
							__parameter_types__[2] = Global::GetType("mscorlib", "System", "Boolean");
							__parameters__[0] = (MonoObject*)_Name;
							__parameters__[1] = (MonoObject*)_Value;
							__parameters__[2] = reinterpret_cast<void*>(_MustUnderstand);
							__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting.Messaging", "Header", 3, __parameter_types__, __parameters__);
						};
					
						Header(mscorlib::System::String _Name, mscorlib::System::Object _Value, mscorlib::System::Boolean _MustUnderstand, mscorlib::System::String _HeaderNamespace)
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.Messaging.Header"))
						{
							MonoType *__parameter_types__[4];
							void *__parameters__[4];
							__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
							__parameter_types__[1] = Global::GetType("mscorlib", "System", "Object");
							__parameter_types__[2] = Global::GetType("mscorlib", "System", "Boolean");
							__parameter_types__[3] = Global::GetType("mscorlib", "System", "String");
							__parameters__[0] = (MonoObject*)_Name;
							__parameters__[1] = (MonoObject*)_Value;
							__parameters__[2] = reinterpret_cast<void*>(_MustUnderstand);
							__parameters__[3] = (MonoObject*)_HeaderNamespace;
							__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting.Messaging", "Header", 4, __parameter_types__, __parameters__);
						};
					
						Header(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Object(nativeTypeInfo)
						{
						};
					
						Header(MonoObject *nativeObject)
						: mscorlib::System::Object(nativeObject)
						{
						};
					
						~Header()
						{
						};
					

						Header & operator=(Header &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Fields
						__declspec(property(get=get_HeaderNamespace, put=set_HeaderNamespace)) mscorlib::System::String  HeaderNamespace;
						__declspec(property(get=get_MustUnderstand, put=set_MustUnderstand)) mscorlib::System::Boolean  MustUnderstand;
						__declspec(property(get=get_Name, put=set_Name)) mscorlib::System::String  Name;
						__declspec(property(get=get_Value, put=set_Value)) mscorlib::System::Object  Value;

						//	Get/Set:HeaderNamespace
						mscorlib::System::String  get_HeaderNamespace() const;
						void set_HeaderNamespace(mscorlib::System::String  value);

						//	Get/Set:MustUnderstand
						mscorlib::System::Boolean  get_MustUnderstand() const;
						void set_MustUnderstand(mscorlib::System::Boolean  value);

						//	Get/Set:Name
						mscorlib::System::String  get_Name() const;
						void set_Name(mscorlib::System::String  value);

						//	Get/Set:Value
						mscorlib::System::Object  get_Value() const;
						void set_Value(mscorlib::System::Object  value);

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
