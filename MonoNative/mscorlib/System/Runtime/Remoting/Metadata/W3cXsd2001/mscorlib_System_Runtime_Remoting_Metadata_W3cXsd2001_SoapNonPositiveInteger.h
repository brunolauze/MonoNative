#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_METADATA_W3CXSD2001_SOAPNONPOSITIVEINTEGER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_METADATA_W3CXSD2001_SOAPNONPOSITIVEINTEGER_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_Decimal.h>
#include <mscorlib/System/Runtime/Remoting/Metadata/W3cXsd2001/mscorlib_System_Runtime_Remoting_Metadata_W3cXsd2001_ISoapXsd.h>

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
				namespace Metadata
				{
					namespace W3cXsd2001
					{

						class SoapNonPositiveInteger
							: public mscorlib::System::Object
							, public virtual mscorlib::System::Runtime::Remoting::Metadata::W3cXsd2001::ISoapXsd
						{
						public:
							SoapNonPositiveInteger()
							: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.Metadata.W3cXsd2001.SoapNonPositiveInteger"))
							, mscorlib::System::Runtime::Remoting::Metadata::W3cXsd2001::ISoapXsd(NULL)
							{
								__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapNonPositiveInteger");
							};
						
							SoapNonPositiveInteger(mscorlib::System::Decimal value)
							: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.Metadata.W3cXsd2001.SoapNonPositiveInteger"))
							, mscorlib::System::Runtime::Remoting::Metadata::W3cXsd2001::ISoapXsd(NULL)
							{
								MonoType *__parameter_types__[1];
								void *__parameters__[1];
								__parameter_types__[0] = Global::GetType("mscorlib", "System", "Decimal");
								__parameters__[0] = (MonoObject*)value;
								__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapNonPositiveInteger", 1, __parameter_types__, __parameters__);
							};
						
							SoapNonPositiveInteger(mscorlib::NativeTypeInfo *nativeTypeInfo)
							: mscorlib::System::Object(nativeTypeInfo)
							, mscorlib::System::Runtime::Remoting::Metadata::W3cXsd2001::ISoapXsd(NULL)
							{
							};
						
							SoapNonPositiveInteger(MonoObject *nativeObject)
							: mscorlib::System::Object(nativeObject)
							, mscorlib::System::Runtime::Remoting::Metadata::W3cXsd2001::ISoapXsd(nativeObject)
							{
							};
						
							~SoapNonPositiveInteger()
							{
							};
						

							SoapNonPositiveInteger & operator=(SoapNonPositiveInteger &value) { __native_object__ = value.GetNativeObject(); return value; };
							operator MonoObject*() { return __native_object__; };
							MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


							virtual mscorlib::System::String  GetXsdType();
							static mscorlib::System::Runtime::Remoting::Metadata::W3cXsd2001::SoapNonPositiveInteger  Parse(mscorlib::System::String value);
							virtual mscorlib::System::String  ToString() override;
							virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


							//Public Properties
							__declspec(property(get=get_Value, put=set_Value)) mscorlib::System::Decimal  Value;

							//Public Static Properties
							static Property<mscorlib::System::String> XsdType;

							//Get Set Properties Methods
							//	Get/Set:Value
							mscorlib::System::Decimal  get_Value();
							void set_Value(mscorlib::System::Decimal  value);

							//Get Set Static Properties Methods
							//	Get:XsdType
							static mscorlib::System::String  get_XsdType();


						
						protected:
						
						private:
						
						};

					}
				}
			}
		}
	}
}
#endif
