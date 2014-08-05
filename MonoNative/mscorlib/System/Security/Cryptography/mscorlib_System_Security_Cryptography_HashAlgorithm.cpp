#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_HashAlgorithm.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/IO/mscorlib_System_IO_Stream.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Cryptography
			{

				//Public Methods
				void HashAlgorithm::Clear()
				{
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "HashAlgorithm", 0, NULL, "Clear", __native_object__, 0, NULL, NULL, NULL);
				}

				std::vector<mscorlib::System::Byte*> HashAlgorithm::ComputeHash(std::vector<mscorlib::System::Byte*> buffer)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(buffer).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(buffer, typeid(mscorlib::System::Byte).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "HashAlgorithm", 0, NULL, "ComputeHash", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Byte*> HashAlgorithm::ComputeHash(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(buffer).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(offset).name());
						__parameter_types__[2] = Global::GetType(typeid(count).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(buffer, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = &offset;
						__parameters__[2] = &count;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "HashAlgorithm", 0, NULL, "ComputeHash", __native_object__, 3, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Byte*> HashAlgorithm::ComputeHash(mscorlib::System::IO::Stream inputStream)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(inputStream).name());
						__parameters__[0] = (MonoObject*)inputStream;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "HashAlgorithm", 0, NULL, "ComputeHash", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				mscorlib::System::Security::Cryptography::HashAlgorithm HashAlgorithm::Create()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "HashAlgorithm", 0, NULL, "Create", NullMonoObject, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::Cryptography::HashAlgorithm(__result__);
				}

				mscorlib::System::Security::Cryptography::HashAlgorithm HashAlgorithm::Create(mscorlib::System::String hashName)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(hashName).name());
						__parameters__[0] = (MonoObject*)hashName;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "HashAlgorithm", 0, NULL, "Create", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Cryptography::HashAlgorithm(__result__);
				}

				void HashAlgorithm::Initialize()
				{
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "HashAlgorithm", 0, NULL, "Initialize", __native_object__, 0, NULL, NULL, NULL);
				}

				void HashAlgorithm::Dispose()
				{
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "HashAlgorithm", 0, NULL, "Dispose", __native_object__, 0, NULL, NULL, NULL);
				}

				mscorlib::System::Int32 HashAlgorithm::TransformBlock(std::vector<mscorlib::System::Byte*> inputBuffer, mscorlib::System::Int32 inputOffset, mscorlib::System::Int32 inputCount, std::vector<mscorlib::System::Byte*> outputBuffer, mscorlib::System::Int32 outputOffset)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(inputBuffer).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(inputOffset).name());
						__parameter_types__[2] = Global::GetType(typeid(inputCount).name());
						__parameter_types__[3] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(outputBuffer).name()))->eklass);
						__parameter_types__[4] = Global::GetType(typeid(outputOffset).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(inputBuffer, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = &inputOffset;
						__parameters__[2] = &inputCount;
						__parameters__[3] = Global::FromArray<mscorlib::System::Byte*>(outputBuffer, typeid(mscorlib::System::Byte).name());
						__parameters__[4] = &outputOffset;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "HashAlgorithm", 0, NULL, "TransformBlock", __native_object__, 5, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				std::vector<mscorlib::System::Byte*> HashAlgorithm::TransformFinalBlock(std::vector<mscorlib::System::Byte*> inputBuffer, mscorlib::System::Int32 inputOffset, mscorlib::System::Int32 inputCount)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(inputBuffer).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(inputOffset).name());
						__parameter_types__[2] = Global::GetType(typeid(inputCount).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(inputBuffer, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = &inputOffset;
						__parameters__[2] = &inputCount;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "HashAlgorithm", 0, NULL, "TransformFinalBlock", __native_object__, 3, __parameter_types__, __parameters__, NULL);
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

				//Get Set Properties Methods
				//	Get:CanTransformMultipleBlocks
				mscorlib::System::Boolean  HashAlgorithm::get_CanTransformMultipleBlocks() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "HashAlgorithm", 0, NULL, "get_CanTransformMultipleBlocks", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:CanReuseTransform
				mscorlib::System::Boolean  HashAlgorithm::get_CanReuseTransform() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "HashAlgorithm", 0, NULL, "get_CanReuseTransform", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:Hash
				std::vector<mscorlib::System::Byte*>  HashAlgorithm::get_Hash() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "HashAlgorithm", 0, NULL, "get_Hash", __native_object__, 0, NULL, NULL, NULL);
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


				//	Get:HashSize
				mscorlib::System::Int32  HashAlgorithm::get_HashSize() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "HashAlgorithm", 0, NULL, "get_HashSize", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:InputBlockSize
				mscorlib::System::Int32  HashAlgorithm::get_InputBlockSize() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "HashAlgorithm", 0, NULL, "get_InputBlockSize", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:OutputBlockSize
				mscorlib::System::Int32  HashAlgorithm::get_OutputBlockSize() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "HashAlgorithm", 0, NULL, "get_OutputBlockSize", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
