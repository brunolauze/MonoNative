#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_DSAPARAMETERS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_DSAPARAMETERS_H

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

				class DSAParameters
					: public mscorlib::System::ValueType
				{
				public:
					DSAParameters(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::ValueType(nativeTypeInfo)
					{
					};
				
					DSAParameters(MonoObject *nativeObject)
					: mscorlib::System::ValueType(nativeObject)
					{
					};
				
					~DSAParameters()
					{
					};
				

					DSAParameters & operator=(DSAParameters &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(DSAParameters &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Fields
					__declspec(property(get=get_Counter, put=set_Counter)) mscorlib::System::Int32  Counter;
					__declspec(property(get=get_G, put=set_G)) std::vector<mscorlib::System::Byte*>  G;
					__declspec(property(get=get_J, put=set_J)) std::vector<mscorlib::System::Byte*>  J;
					__declspec(property(get=get_P, put=set_P)) std::vector<mscorlib::System::Byte*>  P;
					__declspec(property(get=get_Q, put=set_Q)) std::vector<mscorlib::System::Byte*>  Q;
					__declspec(property(get=get_Seed, put=set_Seed)) std::vector<mscorlib::System::Byte*>  Seed;
					__declspec(property(get=get_X, put=set_X)) std::vector<mscorlib::System::Byte*>  X;
					__declspec(property(get=get_Y, put=set_Y)) std::vector<mscorlib::System::Byte*>  Y;

					//	Get/Set:Counter
					mscorlib::System::Int32  get_Counter() const;
					void set_Counter(mscorlib::System::Int32  value);

					//	Get/Set:G
					std::vector<mscorlib::System::Byte*>  get_G() const;
					void set_G(std::vector<mscorlib::System::Byte*>  value);

					//	Get/Set:J
					std::vector<mscorlib::System::Byte*>  get_J() const;
					void set_J(std::vector<mscorlib::System::Byte*>  value);

					//	Get/Set:P
					std::vector<mscorlib::System::Byte*>  get_P() const;
					void set_P(std::vector<mscorlib::System::Byte*>  value);

					//	Get/Set:Q
					std::vector<mscorlib::System::Byte*>  get_Q() const;
					void set_Q(std::vector<mscorlib::System::Byte*>  value);

					//	Get/Set:Seed
					std::vector<mscorlib::System::Byte*>  get_Seed() const;
					void set_Seed(std::vector<mscorlib::System::Byte*>  value);

					//	Get/Set:X
					std::vector<mscorlib::System::Byte*>  get_X() const;
					void set_X(std::vector<mscorlib::System::Byte*>  value);

					//	Get/Set:Y
					std::vector<mscorlib::System::Byte*>  get_Y() const;
					void set_Y(std::vector<mscorlib::System::Byte*>  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
