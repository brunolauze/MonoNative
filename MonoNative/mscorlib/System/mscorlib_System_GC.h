#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_GC_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_GC_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_GCCollectionMode.h>
#include <mscorlib/System/mscorlib_System_GCNotificationStatus.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		class WeakReferenceBase;
		

	}
}
namespace mscorlib
{
	namespace System
	{

		class GC
			: public mscorlib::System::Object
		{
		public:
			GC(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::Object(nativeTypeInfo)
			{
			};
		
			GC(MonoObject *nativeObject)
			: mscorlib::System::Object(nativeObject)
			{
			};
		
			~GC()
			{
			};
		

			GC & operator=(GC &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			static void  Collect();
			static void  Collect(mscorlib::System::Int32 generation);
			static void  Collect(mscorlib::System::Int32 generation, mscorlib::System::GCCollectionMode::__ENUM__ mode);
			static void  Collect(mscorlib::System::Int32 generation, mscorlib::System::GCCollectionMode::__ENUM__ mode, mscorlib::System::Boolean blocking);
			static mscorlib::System::Int32  GetGeneration(mscorlib::System::Object obj);
			static mscorlib::System::Int32  GetGeneration(mscorlib::System::WeakReferenceBase wo);
			static mscorlib::System::Int64  GetTotalMemory(mscorlib::System::Boolean forceFullCollection);
			static void  KeepAlive(mscorlib::System::Object obj);
			static void  ReRegisterForFinalize(mscorlib::System::Object obj);
			static void  SuppressFinalize(mscorlib::System::Object obj);
			static void  WaitForPendingFinalizers();
			static mscorlib::System::Int32  CollectionCount(mscorlib::System::Int32 generation);
			static void  AddMemoryPressure(mscorlib::System::Int64 bytesAllocated);
			static void  RemoveMemoryPressure(mscorlib::System::Int64 bytesAllocated);
			static mscorlib::System::GCNotificationStatus::__ENUM__  WaitForFullGCApproach();
			static mscorlib::System::GCNotificationStatus::__ENUM__  WaitForFullGCApproach(mscorlib::System::Int32 millisecondsTimeout);
			static mscorlib::System::GCNotificationStatus::__ENUM__  WaitForFullGCComplete();
			static mscorlib::System::GCNotificationStatus::__ENUM__  WaitForFullGCComplete(mscorlib::System::Int32 millisecondsTimeout);
			static void  RegisterForFullGCNotification(mscorlib::System::Int32 maxGenerationThreshold, mscorlib::System::Int32 largeObjectHeapThreshold);
			static void  CancelFullGCNotification();
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Static Properties
			static Property<mscorlib::System::Int32> MaxGeneration;

			//Get Set Static Properties Methods
			//	Get:MaxGeneration
			static mscorlib::System::Int32  get_MaxGeneration();


		
		protected:
		
		private:
		
		};

	}
}
#endif
