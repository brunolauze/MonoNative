#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IO_ISOLATEDSTORAGE_ISOLATEDSTORAGESECURITYSTATE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IO_ISOLATEDSTORAGE_ISOLATEDSTORAGESECURITYSTATE_H

#include <mscorlib/System/Security/mscorlib_System_Security_SecurityState.h>
#include <mscorlib/System/IO/IsolatedStorage/mscorlib_System_IO_IsolatedStorage_IsolatedStorageSecurityOptions.h>
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
		namespace IO
		{
			namespace IsolatedStorage
			{

				class IsolatedStorageSecurityState
					: public mscorlib::System::Security::SecurityState
				{
				public:
					IsolatedStorageSecurityState(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::SecurityState(nativeTypeInfo)
					{
					};
				
					IsolatedStorageSecurityState(MonoObject *nativeObject)
					: mscorlib::System::Security::SecurityState(nativeObject)
					{
					};
				
					~IsolatedStorageSecurityState()
					{
					};
				

					IsolatedStorageSecurityState & operator=(IsolatedStorageSecurityState &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual void  EnsureState() override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Options)) mscorlib::System::IO::IsolatedStorage::IsolatedStorageSecurityOptions::__ENUM__  Options;
					__declspec(property(get=get_Quota, put=set_Quota)) mscorlib::System::Int64  Quota;
					__declspec(property(get=get_UsedSize)) mscorlib::System::Int64  UsedSize;

					//Get Set Properties Methods
					//	Get:Options
					mscorlib::System::IO::IsolatedStorage::IsolatedStorageSecurityOptions::__ENUM__  get_Options() const;

					//	Get/Set:Quota
					mscorlib::System::Int64  get_Quota() const;
					void set_Quota(mscorlib::System::Int64  value);

					//	Get:UsedSize
					mscorlib::System::Int64  get_UsedSize() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
