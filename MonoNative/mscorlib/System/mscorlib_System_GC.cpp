#include <mscorlib/System/mscorlib_System_GC.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_WeakReference.h>



namespace mscorlib
{
	namespace System
	{

		Property<mscorlib::System::Int32 , mscorlib::System::GC> mscorlib::System::GC::MaxGeneration(&mscorlib::System::GC::get_MaxGeneration, &mscorlib::System::GC::set_MaxGeneration);
		//Public Methods
		void GC::Collect()
		{
				Global::InvokeMethod("mscorlib", "System", "GC", 0, NULL, "Collect", NullMonoObject, 0, NULL, NULL, NULL);
		}

		void GC::Collect(mscorlib::System::Int32 generation)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(generation).name());
				__parameters__[0] = &generation;
				Global::InvokeMethod("mscorlib", "System", "GC", 0, NULL, "Collect", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}

		void GC::Collect(mscorlib::System::Int32 generation, mscorlib::System::GCCollectionMode::__ENUM__ mode)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(generation).name());
				__parameter_types__[1] = Global::GetType(typeid(mode).name());
				__parameters__[0] = &generation;
				mscorlib::System::Int32 __param_mode__ = mode;
				__parameters__[1] = &__param_mode__;
				Global::InvokeMethod("mscorlib", "System", "GC", 0, NULL, "Collect", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
		}

		void GC::Collect(mscorlib::System::Int32 generation, mscorlib::System::GCCollectionMode::__ENUM__ mode, mscorlib::System::Boolean blocking)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(generation).name());
				__parameter_types__[1] = Global::GetType(typeid(mode).name());
				__parameter_types__[2] = Global::GetType(typeid(blocking).name());
				__parameters__[0] = &generation;
				mscorlib::System::Int32 __param_mode__ = mode;
				__parameters__[1] = &__param_mode__;
				__parameters__[2] = reinterpret_cast<void*>(blocking);
				Global::InvokeMethod("mscorlib", "System", "GC", 0, NULL, "Collect", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
		}

		mscorlib::System::Int32 GC::GetGeneration(mscorlib::System::Object obj)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(obj).name());
				__parameters__[0] = (MonoObject*)obj;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "GC", 0, NULL, "GetGeneration", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 GC::GetGeneration(mscorlib::System::WeakReferenceBase wo)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(wo).name());
				__parameters__[0] = (MonoObject*)wo;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "GC", 0, NULL, "GetGeneration", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int64 GC::GetTotalMemory(mscorlib::System::Boolean forceFullCollection)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(forceFullCollection).name());
				__parameters__[0] = reinterpret_cast<void*>(forceFullCollection);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "GC", 0, NULL, "GetTotalMemory", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		void GC::KeepAlive(mscorlib::System::Object obj)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(obj).name());
				__parameters__[0] = (MonoObject*)obj;
				Global::InvokeMethod("mscorlib", "System", "GC", 0, NULL, "KeepAlive", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}

		void GC::ReRegisterForFinalize(mscorlib::System::Object obj)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(obj).name());
				__parameters__[0] = (MonoObject*)obj;
				Global::InvokeMethod("mscorlib", "System", "GC", 0, NULL, "ReRegisterForFinalize", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}

		void GC::SuppressFinalize(mscorlib::System::Object obj)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(obj).name());
				__parameters__[0] = (MonoObject*)obj;
				Global::InvokeMethod("mscorlib", "System", "GC", 0, NULL, "SuppressFinalize", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}

		void GC::WaitForPendingFinalizers()
		{
				Global::InvokeMethod("mscorlib", "System", "GC", 0, NULL, "WaitForPendingFinalizers", NullMonoObject, 0, NULL, NULL, NULL);
		}

		mscorlib::System::Int32 GC::CollectionCount(mscorlib::System::Int32 generation)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(generation).name());
				__parameters__[0] = &generation;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "GC", 0, NULL, "CollectionCount", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		void GC::AddMemoryPressure(mscorlib::System::Int64 bytesAllocated)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(bytesAllocated).name());
				__parameters__[0] = &bytesAllocated;
				Global::InvokeMethod("mscorlib", "System", "GC", 0, NULL, "AddMemoryPressure", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}

		void GC::RemoveMemoryPressure(mscorlib::System::Int64 bytesAllocated)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(bytesAllocated).name());
				__parameters__[0] = &bytesAllocated;
				Global::InvokeMethod("mscorlib", "System", "GC", 0, NULL, "RemoveMemoryPressure", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}

		mscorlib::System::GCNotificationStatus::__ENUM__ GC::WaitForFullGCApproach()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "GC", 0, NULL, "WaitForFullGCApproach", NullMonoObject, 0, NULL, NULL, NULL);
				return static_cast<mscorlib::System::GCNotificationStatus::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
		}

		mscorlib::System::GCNotificationStatus::__ENUM__ GC::WaitForFullGCApproach(mscorlib::System::Int32 millisecondsTimeout)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(millisecondsTimeout).name());
				__parameters__[0] = &millisecondsTimeout;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "GC", 0, NULL, "WaitForFullGCApproach", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return static_cast<mscorlib::System::GCNotificationStatus::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
		}

		mscorlib::System::GCNotificationStatus::__ENUM__ GC::WaitForFullGCComplete()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "GC", 0, NULL, "WaitForFullGCComplete", NullMonoObject, 0, NULL, NULL, NULL);
				return static_cast<mscorlib::System::GCNotificationStatus::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
		}

		mscorlib::System::GCNotificationStatus::__ENUM__ GC::WaitForFullGCComplete(mscorlib::System::Int32 millisecondsTimeout)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(millisecondsTimeout).name());
				__parameters__[0] = &millisecondsTimeout;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "GC", 0, NULL, "WaitForFullGCComplete", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return static_cast<mscorlib::System::GCNotificationStatus::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
		}

		void GC::RegisterForFullGCNotification(mscorlib::System::Int32 maxGenerationThreshold, mscorlib::System::Int32 largeObjectHeapThreshold)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(maxGenerationThreshold).name());
				__parameter_types__[1] = Global::GetType(typeid(largeObjectHeapThreshold).name());
				__parameters__[0] = &maxGenerationThreshold;
				__parameters__[1] = &largeObjectHeapThreshold;
				Global::InvokeMethod("mscorlib", "System", "GC", 0, NULL, "RegisterForFullGCNotification", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
		}

		void GC::CancelFullGCNotification()
		{
				Global::InvokeMethod("mscorlib", "System", "GC", 0, NULL, "CancelFullGCNotification", NullMonoObject, 0, NULL, NULL, NULL);
		}

		//Get Set Static Properties Methods
		//	Get:MaxGeneration
		mscorlib::System::Int32  GC::get_MaxGeneration()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "GC", 0, NULL, "get_MaxGeneration", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		void GC::set_MaxGeneration(mscorlib::System::Int32  value)
		{
			throw;
		}




	}
}
