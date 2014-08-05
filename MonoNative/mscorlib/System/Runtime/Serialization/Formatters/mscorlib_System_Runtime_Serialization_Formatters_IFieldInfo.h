#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_IFIELDINFO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_IFIELDINFO_H

#include <Global.h>

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
			namespace Serialization
			{
				namespace Formatters
				{

					class IFieldInfo
					{
					public:
						IFieldInfo(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_Serialization_Formatters_IFieldInfo = nativeObject;
						};
					
						~IFieldInfo()
						{
						};
					

						IFieldInfo & operator=(IFieldInfo &value) { __mscorlib_System_Runtime_Serialization_Formatters_IFieldInfo = value.__mscorlib_System_Runtime_Serialization_Formatters_IFieldInfo; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Serialization_Formatters_IFieldInfo; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Serialization_Formatters_IFieldInfo = value; return value; };




						//Public Properties
						__declspec(property(get=get_FieldNames, put=set_FieldNames)) std::vector<mscorlib::System::String*>  FieldNames;
						__declspec(property(get=get_FieldTypes, put=set_FieldTypes)) std::vector<mscorlib::System::Type*>  FieldTypes;

						//Get Set Properties Methods
						//	Get/Set:FieldNames
						std::vector<mscorlib::System::String*>  get_FieldNames() const;
						void set_FieldNames(std::vector<mscorlib::System::String*>  value);

						//	Get/Set:FieldTypes
						std::vector<mscorlib::System::Type*>  get_FieldTypes() const;
						void set_FieldTypes(std::vector<mscorlib::System::Type*>  value);

					
					protected:
						MonoObject *__mscorlib_System_Runtime_Serialization_Formatters_IFieldInfo;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
