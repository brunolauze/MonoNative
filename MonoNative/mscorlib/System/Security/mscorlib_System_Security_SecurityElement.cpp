#include <mscorlib/System/Security/mscorlib_System_Security_SecurityElement.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_Hashtable.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_ArrayList.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			//Public Methods
			void SecurityElement::AddAttribute(mscorlib::System::String name, mscorlib::System::String value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)name;
					__parameters__[1] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security", "SecurityElement", 0, NULL, "AddAttribute", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void SecurityElement::AddAttribute(const char *name, const char *value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), name);
					__parameters__[1] = mono_string_new(Global::GetDomain(), value);
					Global::InvokeMethod("mscorlib", "System.Security", "SecurityElement", 0, NULL, "AddAttribute", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void SecurityElement::AddChild(mscorlib::System::Security::SecurityElement child)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(child).name());
					__parameters__[0] = (MonoObject*)child;
					Global::InvokeMethod("mscorlib", "System.Security", "SecurityElement", 0, NULL, "AddChild", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::String SecurityElement::Attribute(mscorlib::System::String name)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameters__[0] = (MonoObject*)name;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityElement", 0, NULL, "Attribute", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String SecurityElement::Attribute(const char *name)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), name);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityElement", 0, NULL, "Attribute", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::Security::SecurityElement SecurityElement::Copy()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityElement", 0, NULL, "Copy", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::SecurityElement(__result__);
			}

			mscorlib::System::Boolean SecurityElement::Equal(mscorlib::System::Security::SecurityElement other)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(other).name());
					__parameters__[0] = (MonoObject*)other;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityElement", 0, NULL, "Equal", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::String SecurityElement::Escape(mscorlib::System::String str)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(str).name());
					__parameters__[0] = (MonoObject*)str;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityElement", 0, NULL, "Escape", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String SecurityElement::Escape(const char *str)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), str);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityElement", 0, NULL, "Escape", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::Security::SecurityElement SecurityElement::FromString(mscorlib::System::String xml)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(xml).name());
					__parameters__[0] = (MonoObject*)xml;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityElement", 0, NULL, "FromString", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::SecurityElement(__result__);
			}

			mscorlib::System::Security::SecurityElement SecurityElement::FromString(const char *xml)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), xml);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityElement", 0, NULL, "FromString", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::SecurityElement(__result__);
			}

			mscorlib::System::Boolean SecurityElement::IsValidAttributeName(mscorlib::System::String name)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameters__[0] = (MonoObject*)name;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityElement", 0, NULL, "IsValidAttributeName", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean SecurityElement::IsValidAttributeName(const char *name)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), name);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityElement", 0, NULL, "IsValidAttributeName", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean SecurityElement::IsValidAttributeValue(mscorlib::System::String value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityElement", 0, NULL, "IsValidAttributeValue", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean SecurityElement::IsValidAttributeValue(const char *value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), value);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityElement", 0, NULL, "IsValidAttributeValue", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean SecurityElement::IsValidTag(mscorlib::System::String tag)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(tag).name());
					__parameters__[0] = (MonoObject*)tag;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityElement", 0, NULL, "IsValidTag", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean SecurityElement::IsValidTag(const char *tag)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), tag);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityElement", 0, NULL, "IsValidTag", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean SecurityElement::IsValidText(mscorlib::System::String text)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(text).name());
					__parameters__[0] = (MonoObject*)text;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityElement", 0, NULL, "IsValidText", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean SecurityElement::IsValidText(const char *text)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), text);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityElement", 0, NULL, "IsValidText", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Security::SecurityElement SecurityElement::SearchForChildByTag(mscorlib::System::String tag)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(tag).name());
					__parameters__[0] = (MonoObject*)tag;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityElement", 0, NULL, "SearchForChildByTag", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::SecurityElement(__result__);
			}

			mscorlib::System::Security::SecurityElement SecurityElement::SearchForChildByTag(const char *tag)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), tag);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityElement", 0, NULL, "SearchForChildByTag", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::SecurityElement(__result__);
			}

			mscorlib::System::String SecurityElement::SearchForTextOfTag(mscorlib::System::String tag)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(tag).name());
					__parameters__[0] = (MonoObject*)tag;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityElement", 0, NULL, "SearchForTextOfTag", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String SecurityElement::SearchForTextOfTag(const char *tag)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), tag);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityElement", 0, NULL, "SearchForTextOfTag", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String SecurityElement::ToString()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityElement", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
			}

			//Get Set Properties Methods
			//	Get/Set:Attributes
			mscorlib::System::Collections::Hashtable  SecurityElement::get_Attributes() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityElement", 0, NULL, "get_Attributes", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::Hashtable(__result__);
			}

			void SecurityElement::set_Attributes(mscorlib::System::Collections::Hashtable  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Security", "SecurityElement", 0, NULL, "set_Attributes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:Children
			mscorlib::System::Collections::ArrayList  SecurityElement::get_Children() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityElement", 0, NULL, "get_Children", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::ArrayList(__result__);
			}

			void SecurityElement::set_Children(mscorlib::System::Collections::ArrayList  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Security", "SecurityElement", 0, NULL, "set_Children", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:Tag
			mscorlib::System::String  SecurityElement::get_Tag() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityElement", 0, NULL, "get_Tag", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void SecurityElement::set_Tag(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Security", "SecurityElement", 0, NULL, "set_Tag", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:Text
			mscorlib::System::String  SecurityElement::get_Text() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityElement", 0, NULL, "get_Text", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void SecurityElement::set_Text(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Security", "SecurityElement", 0, NULL, "set_Text", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}



		}
	}
}
