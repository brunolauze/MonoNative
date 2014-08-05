#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_GenericSecurityDescriptor.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_SecurityIdentifier.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace AccessControl
			{

				Property<mscorlib::System::Byte , mscorlib::System::Security::AccessControl::GenericSecurityDescriptor> mscorlib::System::Security::AccessControl::GenericSecurityDescriptor::Revision(&mscorlib::System::Security::AccessControl::GenericSecurityDescriptor::get_Revision, &mscorlib::System::Security::AccessControl::GenericSecurityDescriptor::set_Revision);
				//Public Methods
				void GenericSecurityDescriptor::GetBinaryForm(std::vector<mscorlib::System::Byte*> binaryForm, mscorlib::System::Int32 offset)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(binaryForm).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(offset).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(binaryForm, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = &offset;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericSecurityDescriptor", 0, NULL, "GetBinaryForm", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::String GenericSecurityDescriptor::GetSddlForm(mscorlib::System::Security::AccessControl::AccessControlSections::__ENUM__ includeSections)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(includeSections).name());
						__parameters__[0] = reinterpret_cast<void*>(includeSections);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericSecurityDescriptor", 0, NULL, "GetSddlForm", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::String(__result__);
				}

				mscorlib::System::Boolean GenericSecurityDescriptor::IsSddlConversionSupported()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericSecurityDescriptor", 0, NULL, "IsSddlConversionSupported", NullMonoObject, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				//Get Set Properties Methods
				//	Get:BinaryLength
				mscorlib::System::Int32  GenericSecurityDescriptor::get_BinaryLength() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericSecurityDescriptor", 0, NULL, "get_BinaryLength", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:ControlFlags
				mscorlib::System::Security::AccessControl::ControlFlags::__ENUM__  GenericSecurityDescriptor::get_ControlFlags() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericSecurityDescriptor", 0, NULL, "get_ControlFlags", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::AccessControl::ControlFlags::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get/Set:Group
				mscorlib::System::Security::Principal::SecurityIdentifier  GenericSecurityDescriptor::get_Group() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericSecurityDescriptor", 0, NULL, "get_Group", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Principal::SecurityIdentifier(__result__);
				}

				void GenericSecurityDescriptor::set_Group(mscorlib::System::Security::Principal::SecurityIdentifier  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericSecurityDescriptor", 0, NULL, "set_Group", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Owner
				mscorlib::System::Security::Principal::SecurityIdentifier  GenericSecurityDescriptor::get_Owner() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericSecurityDescriptor", 0, NULL, "get_Owner", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Principal::SecurityIdentifier(__result__);
				}

				void GenericSecurityDescriptor::set_Owner(mscorlib::System::Security::Principal::SecurityIdentifier  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericSecurityDescriptor", 0, NULL, "set_Owner", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//Get Set Static Properties Methods
				//	Get:Revision
				mscorlib::System::Byte  GenericSecurityDescriptor::get_Revision()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericSecurityDescriptor", 0, NULL, "get_Revision", NullMonoObject, 0, NULL, NULL, NULL);
					return mscorlib::System::Byte(__result__);
				}

				void GenericSecurityDescriptor::set_Revision(mscorlib::System::Byte  value)
				{
					throw;
				}




			}
		}
	}
}
