#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_ICryptoTransform.h>
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
				mscorlib::System::Int32 ICryptoTransform::TransformBlock(std::vector<mscorlib::System::Byte*> inputBuffer, mscorlib::System::Int32 inputOffset, mscorlib::System::Int32 inputCount, std::vector<mscorlib::System::Byte*> outputBuffer, mscorlib::System::Int32 outputOffset)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
						__parameter_types__[1] = Global::GetType(typeid(inputOffset).name());
						__parameter_types__[2] = Global::GetType(typeid(inputCount).name());
						__parameter_types__[3] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
						__parameter_types__[4] = Global::GetType(typeid(outputOffset).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(inputBuffer, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = &inputOffset;
						__parameters__[2] = &inputCount;
						__parameters__[3] = Global::FromArray<mscorlib::System::Byte*>(outputBuffer, typeid(mscorlib::System::Byte).name());
						__parameters__[4] = &outputOffset;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "ICryptoTransform", 0, NULL, "TransformBlock", __mscorlib_System_Security_Cryptography_ICryptoTransform, 5, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				std::vector<mscorlib::System::Byte*> ICryptoTransform::TransformFinalBlock(std::vector<mscorlib::System::Byte*> inputBuffer, mscorlib::System::Int32 inputOffset, mscorlib::System::Int32 inputCount)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
						__parameter_types__[1] = Global::GetType(typeid(inputOffset).name());
						__parameter_types__[2] = Global::GetType(typeid(inputCount).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(inputBuffer, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = &inputOffset;
						__parameters__[2] = &inputCount;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "ICryptoTransform", 0, NULL, "TransformFinalBlock", __mscorlib_System_Security_Cryptography_ICryptoTransform, 3, __parameter_types__, __parameters__, NULL);
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
				//	Get:CanReuseTransform
				mscorlib::System::Boolean  ICryptoTransform::get_CanReuseTransform() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "ICryptoTransform", 0, NULL, "get_CanReuseTransform", __mscorlib_System_Security_Cryptography_ICryptoTransform, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:CanTransformMultipleBlocks
				mscorlib::System::Boolean  ICryptoTransform::get_CanTransformMultipleBlocks() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "ICryptoTransform", 0, NULL, "get_CanTransformMultipleBlocks", __mscorlib_System_Security_Cryptography_ICryptoTransform, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:InputBlockSize
				mscorlib::System::Int32  ICryptoTransform::get_InputBlockSize() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "ICryptoTransform", 0, NULL, "get_InputBlockSize", __mscorlib_System_Security_Cryptography_ICryptoTransform, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:OutputBlockSize
				mscorlib::System::Int32  ICryptoTransform::get_OutputBlockSize() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "ICryptoTransform", 0, NULL, "get_OutputBlockSize", __mscorlib_System_Security_Cryptography_ICryptoTransform, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
