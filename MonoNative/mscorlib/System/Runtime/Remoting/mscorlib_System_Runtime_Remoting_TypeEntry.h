#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_TYPEENTRY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_TYPEENTRY_H

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

				class TypeEntry
					: public mscorlib::System::Object
				{
				public:
					TypeEntry(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					TypeEntry(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~TypeEntry()
					{
					};
				

					TypeEntry & operator=(TypeEntry &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(TypeEntry &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_AssemblyName, put=set_AssemblyName)) mscorlib::System::String  AssemblyName;
					__declspec(property(get=get_TypeName, put=set_TypeName)) mscorlib::System::String  TypeName;

					//Get Set Properties Methods
					//	Get/Set:AssemblyName
					mscorlib::System::String  get_AssemblyName() const;
					void set_AssemblyName(mscorlib::System::String  value);

					//	Get/Set:TypeName
					mscorlib::System::String  get_TypeName() const;
					void set_TypeName(mscorlib::System::String  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
