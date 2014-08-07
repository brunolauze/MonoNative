#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPARAMETERS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPARAMETERS_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Type;
		class Byte;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Cryptography
			{

				class RSAParameters
					: public mscorlib::System::ValueType
				{
				public:
					RSAParameters(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::ValueType(nativeTypeInfo)
					{
					};
				
					RSAParameters(MonoObject *nativeObject)
					: mscorlib::System::ValueType(nativeObject)
					{
					};
				
					~RSAParameters()
					{
					};
				

					RSAParameters & operator=(RSAParameters &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(RSAParameters &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Fields
					__declspec(property(get=get_P, put=set_P)) std::vector<mscorlib::System::Byte*>  P;
					__declspec(property(get=get_Q, put=set_Q)) std::vector<mscorlib::System::Byte*>  Q;
					__declspec(property(get=get_D, put=set_D)) std::vector<mscorlib::System::Byte*>  D;
					__declspec(property(get=get_DP, put=set_DP)) std::vector<mscorlib::System::Byte*>  DP;
					__declspec(property(get=get_DQ, put=set_DQ)) std::vector<mscorlib::System::Byte*>  DQ;
					__declspec(property(get=get_InverseQ, put=set_InverseQ)) std::vector<mscorlib::System::Byte*>  InverseQ;
					__declspec(property(get=get_Modulus, put=set_Modulus)) std::vector<mscorlib::System::Byte*>  Modulus;
					__declspec(property(get=get_Exponent, put=set_Exponent)) std::vector<mscorlib::System::Byte*>  Exponent;

					//	Get/Set:P
					std::vector<mscorlib::System::Byte*>  get_P() const;
					void set_P(std::vector<mscorlib::System::Byte*>  value);

					//	Get/Set:Q
					std::vector<mscorlib::System::Byte*>  get_Q() const;
					void set_Q(std::vector<mscorlib::System::Byte*>  value);

					//	Get/Set:D
					std::vector<mscorlib::System::Byte*>  get_D() const;
					void set_D(std::vector<mscorlib::System::Byte*>  value);

					//	Get/Set:DP
					std::vector<mscorlib::System::Byte*>  get_DP() const;
					void set_DP(std::vector<mscorlib::System::Byte*>  value);

					//	Get/Set:DQ
					std::vector<mscorlib::System::Byte*>  get_DQ() const;
					void set_DQ(std::vector<mscorlib::System::Byte*>  value);

					//	Get/Set:InverseQ
					std::vector<mscorlib::System::Byte*>  get_InverseQ() const;
					void set_InverseQ(std::vector<mscorlib::System::Byte*>  value);

					//	Get/Set:Modulus
					std::vector<mscorlib::System::Byte*>  get_Modulus() const;
					void set_Modulus(std::vector<mscorlib::System::Byte*>  value);

					//	Get/Set:Exponent
					std::vector<mscorlib::System::Byte*>  get_Exponent() const;
					void set_Exponent(std::vector<mscorlib::System::Byte*>  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
