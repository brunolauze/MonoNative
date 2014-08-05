#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_IREMOTINGTYPEINFO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_IREMOTINGTYPEINFO_H

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

				class IRemotingTypeInfo
				{
				public:
					IRemotingTypeInfo(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_Remoting_IRemotingTypeInfo = nativeObject;
					};
				
					~IRemotingTypeInfo()
					{
					};
				

					IRemotingTypeInfo & operator=(IRemotingTypeInfo &value) { __mscorlib_System_Runtime_Remoting_IRemotingTypeInfo = value.__mscorlib_System_Runtime_Remoting_IRemotingTypeInfo; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_IRemotingTypeInfo; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_IRemotingTypeInfo = value; return value; };


					virtual mscorlib::System::Boolean  CanCastTo(mscorlib::System::Type fromType, mscorlib::System::Object o);


					//Public Properties
					__declspec(property(get=get_TypeName, put=set_TypeName)) mscorlib::System::String  TypeName;

					//Get Set Properties Methods
					//	Get/Set:TypeName
					mscorlib::System::String  get_TypeName() const;
					void set_TypeName(mscorlib::System::String  value);

				
				protected:
					MonoObject *__mscorlib_System_Runtime_Remoting_IRemotingTypeInfo;
				
				private:
				
				};

			}
		}
	}
}
#endif
