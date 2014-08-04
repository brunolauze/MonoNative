#include <mscorlib/System/Diagnostics/CodeAnalysis/mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{
			namespace CodeAnalysis
			{

				//Public Methods
				//Get Set Properties Methods
				//	Get:Category
				mscorlib::System::String  SuppressMessageAttribute::get_Category()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.CodeAnalysis", "SuppressMessageAttribute", 0, NULL, "get_Category", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:CheckId
				mscorlib::System::String  SuppressMessageAttribute::get_CheckId()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.CodeAnalysis", "SuppressMessageAttribute", 0, NULL, "get_CheckId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get/Set:Justification
				mscorlib::System::String  SuppressMessageAttribute::get_Justification()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.CodeAnalysis", "SuppressMessageAttribute", 0, NULL, "get_Justification", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void SuppressMessageAttribute::set_Justification(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Diagnostics.CodeAnalysis", "SuppressMessageAttribute", 0, NULL, "set_Justification", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:MessageId
				mscorlib::System::String  SuppressMessageAttribute::get_MessageId()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.CodeAnalysis", "SuppressMessageAttribute", 0, NULL, "get_MessageId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void SuppressMessageAttribute::set_MessageId(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Diagnostics.CodeAnalysis", "SuppressMessageAttribute", 0, NULL, "set_MessageId", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Scope
				mscorlib::System::String  SuppressMessageAttribute::get_Scope()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.CodeAnalysis", "SuppressMessageAttribute", 0, NULL, "get_Scope", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void SuppressMessageAttribute::set_Scope(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Diagnostics.CodeAnalysis", "SuppressMessageAttribute", 0, NULL, "set_Scope", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Target
				mscorlib::System::String  SuppressMessageAttribute::get_Target()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.CodeAnalysis", "SuppressMessageAttribute", 0, NULL, "get_Target", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void SuppressMessageAttribute::set_Target(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Diagnostics.CodeAnalysis", "SuppressMessageAttribute", 0, NULL, "set_Target", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:TypeId
				mscorlib::System::Object  SuppressMessageAttribute::get_TypeId()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
