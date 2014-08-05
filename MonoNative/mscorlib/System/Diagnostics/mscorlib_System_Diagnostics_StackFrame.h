#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_STACKFRAME_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_STACKFRAME_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_String.h>

namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class MethodBase;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{

			class StackFrame
				: public mscorlib::System::Object
			{
			public:
				StackFrame()
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Diagnostics.StackFrame"))
				{
					__native_object__ = Global::New("mscorlib", "System.Diagnostics", "StackFrame");
				};
			
				StackFrame(mscorlib::System::Boolean fNeedFileInfo)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Diagnostics.StackFrame"))
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Boolean");
					__parameters__[0] = reinterpret_cast<void*>(fNeedFileInfo);
					__native_object__ = Global::New("mscorlib", "System.Diagnostics", "StackFrame", 1, __parameter_types__, __parameters__);
				};
			
				StackFrame(mscorlib::System::Int32 skipFrames)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Diagnostics.StackFrame"))
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = &skipFrames;
					__native_object__ = Global::New("mscorlib", "System.Diagnostics", "StackFrame", 1, __parameter_types__, __parameters__);
				};
			
				StackFrame(mscorlib::System::Int32 skipFrames, mscorlib::System::Boolean fNeedFileInfo)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Diagnostics.StackFrame"))
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Boolean");
					__parameters__[0] = &skipFrames;
					__parameters__[1] = reinterpret_cast<void*>(fNeedFileInfo);
					__native_object__ = Global::New("mscorlib", "System.Diagnostics", "StackFrame", 2, __parameter_types__, __parameters__);
				};
			
				StackFrame(mscorlib::System::String fileName, mscorlib::System::Int32 lineNumber)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Diagnostics.StackFrame"))
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = (MonoObject*)fileName;
					__parameters__[1] = &lineNumber;
					__native_object__ = Global::New("mscorlib", "System.Diagnostics", "StackFrame", 2, __parameter_types__, __parameters__);
				};
			
				StackFrame(mscorlib::System::String fileName, mscorlib::System::Int32 lineNumber, mscorlib::System::Int32 colNumber)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Diagnostics.StackFrame"))
				{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = (MonoObject*)fileName;
					__parameters__[1] = &lineNumber;
					__parameters__[2] = &colNumber;
					__native_object__ = Global::New("mscorlib", "System.Diagnostics", "StackFrame", 3, __parameter_types__, __parameters__);
				};
			
				StackFrame(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				StackFrame(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~StackFrame()
				{
				};
			

				StackFrame & operator=(StackFrame &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Int32  GetFileLineNumber();
				virtual mscorlib::System::Int32  GetFileColumnNumber();
				virtual mscorlib::System::String  GetFileName();
				virtual mscorlib::System::Int32  GetILOffset();
				virtual mscorlib::System::Reflection::MethodBase  GetMethod();
				virtual mscorlib::System::Int32  GetNativeOffset();
				virtual mscorlib::System::String  ToString() override;
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Static Fields
				static Property<mscorlib::System::Int32 , mscorlib::System::Diagnostics::StackFrame> OFFSET_UNKNOWN;

				//	Get/Set:OFFSET_UNKNOWN
				static mscorlib::System::Int32  get_OFFSET_UNKNOWN();
				static void set_OFFSET_UNKNOWN(mscorlib::System::Int32  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
