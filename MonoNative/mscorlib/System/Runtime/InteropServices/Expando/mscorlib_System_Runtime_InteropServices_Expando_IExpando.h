#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_EXPANDO_IEXPANDO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_EXPANDO_IEXPANDO_H

#include <mscorlib/System/Reflection/mscorlib_System_Reflection_IReflect.h>

namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class FieldInfo;
			class MethodInfo;
			class PropertyInfo;
			class MemberInfo;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class String;
		class Delegate;
		

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
				namespace Expando
				{

					class IExpando
						: public virtual mscorlib::System::Reflection::IReflect
					{
					public:
						IExpando(MonoObject *nativeObject)
						: mscorlib::System::Reflection::IReflect(nativeObject)
						{
						};
					
						~IExpando()
						{
						};
					

						__declspec(property(get=get___mscorlib_System_Runtime_InteropServices_Expando_IExpando, put=set___mscorlib_System_Runtime_InteropServices_Expando_IExpando)) MonoObject *__mscorlib_System_Runtime_InteropServices_Expando_IExpando;
						MonoObject* get___mscorlib_System_Runtime_InteropServices_Expando_IExpando() const
						{
							return IExpando::__mscorlib_System_Reflection_IReflect;
						}
						void set___mscorlib_System_Runtime_InteropServices_Expando_IExpando(MonoObject *value)
						{
							IExpando::__mscorlib_System_Reflection_IReflect = value;
						}
						IExpando & operator=(IExpando &value) { __mscorlib_System_Runtime_InteropServices_Expando_IExpando = value.__mscorlib_System_Runtime_InteropServices_Expando_IExpando; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_Expando_IExpando; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_Expando_IExpando = value; return value; };


						virtual mscorlib::System::Reflection::FieldInfo  AddField(mscorlib::System::String name);
						virtual mscorlib::System::Reflection::FieldInfo  AddField(const char *name);
						virtual mscorlib::System::Reflection::MethodInfo  AddMethod(mscorlib::System::String name, mscorlib::System::Delegate method);
						virtual mscorlib::System::Reflection::MethodInfo  AddMethod(const char *name, mscorlib::System::Delegate method);
						virtual mscorlib::System::Reflection::PropertyInfo  AddProperty(mscorlib::System::String name);
						virtual mscorlib::System::Reflection::PropertyInfo  AddProperty(const char *name);
						virtual void  RemoveMember(mscorlib::System::Reflection::MemberInfo m);


					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
