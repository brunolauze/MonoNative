#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_STACKTRACE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_STACKTRACE_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_Exception.h>
#include <mscorlib/System/Diagnostics/mscorlib_System_Diagnostics_StackFrame.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_Thread.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{

			class StackTrace
				: public mscorlib::System::Object
			{
			public:
				StackTrace()
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Diagnostics.StackTrace"))
				{
					__native_object__ = Global::New("mscorlib", "System.Diagnostics", "StackTrace");
				};
			
				StackTrace(mscorlib::System::Boolean fNeedFileInfo)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Diagnostics.StackTrace"))
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Boolean");
					__parameters__[0] = reinterpret_cast<void*>(fNeedFileInfo);
					__native_object__ = Global::New("mscorlib", "System.Diagnostics", "StackTrace", 1, __parameter_types__, __parameters__);
				};
			
				StackTrace(mscorlib::System::Int32 skipFrames)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Diagnostics.StackTrace"))
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = &skipFrames;
					__native_object__ = Global::New("mscorlib", "System.Diagnostics", "StackTrace", 1, __parameter_types__, __parameters__);
				};
			
				StackTrace(mscorlib::System::Int32 skipFrames, mscorlib::System::Boolean fNeedFileInfo)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Diagnostics.StackTrace"))
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Boolean");
					__parameters__[0] = &skipFrames;
					__parameters__[1] = reinterpret_cast<void*>(fNeedFileInfo);
					__native_object__ = Global::New("mscorlib", "System.Diagnostics", "StackTrace", 2, __parameter_types__, __parameters__);
				};
			
				StackTrace(mscorlib::System::Exception e)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Diagnostics.StackTrace"))
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Exception");
					__parameters__[0] = (MonoObject*)e;
					__native_object__ = Global::New("mscorlib", "System.Diagnostics", "StackTrace", 1, __parameter_types__, __parameters__);
				};
			
				StackTrace(mscorlib::System::Exception e, mscorlib::System::Boolean fNeedFileInfo)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Diagnostics.StackTrace"))
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Exception");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Boolean");
					__parameters__[0] = (MonoObject*)e;
					__parameters__[1] = reinterpret_cast<void*>(fNeedFileInfo);
					__native_object__ = Global::New("mscorlib", "System.Diagnostics", "StackTrace", 2, __parameter_types__, __parameters__);
				};
			
				StackTrace(mscorlib::System::Exception e, mscorlib::System::Int32 skipFrames)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Diagnostics.StackTrace"))
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Exception");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = (MonoObject*)e;
					__parameters__[1] = &skipFrames;
					__native_object__ = Global::New("mscorlib", "System.Diagnostics", "StackTrace", 2, __parameter_types__, __parameters__);
				};
			
				StackTrace(mscorlib::System::Exception e, mscorlib::System::Int32 skipFrames, mscorlib::System::Boolean fNeedFileInfo)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Diagnostics.StackTrace"))
				{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Exception");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "Boolean");
					__parameters__[0] = (MonoObject*)e;
					__parameters__[1] = &skipFrames;
					__parameters__[2] = reinterpret_cast<void*>(fNeedFileInfo);
					__native_object__ = Global::New("mscorlib", "System.Diagnostics", "StackTrace", 3, __parameter_types__, __parameters__);
				};
			
				StackTrace(mscorlib::System::Diagnostics::StackFrame frame)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Diagnostics.StackTrace"))
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Diagnostics", "StackFrame");
					__parameters__[0] = (MonoObject*)frame;
					__native_object__ = Global::New("mscorlib", "System.Diagnostics", "StackTrace", 1, __parameter_types__, __parameters__);
				};
			
				StackTrace(mscorlib::System::Threading::Thread targetThread, mscorlib::System::Boolean needFileInfo)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Diagnostics.StackTrace"))
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Threading", "Thread");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Boolean");
					__parameters__[0] = (MonoObject*)targetThread;
					__parameters__[1] = reinterpret_cast<void*>(needFileInfo);
					__native_object__ = Global::New("mscorlib", "System.Diagnostics", "StackTrace", 2, __parameter_types__, __parameters__);
				};
			
				StackTrace(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				StackTrace(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~StackTrace()
				{
				};
			

				StackTrace & operator=(StackTrace &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Diagnostics::StackFrame  GetFrame(mscorlib::System::Int32 index);
				virtual std::vector<mscorlib::System::Diagnostics::StackFrame*>  GetFrames();
				virtual mscorlib::System::String  ToString() override;
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_FrameCount)) mscorlib::System::Int32  FrameCount;

				//Public Static Fields
				static Property<mscorlib::System::Int32 , mscorlib::System::Diagnostics::StackTrace> METHODS_TO_SKIP;

				//Get Set Properties Methods
				//	Get:FrameCount
				mscorlib::System::Int32  get_FrameCount() const;

				//	Get/Set:METHODS_TO_SKIP
				static mscorlib::System::Int32  get_METHODS_TO_SKIP();
				static void set_METHODS_TO_SKIP(mscorlib::System::Int32  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
