#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_DSAParameters.h>
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
				//	Get/Set:Counter
				mscorlib::System::Int32 DSAParameters::get_Counter()
				{
					return Global::GetFieldInt32Value(__native_object__, "Counter");
				}

				void DSAParameters::set_Counter(mscorlib::System::Int32  value)
				{
				}

				//	Get/Set:G
				std::vector<mscorlib::System::Byte*> DSAParameters::get_G()
				{
					MonoObject *__result__ = Global::GetFieldValue("mscorlib", "System.Security.Cryptography", "DSAParameters", 0, NULL, "G");
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

				void DSAParameters::set_G(std::vector<mscorlib::System::Byte*>  value)
				{
				}

				//	Get/Set:J
				std::vector<mscorlib::System::Byte*> DSAParameters::get_J()
				{
					MonoObject *__result__ = Global::GetFieldValue("mscorlib", "System.Security.Cryptography", "DSAParameters", 0, NULL, "J");
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

				void DSAParameters::set_J(std::vector<mscorlib::System::Byte*>  value)
				{
				}

				//	Get/Set:P
				std::vector<mscorlib::System::Byte*> DSAParameters::get_P()
				{
					MonoObject *__result__ = Global::GetFieldValue("mscorlib", "System.Security.Cryptography", "DSAParameters", 0, NULL, "P");
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

				void DSAParameters::set_P(std::vector<mscorlib::System::Byte*>  value)
				{
				}

				//	Get/Set:Q
				std::vector<mscorlib::System::Byte*> DSAParameters::get_Q()
				{
					MonoObject *__result__ = Global::GetFieldValue("mscorlib", "System.Security.Cryptography", "DSAParameters", 0, NULL, "Q");
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

				void DSAParameters::set_Q(std::vector<mscorlib::System::Byte*>  value)
				{
				}

				//	Get/Set:Seed
				std::vector<mscorlib::System::Byte*> DSAParameters::get_Seed()
				{
					MonoObject *__result__ = Global::GetFieldValue("mscorlib", "System.Security.Cryptography", "DSAParameters", 0, NULL, "Seed");
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

				void DSAParameters::set_Seed(std::vector<mscorlib::System::Byte*>  value)
				{
				}

				//	Get/Set:X
				std::vector<mscorlib::System::Byte*> DSAParameters::get_X()
				{
					MonoObject *__result__ = Global::GetFieldValue("mscorlib", "System.Security.Cryptography", "DSAParameters", 0, NULL, "X");
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

				void DSAParameters::set_X(std::vector<mscorlib::System::Byte*>  value)
				{
				}

				//	Get/Set:Y
				std::vector<mscorlib::System::Byte*> DSAParameters::get_Y()
				{
					MonoObject *__result__ = Global::GetFieldValue("mscorlib", "System.Security.Cryptography", "DSAParameters", 0, NULL, "Y");
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

				void DSAParameters::set_Y(std::vector<mscorlib::System::Byte*>  value)
				{
				}


			}
		}
	}
}
