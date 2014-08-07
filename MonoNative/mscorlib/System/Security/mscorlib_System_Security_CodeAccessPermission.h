#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CODEACCESSPERMISSION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CODEACCESSPERMISSION_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Security/mscorlib_System_Security_ISecurityEncodable.h>
#include <mscorlib/System/Security/mscorlib_System_Security_IPermission.h>
#include <mscorlib/System/Security/mscorlib_System_Security_IStackWalk.h>

namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			class SecurityElement;
			

		}
	}
}
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
		namespace Security
		{

			class CodeAccessPermission
				: public mscorlib::System::Object
				, public virtual mscorlib::System::Security::ISecurityEncodable
				, public virtual mscorlib::System::Security::IPermission
				, public virtual mscorlib::System::Security::IStackWalk
			{
			public:
				CodeAccessPermission(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::Security::ISecurityEncodable(NULL)
				, mscorlib::System::Security::IPermission(NULL)
				, mscorlib::System::Security::IStackWalk(NULL)
				{
				};
			
				CodeAccessPermission(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::Security::ISecurityEncodable(nativeObject)
				, mscorlib::System::Security::IPermission(nativeObject)
				, mscorlib::System::Security::IStackWalk(nativeObject)
				{
				};
			
				~CodeAccessPermission()
				{
				};
			

				CodeAccessPermission & operator=(CodeAccessPermission &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(CodeAccessPermission &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual void  Assert();
				virtual mscorlib::System::Security::IPermission  Copy();
				virtual void  Demand();
				virtual void  Deny();
				virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
				virtual void  FromXml(mscorlib::System::Security::SecurityElement elem);
				virtual mscorlib::System::Int32  GetHashCode() override;
				virtual mscorlib::System::Security::IPermission  Intersect(mscorlib::System::Security::IPermission target);
				virtual mscorlib::System::Boolean  IsSubsetOf(mscorlib::System::Security::IPermission target);
				virtual mscorlib::System::String  ToString() override;
				virtual mscorlib::System::Security::SecurityElement  ToXml();
				virtual mscorlib::System::Security::IPermission  Union(mscorlib::System::Security::IPermission other);
				virtual void  PermitOnly();
				static void  RevertAll();
				static void  RevertAssert();
				static void  RevertDeny();
				static void  RevertPermitOnly();
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
