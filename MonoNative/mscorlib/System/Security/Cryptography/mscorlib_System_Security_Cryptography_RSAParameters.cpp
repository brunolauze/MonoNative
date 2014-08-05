#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_RSAParameters.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_Byte.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Cryptography
			{

				//Public Methods
				//	Get/Set:P
				std::vector<mscorlib::System::Byte*> RSAParameters::get_P() const
				{
					MonoObject *__result__ = Global::GetFieldValue("mscorlib", "System.Security.Cryptography", "RSAParameters", 0, NULL, "P");
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

				void RSAParameters::set_P(std::vector<mscorlib::System::Byte*>  value)
				{
				}

				//	Get/Set:Q
				std::vector<mscorlib::System::Byte*> RSAParameters::get_Q() const
				{
					MonoObject *__result__ = Global::GetFieldValue("mscorlib", "System.Security.Cryptography", "RSAParameters", 0, NULL, "Q");
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

				void RSAParameters::set_Q(std::vector<mscorlib::System::Byte*>  value)
				{
				}

				//	Get/Set:D
				std::vector<mscorlib::System::Byte*> RSAParameters::get_D() const
				{
					MonoObject *__result__ = Global::GetFieldValue("mscorlib", "System.Security.Cryptography", "RSAParameters", 0, NULL, "D");
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

				void RSAParameters::set_D(std::vector<mscorlib::System::Byte*>  value)
				{
				}

				//	Get/Set:DP
				std::vector<mscorlib::System::Byte*> RSAParameters::get_DP() const
				{
					MonoObject *__result__ = Global::GetFieldValue("mscorlib", "System.Security.Cryptography", "RSAParameters", 0, NULL, "DP");
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

				void RSAParameters::set_DP(std::vector<mscorlib::System::Byte*>  value)
				{
				}

				//	Get/Set:DQ
				std::vector<mscorlib::System::Byte*> RSAParameters::get_DQ() const
				{
					MonoObject *__result__ = Global::GetFieldValue("mscorlib", "System.Security.Cryptography", "RSAParameters", 0, NULL, "DQ");
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

				void RSAParameters::set_DQ(std::vector<mscorlib::System::Byte*>  value)
				{
				}

				//	Get/Set:InverseQ
				std::vector<mscorlib::System::Byte*> RSAParameters::get_InverseQ() const
				{
					MonoObject *__result__ = Global::GetFieldValue("mscorlib", "System.Security.Cryptography", "RSAParameters", 0, NULL, "InverseQ");
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

				void RSAParameters::set_InverseQ(std::vector<mscorlib::System::Byte*>  value)
				{
				}

				//	Get/Set:Modulus
				std::vector<mscorlib::System::Byte*> RSAParameters::get_Modulus() const
				{
					MonoObject *__result__ = Global::GetFieldValue("mscorlib", "System.Security.Cryptography", "RSAParameters", 0, NULL, "Modulus");
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

				void RSAParameters::set_Modulus(std::vector<mscorlib::System::Byte*>  value)
				{
				}

				//	Get/Set:Exponent
				std::vector<mscorlib::System::Byte*> RSAParameters::get_Exponent() const
				{
					MonoObject *__result__ = Global::GetFieldValue("mscorlib", "System.Security.Cryptography", "RSAParameters", 0, NULL, "Exponent");
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

				void RSAParameters::set_Exponent(std::vector<mscorlib::System::Byte*>  value)
				{
				}


			}
		}
	}
}
