#include <mscorlib/System/Runtime/Remoting/Metadata/W3cXsd2001/mscorlib_System_Runtime_Remoting_Metadata_W3cXsd2001_SoapHexBinary.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{
				namespace Metadata
				{
					namespace W3cXsd2001
					{

						//Public Methods
						mscorlib::System::String SoapHexBinary::GetXsdType()
						{
								MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapHexBinary", 0, NULL, "GetXsdType", __native_object__, 0, NULL, NULL, NULL);
								return mscorlib::System::String(__result__);
						}

						mscorlib::System::Runtime::Remoting::Metadata::W3cXsd2001::SoapHexBinary SoapHexBinary::Parse(mscorlib::System::String value)
						{
								MonoType *__parameter_types__[1];
								void *__parameters__[1];
								__parameter_types__[0] = Global::GetType(typeid(value).name());
								__parameters__[0] = (MonoObject*)value;
								MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapHexBinary", 0, NULL, "Parse", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
								return mscorlib::System::Runtime::Remoting::Metadata::W3cXsd2001::SoapHexBinary(__result__);
						}

						mscorlib::System::String SoapHexBinary::ToString()
						{
								MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapHexBinary", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
								return mscorlib::System::String(__result__);
						}

						//Get Set Properties Methods
						//	Get/Set:Value
						std::vector<mscorlib::System::Byte*>  SoapHexBinary::get_Value()
						{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapHexBinary", 0, NULL, "get_Value", __native_object__, 0, NULL, NULL, NULL);
							MonoArray *__array_ptr__ = (MonoArray*)__result__;
							uintptr_t __array_length__ = mono_array_length(__array_ptr__);
							std::vector<mscorlib::System::Byte*>  __array_result__(__array_length__);
							for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
							{
								MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
								__array_result__.push_back(new mscorlib::System::Byte (__array_item__));
							}
							return __array_result__;
						}

						void SoapHexBinary::set_Value(std::vector<mscorlib::System::Byte*>  value)
						{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
							__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(value, typeid(mscorlib::System::Byte).name());
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapHexBinary", 0, NULL, "set_Value", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						}


						//Get Set Static Properties Methods
						//	Get:XsdType
						mscorlib::System::String  SoapHexBinary::get_XsdType()
						{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapHexBinary", 0, NULL, "get_XsdType", NullMonoObject, 0, NULL, NULL, NULL);
							return mscorlib::System::String(__result__);
						}




					}
				}
			}
		}
	}
}
