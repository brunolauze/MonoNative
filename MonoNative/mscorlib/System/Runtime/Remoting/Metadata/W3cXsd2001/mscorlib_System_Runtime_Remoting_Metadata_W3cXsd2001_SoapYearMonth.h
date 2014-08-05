#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_METADATA_W3CXSD2001_SOAPYEARMONTH_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_METADATA_W3CXSD2001_SOAPYEARMONTH_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_DateTime.h>
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

						class SoapYearMonth
							: public mscorlib::System::Object
							, public virtual mscorlib::System::Runtime::Remoting::Metadata::W3cXsd2001::ISoapXsd
						{
						public:
							SoapYearMonth()
							: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.Metadata.W3cXsd2001.SoapYearMonth"))
							, mscorlib::System::Runtime::Remoting::Metadata::W3cXsd2001::ISoapXsd(NULL)
							{
								__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapYearMonth");
							};
						
							SoapYearMonth(mscorlib::System::DateTime value)
							: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.Metadata.W3cXsd2001.SoapYearMonth"))
							, mscorlib::System::Runtime::Remoting::Metadata::W3cXsd2001::ISoapXsd(NULL)
							{
								MonoType *__parameter_types__[1];
								void *__parameters__[1];
								__parameter_types__[0] = Global::GetType("mscorlib", "System", "DateTime");
								__parameters__[0] = (MonoObject*)value;
								__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapYearMonth", 1, __parameter_types__, __parameters__);
							};
						
							SoapYearMonth(mscorlib::System::DateTime value, mscorlib::System::Int32 sign)
							: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.Metadata.W3cXsd2001.SoapYearMonth"))
							, mscorlib::System::Runtime::Remoting::Metadata::W3cXsd2001::ISoapXsd(NULL)
							{
								MonoType *__parameter_types__[2];
								void *__parameters__[2];
								__parameter_types__[0] = Global::GetType("mscorlib", "System", "DateTime");
								__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
								__parameters__[0] = (MonoObject*)value;
								__parameters__[1] = &sign;
								__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapYearMonth", 2, __parameter_types__, __parameters__);
							};
						
							SoapYearMonth(mscorlib::NativeTypeInfo *nativeTypeInfo)
							: mscorlib::System::Object(nativeTypeInfo)
							, mscorlib::System::Runtime::Remoting::Metadata::W3cXsd2001::ISoapXsd(NULL)
							{
							};
						
							SoapYearMonth(MonoObject *nativeObject)
							: mscorlib::System::Object(nativeObject)
							, mscorlib::System::Runtime::Remoting::Metadata::W3cXsd2001::ISoapXsd(nativeObject)
							{
							};
						
							~SoapYearMonth()
							{
							};
						

							SoapYearMonth & operator=(SoapYearMonth &value) { __native_object__ = value.GetNativeObject(); return value; };
							operator MonoObject*() { return __native_object__; };
							MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


							virtual mscorlib::System::String  GetXsdType();
							static mscorlib::System::Runtime::Remoting::Metadata::W3cXsd2001::SoapYearMonth  Parse(mscorlib::System::String value);
							virtual mscorlib::System::String  ToString() override;
							virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


							//Public Properties
							__declspec(property(get=get_Sign, put=set_Sign)) mscorlib::System::Int32  Sign;
							__declspec(property(get=get_Value, put=set_Value)) mscorlib::System::DateTime  Value;

							//Public Static Properties
							static Property<mscorlib::System::String , mscorlib::System::Runtime::Remoting::Metadata::W3cXsd2001::SoapYearMonth> XsdType;

							//Get Set Properties Methods
							//	Get/Set:Sign
							mscorlib::System::Int32  get_Sign() const;
							void set_Sign(mscorlib::System::Int32  value);

							//	Get/Set:Value
							mscorlib::System::DateTime  get_Value() const;
							void set_Value(mscorlib::System::DateTime  value);

							//Get Set Static Properties Methods
							//	Get:XsdType
							static mscorlib::System::String  get_XsdType();
							static void set_XsdType(mscorlib::System::String  value);


						
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
