#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IO_ISOLATEDSTORAGE_ISOLATEDSTORAGE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IO_ISOLATEDSTORAGE_ISOLATEDSTORAGE_H

#include <mscorlib/System/mscorlib_System_MarshalByRefObject.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/IO/IsolatedStorage/mscorlib_System_IO_IsolatedStorage_IsolatedStorageScope.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{

				class ObjRef;
				

			}
		}
	}
}
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

				class IsolatedStorage
					: public mscorlib::System::MarshalByRefObject
				{
				public:
					IsolatedStorage(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::MarshalByRefObject(nativeTypeInfo)
					{
					};
				
					IsolatedStorage(MonoObject *nativeObject)
					: mscorlib::System::MarshalByRefObject(nativeObject)
					{
					};
				
					~IsolatedStorage()
					{
					};
				

					IsolatedStorage & operator=(IsolatedStorage &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual void  Remove();
					virtual mscorlib::System::Boolean  IncreaseQuotaTo(mscorlib::System::Int64 newQuotaSize);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_ApplicationIdentity)) mscorlib::System::Object  ApplicationIdentity;
					__declspec(property(get=get_AssemblyIdentity)) mscorlib::System::Object  AssemblyIdentity;
					__declspec(property(get=get_CurrentSize)) mscorlib::System::UInt64  CurrentSize;
					__declspec(property(get=get_DomainIdentity)) mscorlib::System::Object  DomainIdentity;
					__declspec(property(get=get_MaximumSize)) mscorlib::System::UInt64  MaximumSize;
					__declspec(property(get=get_Scope)) mscorlib::System::IO::IsolatedStorage::IsolatedStorageScope::__ENUM__  Scope;
					__declspec(property(get=get_AvailableFreeSpace)) mscorlib::System::Int64  AvailableFreeSpace;
					__declspec(property(get=get_Quota)) mscorlib::System::Int64  Quota;
					__declspec(property(get=get_UsedSize)) mscorlib::System::Int64  UsedSize;

					//Get Set Properties Methods
					//	Get:ApplicationIdentity
					mscorlib::System::Object  get_ApplicationIdentity();

					//	Get:AssemblyIdentity
					mscorlib::System::Object  get_AssemblyIdentity();

					//	Get:CurrentSize
					mscorlib::System::UInt64  get_CurrentSize();

					//	Get:DomainIdentity
					mscorlib::System::Object  get_DomainIdentity();

					//	Get:MaximumSize
					mscorlib::System::UInt64  get_MaximumSize();

					//	Get:Scope
					mscorlib::System::IO::IsolatedStorage::IsolatedStorageScope::__ENUM__  get_Scope();

					//	Get:AvailableFreeSpace
					mscorlib::System::Int64  get_AvailableFreeSpace();

					//	Get:Quota
					mscorlib::System::Int64  get_Quota();

					//	Get:UsedSize
					mscorlib::System::Int64  get_UsedSize();

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
