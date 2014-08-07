#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PRINCIPAL_WINDOWSIMPERSONATIONCONTEXT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PRINCIPAL_WINDOWSIMPERSONATIONCONTEXT_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>

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
		namespace Security
		{
			namespace Principal
			{

				class WindowsImpersonationContext
					: public mscorlib::System::Object
					, public virtual mscorlib::System::IDisposable
				{
				public:
					WindowsImpersonationContext(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::IDisposable(NULL)
					{
					};
				
					WindowsImpersonationContext(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::IDisposable(nativeObject)
					{
					};
				
					~WindowsImpersonationContext()
					{
					};
				

					WindowsImpersonationContext & operator=(WindowsImpersonationContext &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(WindowsImpersonationContext &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual void  Dispose();
					void  Undo();
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
