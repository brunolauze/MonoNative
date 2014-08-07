#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_SECURITYELEMENT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_SECURITYELEMENT_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_String.h>

namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			class Hashtable;
			class ArrayList;
			

		}
	}
}
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
		namespace Security
		{

			class SecurityElement
				: public mscorlib::System::Object
			{
			public:
				SecurityElement(mscorlib::System::String tag)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.SecurityElement"))
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)tag;
					__native_object__ = Global::New("mscorlib", "System.Security", "SecurityElement", 1, __parameter_types__, __parameters__);
				};
			
				SecurityElement(mscorlib::System::String tag, mscorlib::System::String text)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.SecurityElement"))
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)tag;
					__parameters__[1] = (MonoObject*)text;
					__native_object__ = Global::New("mscorlib", "System.Security", "SecurityElement", 2, __parameter_types__, __parameters__);
				};
			
				SecurityElement(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				SecurityElement(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~SecurityElement()
				{
				};
			

				SecurityElement & operator=(SecurityElement &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(SecurityElement &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				void  AddAttribute(mscorlib::System::String name, mscorlib::System::String value);
				void  AddAttribute(const char *name, const char *value);
				void  AddChild(mscorlib::System::Security::SecurityElement child);
				mscorlib::System::String  Attribute(mscorlib::System::String name);
				mscorlib::System::String  Attribute(const char *name);
				mscorlib::System::Security::SecurityElement  Copy();
				mscorlib::System::Boolean  Equal(mscorlib::System::Security::SecurityElement other);
				static mscorlib::System::String  Escape(mscorlib::System::String str);
				static mscorlib::System::String  Escape(const char *str);
				static mscorlib::System::Security::SecurityElement  FromString(mscorlib::System::String xml);
				static mscorlib::System::Security::SecurityElement  FromString(const char *xml);
				static mscorlib::System::Boolean  IsValidAttributeName(mscorlib::System::String name);
				static mscorlib::System::Boolean  IsValidAttributeName(const char *name);
				static mscorlib::System::Boolean  IsValidAttributeValue(mscorlib::System::String value);
				static mscorlib::System::Boolean  IsValidAttributeValue(const char *value);
				static mscorlib::System::Boolean  IsValidTag(mscorlib::System::String tag);
				static mscorlib::System::Boolean  IsValidTag(const char *tag);
				static mscorlib::System::Boolean  IsValidText(mscorlib::System::String text);
				static mscorlib::System::Boolean  IsValidText(const char *text);
				mscorlib::System::Security::SecurityElement  SearchForChildByTag(mscorlib::System::String tag);
				mscorlib::System::Security::SecurityElement  SearchForChildByTag(const char *tag);
				mscorlib::System::String  SearchForTextOfTag(mscorlib::System::String tag);
				mscorlib::System::String  SearchForTextOfTag(const char *tag);
				virtual mscorlib::System::String  ToString() override;
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Attributes, put=set_Attributes)) mscorlib::System::Collections::Hashtable  Attributes;
				__declspec(property(get=get_Children, put=set_Children)) mscorlib::System::Collections::ArrayList  Children;
				__declspec(property(get=get_Tag, put=set_Tag)) mscorlib::System::String  Tag;
				__declspec(property(get=get_Text, put=set_Text)) mscorlib::System::String  Text;

				//Get Set Properties Methods
				//	Get/Set:Attributes
				mscorlib::System::Collections::Hashtable  get_Attributes() const;
				void set_Attributes(mscorlib::System::Collections::Hashtable  value);

				//	Get/Set:Children
				mscorlib::System::Collections::ArrayList  get_Children() const;
				void set_Children(mscorlib::System::Collections::ArrayList  value);

				//	Get/Set:Tag
				mscorlib::System::String  get_Tag() const;
				void set_Tag(mscorlib::System::String  value);

				//	Get/Set:Text
				mscorlib::System::String  get_Text() const;
				void set_Text(mscorlib::System::String  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
