#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_LocalBuilder.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{
			namespace Emit
			{

				//Public Methods
				void LocalBuilder::SetLocalSymInfo(mscorlib::System::String name, mscorlib::System::Int32 startOffset, mscorlib::System::Int32 endOffset)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(startOffset).name());
						__parameter_types__[2] = Global::GetType(typeid(endOffset).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = &startOffset;
						__parameters__[2] = &endOffset;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "LocalBuilder", 0, NULL, "SetLocalSymInfo", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				}

				void LocalBuilder::SetLocalSymInfo(mscorlib::System::String name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)name;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "LocalBuilder", 0, NULL, "SetLocalSymInfo", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				//Get Set Properties Methods
				//	Get:LocalType
				mscorlib::System::Type  LocalBuilder::get_LocalType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "LocalBuilder", 0, NULL, "get_LocalType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:IsPinned
				mscorlib::System::Boolean  LocalBuilder::get_IsPinned()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "LocalBuilder", 0, NULL, "get_IsPinned", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:LocalIndex
				mscorlib::System::Int32  LocalBuilder::get_LocalIndex()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "LocalBuilder", 0, NULL, "get_LocalIndex", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
