#include <mscorlib/System/Threading/mscorlib_System_Threading_CompressedStack.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			//Public Methods
			mscorlib::System::Threading::CompressedStack CompressedStack::CreateCopy()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "CompressedStack", 0, NULL, "CreateCopy", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Threading::CompressedStack(__result__);
			}

			mscorlib::System::Threading::CompressedStack CompressedStack::Capture()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "CompressedStack", 0, NULL, "Capture", NullMonoObject, 0, NULL, NULL, NULL);
					return mscorlib::System::Threading::CompressedStack(__result__);
			}

			mscorlib::System::Threading::CompressedStack CompressedStack::GetCompressedStack()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "CompressedStack", 0, NULL, "GetCompressedStack", NullMonoObject, 0, NULL, NULL, NULL);
					return mscorlib::System::Threading::CompressedStack(__result__);
			}

			void CompressedStack::GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(info).name());
					__parameter_types__[1] = Global::GetType(typeid(context).name());
					__parameters__[0] = (MonoObject*)info;
					__parameters__[1] = (MonoObject*)context;
					Global::InvokeMethod("mscorlib", "System.Threading", "CompressedStack", 0, NULL, "GetObjectData", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void CompressedStack::Run(mscorlib::System::Threading::CompressedStack compressedStack, mscorlib::Callback<void  (mscorlib::System::Object )> callback, mscorlib::System::Object state)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(compressedStack).name());
					__parameter_types__[1] = Global::GetType(typeid(callback).name());
					__parameter_types__[2] = Global::GetType(typeid(state).name());
					__parameters__[0] = (MonoObject*)compressedStack;
					__parameters__[1] = &callback;
					__parameters__[2] = (MonoObject*)state;
					Global::InvokeMethod("mscorlib", "System.Threading", "CompressedStack", 0, NULL, "Run", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
			}


		}
	}
}
