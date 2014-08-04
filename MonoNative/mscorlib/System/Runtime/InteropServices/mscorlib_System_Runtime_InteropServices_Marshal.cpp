#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_Marshal.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MemberInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Module.h>
#include <mscorlib/System/mscorlib_System_Exception.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_Thread.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Assembly.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodInfo.h>
#include <mscorlib/System/Security/mscorlib_System_Security_SecureString.h>
#include <mscorlib/System/mscorlib_System_Array.h>
#include <mscorlib/System/mscorlib_System_Delegate.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Public Methods
				mscorlib::System::Int32 Marshal::AddRef(mscorlib::System::IntPtr pUnk)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(pUnk).name());
						__parameters__[0] = (MonoObject*)pUnk;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "AddRef", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::IntPtr Marshal::AllocCoTaskMem(mscorlib::System::Int32 cb)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(cb).name());
						__parameters__[0] = &cb;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "AllocCoTaskMem", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
				}

				mscorlib::System::IntPtr Marshal::AllocHGlobal(mscorlib::System::IntPtr cb)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(cb).name());
						__parameters__[0] = (MonoObject*)cb;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "AllocHGlobal", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
				}

				mscorlib::System::IntPtr Marshal::AllocHGlobal(mscorlib::System::Int32 cb)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(cb).name());
						__parameters__[0] = &cb;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "AllocHGlobal", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
				}

				mscorlib::System::Object Marshal::BindToMoniker(mscorlib::System::String monikerName)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(monikerName).name());
						__parameters__[0] = (MonoObject*)monikerName;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "BindToMoniker", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				void Marshal::ChangeWrapperHandleStrength(mscorlib::System::Object otp, mscorlib::System::Boolean fIsWeak)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(otp).name());
						__parameter_types__[1] = Global::GetType(typeid(fIsWeak).name());
						__parameters__[0] = (MonoObject*)otp;
						__parameters__[1] = reinterpret_cast<void*>(fIsWeak);
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "ChangeWrapperHandleStrength", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::Copy(std::vector<mscorlib::System::Byte*> source, mscorlib::System::Int32 startIndex, mscorlib::System::IntPtr destination, mscorlib::System::Int32 length)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(source).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
						__parameter_types__[2] = Global::GetType(typeid(destination).name());
						__parameter_types__[3] = Global::GetType(typeid(length).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(source, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = &startIndex;
						__parameters__[2] = (MonoObject*)destination;
						__parameters__[3] = &length;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "Copy", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::Copy(std::vector<mscorlib::System::Char*> source, mscorlib::System::Int32 startIndex, mscorlib::System::IntPtr destination, mscorlib::System::Int32 length)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(source).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
						__parameter_types__[2] = Global::GetType(typeid(destination).name());
						__parameter_types__[3] = Global::GetType(typeid(length).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(source, typeid(mscorlib::System::Char).name());
						__parameters__[1] = &startIndex;
						__parameters__[2] = (MonoObject*)destination;
						__parameters__[3] = &length;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "Copy", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::Copy(std::vector<mscorlib::System::Int16*> source, mscorlib::System::Int32 startIndex, mscorlib::System::IntPtr destination, mscorlib::System::Int32 length)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(source).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
						__parameter_types__[2] = Global::GetType(typeid(destination).name());
						__parameter_types__[3] = Global::GetType(typeid(length).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Int16*>(source, typeid(mscorlib::System::Int16).name());
						__parameters__[1] = &startIndex;
						__parameters__[2] = (MonoObject*)destination;
						__parameters__[3] = &length;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "Copy", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::Copy(std::vector<mscorlib::System::Int32*> source, mscorlib::System::Int32 startIndex, mscorlib::System::IntPtr destination, mscorlib::System::Int32 length)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(source).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
						__parameter_types__[2] = Global::GetType(typeid(destination).name());
						__parameter_types__[3] = Global::GetType(typeid(length).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Int32*>(source, typeid(mscorlib::System::Int32).name());
						__parameters__[1] = &startIndex;
						__parameters__[2] = (MonoObject*)destination;
						__parameters__[3] = &length;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "Copy", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::Copy(std::vector<mscorlib::System::Int64*> source, mscorlib::System::Int32 startIndex, mscorlib::System::IntPtr destination, mscorlib::System::Int32 length)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(source).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
						__parameter_types__[2] = Global::GetType(typeid(destination).name());
						__parameter_types__[3] = Global::GetType(typeid(length).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Int64*>(source, typeid(mscorlib::System::Int64).name());
						__parameters__[1] = &startIndex;
						__parameters__[2] = (MonoObject*)destination;
						__parameters__[3] = &length;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "Copy", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::Copy(std::vector<mscorlib::System::Single*> source, mscorlib::System::Int32 startIndex, mscorlib::System::IntPtr destination, mscorlib::System::Int32 length)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(source).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
						__parameter_types__[2] = Global::GetType(typeid(destination).name());
						__parameter_types__[3] = Global::GetType(typeid(length).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Single*>(source, typeid(mscorlib::System::Single).name());
						__parameters__[1] = &startIndex;
						__parameters__[2] = (MonoObject*)destination;
						__parameters__[3] = &length;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "Copy", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::Copy(std::vector<mscorlib::System::Double*> source, mscorlib::System::Int32 startIndex, mscorlib::System::IntPtr destination, mscorlib::System::Int32 length)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(source).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
						__parameter_types__[2] = Global::GetType(typeid(destination).name());
						__parameter_types__[3] = Global::GetType(typeid(length).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Double*>(source, typeid(mscorlib::System::Double).name());
						__parameters__[1] = &startIndex;
						__parameters__[2] = (MonoObject*)destination;
						__parameters__[3] = &length;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "Copy", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::Copy(std::vector<mscorlib::System::IntPtr*> source, mscorlib::System::Int32 startIndex, mscorlib::System::IntPtr destination, mscorlib::System::Int32 length)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(source).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
						__parameter_types__[2] = Global::GetType(typeid(destination).name());
						__parameter_types__[3] = Global::GetType(typeid(length).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::IntPtr*>(source, typeid(mscorlib::System::IntPtr).name());
						__parameters__[1] = &startIndex;
						__parameters__[2] = (MonoObject*)destination;
						__parameters__[3] = &length;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "Copy", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::Copy(mscorlib::System::IntPtr source, std::vector<mscorlib::System::Byte*> destination, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 length)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(source).name());
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(destination).name()))->eklass);
						__parameter_types__[2] = Global::GetType(typeid(startIndex).name());
						__parameter_types__[3] = Global::GetType(typeid(length).name());
						__parameters__[0] = (MonoObject*)source;
						__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(destination, typeid(mscorlib::System::Byte).name());
						__parameters__[2] = &startIndex;
						__parameters__[3] = &length;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "Copy", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::Copy(mscorlib::System::IntPtr source, std::vector<mscorlib::System::Char*> destination, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 length)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(source).name());
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(destination).name()))->eklass);
						__parameter_types__[2] = Global::GetType(typeid(startIndex).name());
						__parameter_types__[3] = Global::GetType(typeid(length).name());
						__parameters__[0] = (MonoObject*)source;
						__parameters__[1] = Global::FromArray<mscorlib::System::Char*>(destination, typeid(mscorlib::System::Char).name());
						__parameters__[2] = &startIndex;
						__parameters__[3] = &length;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "Copy", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::Copy(mscorlib::System::IntPtr source, std::vector<mscorlib::System::Int16*> destination, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 length)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(source).name());
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(destination).name()))->eklass);
						__parameter_types__[2] = Global::GetType(typeid(startIndex).name());
						__parameter_types__[3] = Global::GetType(typeid(length).name());
						__parameters__[0] = (MonoObject*)source;
						__parameters__[1] = Global::FromArray<mscorlib::System::Int16*>(destination, typeid(mscorlib::System::Int16).name());
						__parameters__[2] = &startIndex;
						__parameters__[3] = &length;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "Copy", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::Copy(mscorlib::System::IntPtr source, std::vector<mscorlib::System::Int32*> destination, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 length)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(source).name());
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(destination).name()))->eklass);
						__parameter_types__[2] = Global::GetType(typeid(startIndex).name());
						__parameter_types__[3] = Global::GetType(typeid(length).name());
						__parameters__[0] = (MonoObject*)source;
						__parameters__[1] = Global::FromArray<mscorlib::System::Int32*>(destination, typeid(mscorlib::System::Int32).name());
						__parameters__[2] = &startIndex;
						__parameters__[3] = &length;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "Copy", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::Copy(mscorlib::System::IntPtr source, std::vector<mscorlib::System::Int64*> destination, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 length)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(source).name());
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(destination).name()))->eklass);
						__parameter_types__[2] = Global::GetType(typeid(startIndex).name());
						__parameter_types__[3] = Global::GetType(typeid(length).name());
						__parameters__[0] = (MonoObject*)source;
						__parameters__[1] = Global::FromArray<mscorlib::System::Int64*>(destination, typeid(mscorlib::System::Int64).name());
						__parameters__[2] = &startIndex;
						__parameters__[3] = &length;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "Copy", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::Copy(mscorlib::System::IntPtr source, std::vector<mscorlib::System::Single*> destination, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 length)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(source).name());
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(destination).name()))->eklass);
						__parameter_types__[2] = Global::GetType(typeid(startIndex).name());
						__parameter_types__[3] = Global::GetType(typeid(length).name());
						__parameters__[0] = (MonoObject*)source;
						__parameters__[1] = Global::FromArray<mscorlib::System::Single*>(destination, typeid(mscorlib::System::Single).name());
						__parameters__[2] = &startIndex;
						__parameters__[3] = &length;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "Copy", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::Copy(mscorlib::System::IntPtr source, std::vector<mscorlib::System::Double*> destination, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 length)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(source).name());
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(destination).name()))->eklass);
						__parameter_types__[2] = Global::GetType(typeid(startIndex).name());
						__parameter_types__[3] = Global::GetType(typeid(length).name());
						__parameters__[0] = (MonoObject*)source;
						__parameters__[1] = Global::FromArray<mscorlib::System::Double*>(destination, typeid(mscorlib::System::Double).name());
						__parameters__[2] = &startIndex;
						__parameters__[3] = &length;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "Copy", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::Copy(mscorlib::System::IntPtr source, std::vector<mscorlib::System::IntPtr*> destination, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 length)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(source).name());
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(destination).name()))->eklass);
						__parameter_types__[2] = Global::GetType(typeid(startIndex).name());
						__parameter_types__[3] = Global::GetType(typeid(length).name());
						__parameters__[0] = (MonoObject*)source;
						__parameters__[1] = Global::FromArray<mscorlib::System::IntPtr*>(destination, typeid(mscorlib::System::IntPtr).name());
						__parameters__[2] = &startIndex;
						__parameters__[3] = &length;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "Copy", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::IntPtr Marshal::CreateAggregatedObject(mscorlib::System::IntPtr pOuter, mscorlib::System::Object o)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(pOuter).name());
						__parameter_types__[1] = Global::GetType(typeid(o).name());
						__parameters__[0] = (MonoObject*)pOuter;
						__parameters__[1] = (MonoObject*)o;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "CreateAggregatedObject", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
				}

				mscorlib::System::Object Marshal::CreateWrapperOfType(mscorlib::System::Object o, mscorlib::System::Type t)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(o).name());
						__parameter_types__[1] = Global::GetType(typeid(t).name());
						__parameters__[0] = (MonoObject*)o;
						__parameters__[1] = (MonoObject*)t;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "CreateWrapperOfType", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				void Marshal::DestroyStructure(mscorlib::System::IntPtr ptr, mscorlib::System::Type structuretype)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameter_types__[1] = Global::GetType(typeid(structuretype).name());
						__parameters__[0] = (MonoObject*)ptr;
						__parameters__[1] = (MonoObject*)structuretype;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "DestroyStructure", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::FreeBSTR(mscorlib::System::IntPtr ptr)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameters__[0] = (MonoObject*)ptr;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "FreeBSTR", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::FreeCoTaskMem(mscorlib::System::IntPtr ptr)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameters__[0] = (MonoObject*)ptr;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "FreeCoTaskMem", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::FreeHGlobal(mscorlib::System::IntPtr hglobal)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(hglobal).name());
						__parameters__[0] = (MonoObject*)hglobal;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "FreeHGlobal", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::ZeroFreeBSTR(mscorlib::System::IntPtr s)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(s).name());
						__parameters__[0] = (MonoObject*)s;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "ZeroFreeBSTR", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::ZeroFreeCoTaskMemAnsi(mscorlib::System::IntPtr s)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(s).name());
						__parameters__[0] = (MonoObject*)s;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "ZeroFreeCoTaskMemAnsi", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::ZeroFreeCoTaskMemUnicode(mscorlib::System::IntPtr s)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(s).name());
						__parameters__[0] = (MonoObject*)s;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "ZeroFreeCoTaskMemUnicode", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::ZeroFreeGlobalAllocAnsi(mscorlib::System::IntPtr s)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(s).name());
						__parameters__[0] = (MonoObject*)s;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "ZeroFreeGlobalAllocAnsi", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::ZeroFreeGlobalAllocUnicode(mscorlib::System::IntPtr s)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(s).name());
						__parameters__[0] = (MonoObject*)s;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "ZeroFreeGlobalAllocUnicode", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Guid Marshal::GenerateGuidForType(mscorlib::System::Type type)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(type).name());
						__parameters__[0] = (MonoObject*)type;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GenerateGuidForType", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Guid(__result__);
				}

				mscorlib::System::String Marshal::GenerateProgIdForType(mscorlib::System::Type type)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(type).name());
						__parameters__[0] = (MonoObject*)type;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GenerateProgIdForType", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::String(__result__);
				}

				mscorlib::System::Object Marshal::GetActiveObject(mscorlib::System::String progID)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(progID).name());
						__parameters__[0] = (MonoObject*)progID;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetActiveObject", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::IntPtr Marshal::GetComInterfaceForObject(mscorlib::System::Object o, mscorlib::System::Type T)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(o).name());
						__parameter_types__[1] = Global::GetType(typeid(T).name());
						__parameters__[0] = (MonoObject*)o;
						__parameters__[1] = (MonoObject*)T;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetComInterfaceForObject", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
				}

				mscorlib::System::IntPtr Marshal::GetComInterfaceForObjectInContext(mscorlib::System::Object o, mscorlib::System::Type t)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(o).name());
						__parameter_types__[1] = Global::GetType(typeid(t).name());
						__parameters__[0] = (MonoObject*)o;
						__parameters__[1] = (MonoObject*)t;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetComInterfaceForObjectInContext", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
				}

				mscorlib::System::Object Marshal::GetComObjectData(mscorlib::System::Object obj, mscorlib::System::Object key)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameter_types__[1] = Global::GetType(typeid(key).name());
						__parameters__[0] = (MonoObject*)obj;
						__parameters__[1] = (MonoObject*)key;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetComObjectData", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Int32 Marshal::GetComSlotForMethodInfo(mscorlib::System::Reflection::MemberInfo m)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(m).name());
						__parameters__[0] = (MonoObject*)m;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetComSlotForMethodInfo", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 Marshal::GetEndComSlot(mscorlib::System::Type t)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(t).name());
						__parameters__[0] = (MonoObject*)t;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetEndComSlot", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 Marshal::GetExceptionCode()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetExceptionCode", NullMonoObject, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::IntPtr Marshal::GetExceptionPointers()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetExceptionPointers", NullMonoObject, 0, NULL, NULL, NULL);
						return mscorlib::System::IntPtr(__result__);
				}

				mscorlib::System::IntPtr Marshal::GetHINSTANCE(mscorlib::System::Reflection::Module m)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(m).name());
						__parameters__[0] = (MonoObject*)m;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetHINSTANCE", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
				}

				mscorlib::System::Int32 Marshal::GetHRForException(mscorlib::System::Exception e)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(e).name());
						__parameters__[0] = (MonoObject*)e;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetHRForException", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 Marshal::GetHRForLastWin32Error()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetHRForLastWin32Error", NullMonoObject, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::IntPtr Marshal::GetIDispatchForObject(mscorlib::System::Object o)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(o).name());
						__parameters__[0] = (MonoObject*)o;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetIDispatchForObject", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
				}

				mscorlib::System::IntPtr Marshal::GetIDispatchForObjectInContext(mscorlib::System::Object o)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(o).name());
						__parameters__[0] = (MonoObject*)o;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetIDispatchForObjectInContext", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
				}

				mscorlib::System::IntPtr Marshal::GetITypeInfoForType(mscorlib::System::Type t)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(t).name());
						__parameters__[0] = (MonoObject*)t;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetITypeInfoForType", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
				}

				mscorlib::System::IntPtr Marshal::GetIUnknownForObject(mscorlib::System::Object o)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(o).name());
						__parameters__[0] = (MonoObject*)o;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetIUnknownForObject", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
				}

				mscorlib::System::IntPtr Marshal::GetIUnknownForObjectInContext(mscorlib::System::Object o)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(o).name());
						__parameters__[0] = (MonoObject*)o;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetIUnknownForObjectInContext", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
				}

				mscorlib::System::IntPtr Marshal::GetManagedThunkForUnmanagedMethodPtr(mscorlib::System::IntPtr pfnMethodToWrap, mscorlib::System::IntPtr pbSignature, mscorlib::System::Int32 cbSignature)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(pfnMethodToWrap).name());
						__parameter_types__[1] = Global::GetType(typeid(pbSignature).name());
						__parameter_types__[2] = Global::GetType(typeid(cbSignature).name());
						__parameters__[0] = (MonoObject*)pfnMethodToWrap;
						__parameters__[1] = (MonoObject*)pbSignature;
						__parameters__[2] = &cbSignature;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetManagedThunkForUnmanagedMethodPtr", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
				}

				mscorlib::System::Reflection::MemberInfo Marshal::GetMethodInfoForComSlot(mscorlib::System::Type t, mscorlib::System::Int32 slot, mscorlib::System::Runtime::InteropServices::ComMemberType::__ENUM__ memberType)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(t).name());
						__parameter_types__[1] = Global::GetType(typeid(slot).name());
						__parameter_types__[2] = Global::GetType(typeid(memberType).name());
						__parameters__[0] = (MonoObject*)t;
						__parameters__[1] = &slot;
						__parameters__[2] = reinterpret_cast<void*>(memberType);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetMethodInfoForComSlot", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::MemberInfo(__result__);
				}

				void Marshal::GetNativeVariantForObject(mscorlib::System::Object obj, mscorlib::System::IntPtr pDstNativeVariant)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameter_types__[1] = Global::GetType(typeid(pDstNativeVariant).name());
						__parameters__[0] = (MonoObject*)obj;
						__parameters__[1] = (MonoObject*)pDstNativeVariant;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetNativeVariantForObject", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Object Marshal::GetObjectForIUnknown(mscorlib::System::IntPtr pUnk)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(pUnk).name());
						__parameters__[0] = (MonoObject*)pUnk;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetObjectForIUnknown", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Object Marshal::GetObjectForNativeVariant(mscorlib::System::IntPtr pSrcNativeVariant)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(pSrcNativeVariant).name());
						__parameters__[0] = (MonoObject*)pSrcNativeVariant;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetObjectForNativeVariant", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				std::vector<mscorlib::System::Object*> Marshal::GetObjectsForNativeVariants(mscorlib::System::IntPtr aSrcNativeVariant, mscorlib::System::Int32 cVars)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(aSrcNativeVariant).name());
						__parameter_types__[1] = Global::GetType(typeid(cVars).name());
						__parameters__[0] = (MonoObject*)aSrcNativeVariant;
						__parameters__[1] = &cVars;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetObjectsForNativeVariants", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Object*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Object (__array_item__));
						}
						return __array_result__;
				}

				mscorlib::System::Int32 Marshal::GetStartComSlot(mscorlib::System::Type t)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(t).name());
						__parameters__[0] = (MonoObject*)t;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetStartComSlot", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Threading::Thread Marshal::GetThreadFromFiberCookie(mscorlib::System::Int32 cookie)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(cookie).name());
						__parameters__[0] = &cookie;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetThreadFromFiberCookie", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Thread(__result__);
				}

				mscorlib::System::Object Marshal::GetTypedObjectForIUnknown(mscorlib::System::IntPtr pUnk, mscorlib::System::Type t)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(pUnk).name());
						__parameter_types__[1] = Global::GetType(typeid(t).name());
						__parameters__[0] = (MonoObject*)pUnk;
						__parameters__[1] = (MonoObject*)t;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetTypedObjectForIUnknown", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Type Marshal::GetTypeForITypeInfo(mscorlib::System::IntPtr piTypeInfo)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(piTypeInfo).name());
						__parameters__[0] = (MonoObject*)piTypeInfo;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetTypeForITypeInfo", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::Type Marshal::GetTypeFromCLSID(mscorlib::System::Guid clsid)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(clsid).name());
						__parameters__[0] = (MonoObject*)clsid;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetTypeFromCLSID", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::String Marshal::GetTypeInfoName(mscorlib::System::Runtime::InteropServices::UCOMITypeInfo pTI)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(pTI).name());
						__parameters__[0] = (MonoObject*)pTI;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetTypeInfoName", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::String(__result__);
				}

				mscorlib::System::String Marshal::GetTypeInfoName(mscorlib::System::Runtime::InteropServices::ComTypes::ITypeInfo typeInfo)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(typeInfo).name());
						__parameters__[0] = (MonoObject*)typeInfo;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetTypeInfoName", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::String(__result__);
				}

				mscorlib::System::Guid Marshal::GetTypeLibGuid(mscorlib::System::Runtime::InteropServices::UCOMITypeLib pTLB)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(pTLB).name());
						__parameters__[0] = (MonoObject*)pTLB;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetTypeLibGuid", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Guid(__result__);
				}

				mscorlib::System::Guid Marshal::GetTypeLibGuid(mscorlib::System::Runtime::InteropServices::ComTypes::ITypeLib typelib)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(typelib).name());
						__parameters__[0] = (MonoObject*)typelib;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetTypeLibGuid", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Guid(__result__);
				}

				mscorlib::System::Guid Marshal::GetTypeLibGuidForAssembly(mscorlib::System::Reflection::Assembly assembly)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(assembly).name());
						__parameters__[0] = (MonoObject*)assembly;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetTypeLibGuidForAssembly", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Guid(__result__);
				}

				mscorlib::System::Int32 Marshal::GetTypeLibLcid(mscorlib::System::Runtime::InteropServices::UCOMITypeLib pTLB)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(pTLB).name());
						__parameters__[0] = (MonoObject*)pTLB;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetTypeLibLcid", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 Marshal::GetTypeLibLcid(mscorlib::System::Runtime::InteropServices::ComTypes::ITypeLib typelib)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(typelib).name());
						__parameters__[0] = (MonoObject*)typelib;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetTypeLibLcid", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::String Marshal::GetTypeLibName(mscorlib::System::Runtime::InteropServices::UCOMITypeLib pTLB)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(pTLB).name());
						__parameters__[0] = (MonoObject*)pTLB;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetTypeLibName", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::String(__result__);
				}

				mscorlib::System::String Marshal::GetTypeLibName(mscorlib::System::Runtime::InteropServices::ComTypes::ITypeLib typelib)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(typelib).name());
						__parameters__[0] = (MonoObject*)typelib;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetTypeLibName", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::String(__result__);
				}

				void Marshal::GetTypeLibVersionForAssembly(mscorlib::System::Reflection::Assembly inputAssembly, mscorlib::System::Int32 majorVersion, mscorlib::System::Int32 minorVersion)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(inputAssembly).name());
						__parameter_types__[1] = Global::GetType(typeid(majorVersion).name());
						__parameter_types__[2] = Global::GetType(typeid(minorVersion).name());
						__parameters__[0] = (MonoObject*)inputAssembly;
						__parameters__[1] = &majorVersion;
						__parameters__[2] = &minorVersion;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetTypeLibVersionForAssembly", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Object Marshal::GetUniqueObjectForIUnknown(mscorlib::System::IntPtr unknown)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(unknown).name());
						__parameters__[0] = (MonoObject*)unknown;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetUniqueObjectForIUnknown", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::IntPtr Marshal::GetUnmanagedThunkForManagedMethodPtr(mscorlib::System::IntPtr pfnMethodToWrap, mscorlib::System::IntPtr pbSignature, mscorlib::System::Int32 cbSignature)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(pfnMethodToWrap).name());
						__parameter_types__[1] = Global::GetType(typeid(pbSignature).name());
						__parameter_types__[2] = Global::GetType(typeid(cbSignature).name());
						__parameters__[0] = (MonoObject*)pfnMethodToWrap;
						__parameters__[1] = (MonoObject*)pbSignature;
						__parameters__[2] = &cbSignature;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetUnmanagedThunkForManagedMethodPtr", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
				}

				mscorlib::System::Boolean Marshal::IsComObject(mscorlib::System::Object o)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(o).name());
						__parameters__[0] = (MonoObject*)o;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "IsComObject", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean Marshal::IsTypeVisibleFromCom(mscorlib::System::Type t)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(t).name());
						__parameters__[0] = (MonoObject*)t;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "IsTypeVisibleFromCom", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 Marshal::NumParamBytes(mscorlib::System::Reflection::MethodInfo m)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(m).name());
						__parameters__[0] = (MonoObject*)m;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "NumParamBytes", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 Marshal::GetLastWin32Error()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetLastWin32Error", NullMonoObject, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::IntPtr Marshal::OffsetOf(mscorlib::System::Type t, mscorlib::System::String fieldName)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(t).name());
						__parameter_types__[1] = Global::GetType(typeid(fieldName).name());
						__parameters__[0] = (MonoObject*)t;
						__parameters__[1] = (MonoObject*)fieldName;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "OffsetOf", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
				}

				void Marshal::Prelink(mscorlib::System::Reflection::MethodInfo m)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(m).name());
						__parameters__[0] = (MonoObject*)m;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "Prelink", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::PrelinkAll(mscorlib::System::Type c)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(c).name());
						__parameters__[0] = (MonoObject*)c;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "PrelinkAll", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::String Marshal::PtrToStringAnsi(mscorlib::System::IntPtr ptr)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameters__[0] = (MonoObject*)ptr;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "PtrToStringAnsi", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::String(__result__);
				}

				mscorlib::System::String Marshal::PtrToStringAnsi(mscorlib::System::IntPtr ptr, mscorlib::System::Int32 len)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameter_types__[1] = Global::GetType(typeid(len).name());
						__parameters__[0] = (MonoObject*)ptr;
						__parameters__[1] = &len;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "PtrToStringAnsi", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::String(__result__);
				}

				mscorlib::System::String Marshal::PtrToStringAuto(mscorlib::System::IntPtr ptr)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameters__[0] = (MonoObject*)ptr;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "PtrToStringAuto", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::String(__result__);
				}

				mscorlib::System::String Marshal::PtrToStringAuto(mscorlib::System::IntPtr ptr, mscorlib::System::Int32 len)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameter_types__[1] = Global::GetType(typeid(len).name());
						__parameters__[0] = (MonoObject*)ptr;
						__parameters__[1] = &len;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "PtrToStringAuto", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::String(__result__);
				}

				mscorlib::System::String Marshal::PtrToStringUni(mscorlib::System::IntPtr ptr)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameters__[0] = (MonoObject*)ptr;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "PtrToStringUni", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::String(__result__);
				}

				mscorlib::System::String Marshal::PtrToStringUni(mscorlib::System::IntPtr ptr, mscorlib::System::Int32 len)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameter_types__[1] = Global::GetType(typeid(len).name());
						__parameters__[0] = (MonoObject*)ptr;
						__parameters__[1] = &len;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "PtrToStringUni", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::String(__result__);
				}

				mscorlib::System::String Marshal::PtrToStringBSTR(mscorlib::System::IntPtr ptr)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameters__[0] = (MonoObject*)ptr;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "PtrToStringBSTR", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::String(__result__);
				}

				void Marshal::PtrToStructure(mscorlib::System::IntPtr ptr, mscorlib::System::Object structure)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameter_types__[1] = Global::GetType(typeid(structure).name());
						__parameters__[0] = (MonoObject*)ptr;
						__parameters__[1] = (MonoObject*)structure;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "PtrToStructure", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Object Marshal::PtrToStructure(mscorlib::System::IntPtr ptr, mscorlib::System::Type structureType)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameter_types__[1] = Global::GetType(typeid(structureType).name());
						__parameters__[0] = (MonoObject*)ptr;
						__parameters__[1] = (MonoObject*)structureType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "PtrToStructure", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Int32 Marshal::QueryInterface(mscorlib::System::IntPtr pUnk, mscorlib::System::Guid iid, mscorlib::System::IntPtr ppv)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(pUnk).name());
						__parameter_types__[1] = Global::GetType(typeid(iid).name());
						__parameter_types__[2] = Global::GetType(typeid(ppv).name());
						__parameters__[0] = (MonoObject*)pUnk;
						__parameters__[1] = (MonoObject*)iid;
						__parameters__[2] = (MonoObject*)ppv;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "QueryInterface", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Byte Marshal::ReadByte(mscorlib::System::IntPtr ptr)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameters__[0] = (MonoObject*)ptr;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "ReadByte", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Byte(__result__);
				}

				mscorlib::System::Byte Marshal::ReadByte(mscorlib::System::IntPtr ptr, mscorlib::System::Int32 ofs)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameter_types__[1] = Global::GetType(typeid(ofs).name());
						__parameters__[0] = (MonoObject*)ptr;
						__parameters__[1] = &ofs;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "ReadByte", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Byte(__result__);
				}

				mscorlib::System::Byte Marshal::ReadByte(mscorlib::System::Object ptr, mscorlib::System::Int32 ofs)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameter_types__[1] = Global::GetType(typeid(ofs).name());
						__parameters__[0] = (MonoObject*)ptr;
						__parameters__[1] = &ofs;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "ReadByte", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Byte(__result__);
				}

				mscorlib::System::Int16 Marshal::ReadInt16(mscorlib::System::IntPtr ptr)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameters__[0] = (MonoObject*)ptr;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "ReadInt16", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int16*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int16 Marshal::ReadInt16(mscorlib::System::IntPtr ptr, mscorlib::System::Int32 ofs)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameter_types__[1] = Global::GetType(typeid(ofs).name());
						__parameters__[0] = (MonoObject*)ptr;
						__parameters__[1] = &ofs;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "ReadInt16", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int16*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int16 Marshal::ReadInt16(mscorlib::System::Object ptr, mscorlib::System::Int32 ofs)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameter_types__[1] = Global::GetType(typeid(ofs).name());
						__parameters__[0] = (MonoObject*)ptr;
						__parameters__[1] = &ofs;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "ReadInt16", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int16*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 Marshal::ReadInt32(mscorlib::System::IntPtr ptr)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameters__[0] = (MonoObject*)ptr;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "ReadInt32", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 Marshal::ReadInt32(mscorlib::System::IntPtr ptr, mscorlib::System::Int32 ofs)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameter_types__[1] = Global::GetType(typeid(ofs).name());
						__parameters__[0] = (MonoObject*)ptr;
						__parameters__[1] = &ofs;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "ReadInt32", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 Marshal::ReadInt32(mscorlib::System::Object ptr, mscorlib::System::Int32 ofs)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameter_types__[1] = Global::GetType(typeid(ofs).name());
						__parameters__[0] = (MonoObject*)ptr;
						__parameters__[1] = &ofs;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "ReadInt32", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int64 Marshal::ReadInt64(mscorlib::System::IntPtr ptr)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameters__[0] = (MonoObject*)ptr;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "ReadInt64", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int64 Marshal::ReadInt64(mscorlib::System::IntPtr ptr, mscorlib::System::Int32 ofs)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameter_types__[1] = Global::GetType(typeid(ofs).name());
						__parameters__[0] = (MonoObject*)ptr;
						__parameters__[1] = &ofs;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "ReadInt64", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int64 Marshal::ReadInt64(mscorlib::System::Object ptr, mscorlib::System::Int32 ofs)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameter_types__[1] = Global::GetType(typeid(ofs).name());
						__parameters__[0] = (MonoObject*)ptr;
						__parameters__[1] = &ofs;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "ReadInt64", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
				}

				mscorlib::System::IntPtr Marshal::ReadIntPtr(mscorlib::System::IntPtr ptr)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameters__[0] = (MonoObject*)ptr;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "ReadIntPtr", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
				}

				mscorlib::System::IntPtr Marshal::ReadIntPtr(mscorlib::System::IntPtr ptr, mscorlib::System::Int32 ofs)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameter_types__[1] = Global::GetType(typeid(ofs).name());
						__parameters__[0] = (MonoObject*)ptr;
						__parameters__[1] = &ofs;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "ReadIntPtr", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
				}

				mscorlib::System::IntPtr Marshal::ReadIntPtr(mscorlib::System::Object ptr, mscorlib::System::Int32 ofs)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameter_types__[1] = Global::GetType(typeid(ofs).name());
						__parameters__[0] = (MonoObject*)ptr;
						__parameters__[1] = &ofs;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "ReadIntPtr", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
				}

				mscorlib::System::IntPtr Marshal::ReAllocCoTaskMem(mscorlib::System::IntPtr pv, mscorlib::System::Int32 cb)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(pv).name());
						__parameter_types__[1] = Global::GetType(typeid(cb).name());
						__parameters__[0] = (MonoObject*)pv;
						__parameters__[1] = &cb;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "ReAllocCoTaskMem", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
				}

				mscorlib::System::IntPtr Marshal::ReAllocHGlobal(mscorlib::System::IntPtr pv, mscorlib::System::IntPtr cb)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(pv).name());
						__parameter_types__[1] = Global::GetType(typeid(cb).name());
						__parameters__[0] = (MonoObject*)pv;
						__parameters__[1] = (MonoObject*)cb;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "ReAllocHGlobal", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
				}

				mscorlib::System::Int32 Marshal::Release(mscorlib::System::IntPtr pUnk)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(pUnk).name());
						__parameters__[0] = (MonoObject*)pUnk;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "Release", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 Marshal::ReleaseComObject(mscorlib::System::Object o)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(o).name());
						__parameters__[0] = (MonoObject*)o;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "ReleaseComObject", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void Marshal::ReleaseThreadCache()
				{
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "ReleaseThreadCache", NullMonoObject, 0, NULL, NULL, NULL);
				}

				mscorlib::System::Boolean Marshal::SetComObjectData(mscorlib::System::Object obj, mscorlib::System::Object key, mscorlib::System::Object data)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameter_types__[1] = Global::GetType(typeid(key).name());
						__parameter_types__[2] = Global::GetType(typeid(data).name());
						__parameters__[0] = (MonoObject*)obj;
						__parameters__[1] = (MonoObject*)key;
						__parameters__[2] = (MonoObject*)data;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "SetComObjectData", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 Marshal::SizeOf(mscorlib::System::Object structure)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(structure).name());
						__parameters__[0] = (MonoObject*)structure;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "SizeOf", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 Marshal::SizeOf(mscorlib::System::Type t)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(t).name());
						__parameters__[0] = (MonoObject*)t;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "SizeOf", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::IntPtr Marshal::StringToBSTR(mscorlib::System::String s)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(s).name());
						__parameters__[0] = (MonoObject*)s;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "StringToBSTR", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
				}

				mscorlib::System::IntPtr Marshal::StringToCoTaskMemAnsi(mscorlib::System::String s)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(s).name());
						__parameters__[0] = (MonoObject*)s;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "StringToCoTaskMemAnsi", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
				}

				mscorlib::System::IntPtr Marshal::StringToCoTaskMemAuto(mscorlib::System::String s)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(s).name());
						__parameters__[0] = (MonoObject*)s;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "StringToCoTaskMemAuto", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
				}

				mscorlib::System::IntPtr Marshal::StringToCoTaskMemUni(mscorlib::System::String s)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(s).name());
						__parameters__[0] = (MonoObject*)s;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "StringToCoTaskMemUni", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
				}

				mscorlib::System::IntPtr Marshal::StringToHGlobalAnsi(mscorlib::System::String s)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(s).name());
						__parameters__[0] = (MonoObject*)s;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "StringToHGlobalAnsi", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
				}

				mscorlib::System::IntPtr Marshal::StringToHGlobalAuto(mscorlib::System::String s)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(s).name());
						__parameters__[0] = (MonoObject*)s;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "StringToHGlobalAuto", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
				}

				mscorlib::System::IntPtr Marshal::StringToHGlobalUni(mscorlib::System::String s)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(s).name());
						__parameters__[0] = (MonoObject*)s;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "StringToHGlobalUni", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
				}

				mscorlib::System::IntPtr Marshal::SecureStringToBSTR(mscorlib::System::Security::SecureString s)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(s).name());
						__parameters__[0] = (MonoObject*)s;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "SecureStringToBSTR", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
				}

				mscorlib::System::IntPtr Marshal::SecureStringToCoTaskMemAnsi(mscorlib::System::Security::SecureString s)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(s).name());
						__parameters__[0] = (MonoObject*)s;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "SecureStringToCoTaskMemAnsi", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
				}

				mscorlib::System::IntPtr Marshal::SecureStringToCoTaskMemUnicode(mscorlib::System::Security::SecureString s)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(s).name());
						__parameters__[0] = (MonoObject*)s;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "SecureStringToCoTaskMemUnicode", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
				}

				mscorlib::System::IntPtr Marshal::SecureStringToGlobalAllocAnsi(mscorlib::System::Security::SecureString s)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(s).name());
						__parameters__[0] = (MonoObject*)s;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "SecureStringToGlobalAllocAnsi", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
				}

				mscorlib::System::IntPtr Marshal::SecureStringToGlobalAllocUnicode(mscorlib::System::Security::SecureString s)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(s).name());
						__parameters__[0] = (MonoObject*)s;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "SecureStringToGlobalAllocUnicode", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
				}

				void Marshal::StructureToPtr(mscorlib::System::Object structure, mscorlib::System::IntPtr ptr, mscorlib::System::Boolean fDeleteOld)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(structure).name());
						__parameter_types__[1] = Global::GetType(typeid(ptr).name());
						__parameter_types__[2] = Global::GetType(typeid(fDeleteOld).name());
						__parameters__[0] = (MonoObject*)structure;
						__parameters__[1] = (MonoObject*)ptr;
						__parameters__[2] = reinterpret_cast<void*>(fDeleteOld);
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "StructureToPtr", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::ThrowExceptionForHR(mscorlib::System::Int32 errorCode)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(errorCode).name());
						__parameters__[0] = &errorCode;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "ThrowExceptionForHR", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::ThrowExceptionForHR(mscorlib::System::Int32 errorCode, mscorlib::System::IntPtr errorInfo)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(errorCode).name());
						__parameter_types__[1] = Global::GetType(typeid(errorInfo).name());
						__parameters__[0] = &errorCode;
						__parameters__[1] = (MonoObject*)errorInfo;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "ThrowExceptionForHR", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::IntPtr Marshal::UnsafeAddrOfPinnedArrayElement(mscorlib::System::Array arr, mscorlib::System::Int32 index)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(arr).name());
						__parameter_types__[1] = Global::GetType(typeid(index).name());
						__parameters__[0] = (MonoObject*)arr;
						__parameters__[1] = &index;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "UnsafeAddrOfPinnedArrayElement", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
				}

				void Marshal::WriteByte(mscorlib::System::IntPtr ptr, mscorlib::System::Byte val)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameter_types__[1] = Global::GetType(typeid(val).name());
						__parameters__[0] = (MonoObject*)ptr;
						__parameters__[1] = (MonoObject*)val;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "WriteByte", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::WriteByte(mscorlib::System::IntPtr ptr, mscorlib::System::Int32 ofs, mscorlib::System::Byte val)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameter_types__[1] = Global::GetType(typeid(ofs).name());
						__parameter_types__[2] = Global::GetType(typeid(val).name());
						__parameters__[0] = (MonoObject*)ptr;
						__parameters__[1] = &ofs;
						__parameters__[2] = (MonoObject*)val;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "WriteByte", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::WriteByte(mscorlib::System::Object ptr, mscorlib::System::Int32 ofs, mscorlib::System::Byte val)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameter_types__[1] = Global::GetType(typeid(ofs).name());
						__parameter_types__[2] = Global::GetType(typeid(val).name());
						__parameters__[0] = (MonoObject*)ptr;
						__parameters__[1] = &ofs;
						__parameters__[2] = (MonoObject*)val;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "WriteByte", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::WriteInt16(mscorlib::System::IntPtr ptr, mscorlib::System::Int16 val)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameter_types__[1] = Global::GetType(typeid(val).name());
						__parameters__[0] = (MonoObject*)ptr;
						__parameters__[1] = &val;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "WriteInt16", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::WriteInt16(mscorlib::System::IntPtr ptr, mscorlib::System::Int32 ofs, mscorlib::System::Int16 val)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameter_types__[1] = Global::GetType(typeid(ofs).name());
						__parameter_types__[2] = Global::GetType(typeid(val).name());
						__parameters__[0] = (MonoObject*)ptr;
						__parameters__[1] = &ofs;
						__parameters__[2] = &val;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "WriteInt16", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::WriteInt16(mscorlib::System::Object ptr, mscorlib::System::Int32 ofs, mscorlib::System::Int16 val)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameter_types__[1] = Global::GetType(typeid(ofs).name());
						__parameter_types__[2] = Global::GetType(typeid(val).name());
						__parameters__[0] = (MonoObject*)ptr;
						__parameters__[1] = &ofs;
						__parameters__[2] = &val;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "WriteInt16", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::WriteInt16(mscorlib::System::IntPtr ptr, mscorlib::System::Char val)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameter_types__[1] = Global::GetType(typeid(val).name());
						__parameters__[0] = (MonoObject*)ptr;
						__parameters__[1] = &val;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "WriteInt16", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::WriteInt16(mscorlib::System::IntPtr ptr, mscorlib::System::Int32 ofs, mscorlib::System::Char val)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameter_types__[1] = Global::GetType(typeid(ofs).name());
						__parameter_types__[2] = Global::GetType(typeid(val).name());
						__parameters__[0] = (MonoObject*)ptr;
						__parameters__[1] = &ofs;
						__parameters__[2] = &val;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "WriteInt16", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::WriteInt16(mscorlib::System::Object ptr, mscorlib::System::Int32 ofs, mscorlib::System::Char val)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameter_types__[1] = Global::GetType(typeid(ofs).name());
						__parameter_types__[2] = Global::GetType(typeid(val).name());
						__parameters__[0] = (MonoObject*)ptr;
						__parameters__[1] = &ofs;
						__parameters__[2] = &val;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "WriteInt16", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::WriteInt32(mscorlib::System::IntPtr ptr, mscorlib::System::Int32 val)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameter_types__[1] = Global::GetType(typeid(val).name());
						__parameters__[0] = (MonoObject*)ptr;
						__parameters__[1] = &val;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "WriteInt32", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::WriteInt32(mscorlib::System::IntPtr ptr, mscorlib::System::Int32 ofs, mscorlib::System::Int32 val)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameter_types__[1] = Global::GetType(typeid(ofs).name());
						__parameter_types__[2] = Global::GetType(typeid(val).name());
						__parameters__[0] = (MonoObject*)ptr;
						__parameters__[1] = &ofs;
						__parameters__[2] = &val;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "WriteInt32", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::WriteInt32(mscorlib::System::Object ptr, mscorlib::System::Int32 ofs, mscorlib::System::Int32 val)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameter_types__[1] = Global::GetType(typeid(ofs).name());
						__parameter_types__[2] = Global::GetType(typeid(val).name());
						__parameters__[0] = (MonoObject*)ptr;
						__parameters__[1] = &ofs;
						__parameters__[2] = &val;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "WriteInt32", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::WriteInt64(mscorlib::System::IntPtr ptr, mscorlib::System::Int64 val)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameter_types__[1] = Global::GetType(typeid(val).name());
						__parameters__[0] = (MonoObject*)ptr;
						__parameters__[1] = &val;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "WriteInt64", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::WriteInt64(mscorlib::System::IntPtr ptr, mscorlib::System::Int32 ofs, mscorlib::System::Int64 val)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameter_types__[1] = Global::GetType(typeid(ofs).name());
						__parameter_types__[2] = Global::GetType(typeid(val).name());
						__parameters__[0] = (MonoObject*)ptr;
						__parameters__[1] = &ofs;
						__parameters__[2] = &val;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "WriteInt64", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::WriteInt64(mscorlib::System::Object ptr, mscorlib::System::Int32 ofs, mscorlib::System::Int64 val)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameter_types__[1] = Global::GetType(typeid(ofs).name());
						__parameter_types__[2] = Global::GetType(typeid(val).name());
						__parameters__[0] = (MonoObject*)ptr;
						__parameters__[1] = &ofs;
						__parameters__[2] = &val;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "WriteInt64", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::WriteIntPtr(mscorlib::System::IntPtr ptr, mscorlib::System::IntPtr val)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameter_types__[1] = Global::GetType(typeid(val).name());
						__parameters__[0] = (MonoObject*)ptr;
						__parameters__[1] = (MonoObject*)val;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "WriteIntPtr", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::WriteIntPtr(mscorlib::System::IntPtr ptr, mscorlib::System::Int32 ofs, mscorlib::System::IntPtr val)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameter_types__[1] = Global::GetType(typeid(ofs).name());
						__parameter_types__[2] = Global::GetType(typeid(val).name());
						__parameters__[0] = (MonoObject*)ptr;
						__parameters__[1] = &ofs;
						__parameters__[2] = (MonoObject*)val;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "WriteIntPtr", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				}

				void Marshal::WriteIntPtr(mscorlib::System::Object ptr, mscorlib::System::Int32 ofs, mscorlib::System::IntPtr val)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameter_types__[1] = Global::GetType(typeid(ofs).name());
						__parameter_types__[2] = Global::GetType(typeid(val).name());
						__parameters__[0] = (MonoObject*)ptr;
						__parameters__[1] = &ofs;
						__parameters__[2] = (MonoObject*)val;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "WriteIntPtr", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Exception Marshal::GetExceptionForHR(mscorlib::System::Int32 errorCode)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(errorCode).name());
						__parameters__[0] = &errorCode;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetExceptionForHR", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Exception(__result__);
				}

				mscorlib::System::Exception Marshal::GetExceptionForHR(mscorlib::System::Int32 errorCode, mscorlib::System::IntPtr errorInfo)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(errorCode).name());
						__parameter_types__[1] = Global::GetType(typeid(errorInfo).name());
						__parameters__[0] = &errorCode;
						__parameters__[1] = (MonoObject*)errorInfo;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetExceptionForHR", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Exception(__result__);
				}

				mscorlib::System::Int32 Marshal::FinalReleaseComObject(mscorlib::System::Object o)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(o).name());
						__parameters__[0] = (MonoObject*)o;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "FinalReleaseComObject", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Delegate Marshal::GetDelegateForFunctionPointer(mscorlib::System::IntPtr ptr, mscorlib::System::Type t)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameter_types__[1] = Global::GetType(typeid(t).name());
						__parameters__[0] = (MonoObject*)ptr;
						__parameters__[1] = (MonoObject*)t;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetDelegateForFunctionPointer", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Delegate(__result__);
				}

				mscorlib::System::IntPtr Marshal::GetFunctionPointerForDelegate(mscorlib::System::Delegate d)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(d).name());
						__parameters__[0] = (MonoObject*)d;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetFunctionPointerForDelegate", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
				}

					//	Get/Set:SystemMaxDBCSCharSize
				mscorlib::System::Int32 Marshal::get_SystemMaxDBCSCharSize()
				{
					return Global::GetFieldInt32Value("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "SystemMaxDBCSCharSize");
				}


					//	Get/Set:SystemDefaultCharSize
				mscorlib::System::Int32 Marshal::get_SystemDefaultCharSize()
				{
					return Global::GetFieldInt32Value("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "SystemDefaultCharSize");
				}



			}
		}
	}
}
