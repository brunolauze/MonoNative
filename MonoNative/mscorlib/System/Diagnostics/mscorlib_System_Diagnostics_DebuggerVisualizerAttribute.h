#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_DEBUGGERVISUALIZERATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_DEBUGGERVISUALIZERATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{

			class DebuggerVisualizerAttribute
				: public mscorlib::System::Attribute
				, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
			{
			public:
				DebuggerVisualizerAttribute(mscorlib::System::String visualizerTypeName)
				: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Diagnostics.DebuggerVisualizerAttribute"))
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)visualizerTypeName;
					__native_object__ = Global::New("mscorlib", "System.Diagnostics", "DebuggerVisualizerAttribute", 1, __parameter_types__, __parameters__);
				};
			
				DebuggerVisualizerAttribute(mscorlib::System::Type visualizer)
				: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Diagnostics.DebuggerVisualizerAttribute"))
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Type");
					__parameters__[0] = (MonoObject*)visualizer;
					__native_object__ = Global::New("mscorlib", "System.Diagnostics", "DebuggerVisualizerAttribute", 1, __parameter_types__, __parameters__);
				};
			
				DebuggerVisualizerAttribute(mscorlib::System::String visualizerTypeName, mscorlib::System::String visualizerObjectSourceTypeName)
				: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Diagnostics.DebuggerVisualizerAttribute"))
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)visualizerTypeName;
					__parameters__[1] = (MonoObject*)visualizerObjectSourceTypeName;
					__native_object__ = Global::New("mscorlib", "System.Diagnostics", "DebuggerVisualizerAttribute", 2, __parameter_types__, __parameters__);
				};
			
				DebuggerVisualizerAttribute(mscorlib::System::String visualizerTypeName, mscorlib::System::Type visualizerObjectSource)
				: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Diagnostics.DebuggerVisualizerAttribute"))
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Type");
					__parameters__[0] = (MonoObject*)visualizerTypeName;
					__parameters__[1] = (MonoObject*)visualizerObjectSource;
					__native_object__ = Global::New("mscorlib", "System.Diagnostics", "DebuggerVisualizerAttribute", 2, __parameter_types__, __parameters__);
				};
			
				DebuggerVisualizerAttribute(mscorlib::System::Type visualizer, mscorlib::System::String visualizerObjectSourceTypeName)
				: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Diagnostics.DebuggerVisualizerAttribute"))
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Type");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)visualizer;
					__parameters__[1] = (MonoObject*)visualizerObjectSourceTypeName;
					__native_object__ = Global::New("mscorlib", "System.Diagnostics", "DebuggerVisualizerAttribute", 2, __parameter_types__, __parameters__);
				};
			
				DebuggerVisualizerAttribute(mscorlib::System::Type visualizer, mscorlib::System::Type visualizerObjectSource)
				: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Diagnostics.DebuggerVisualizerAttribute"))
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Type");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Type");
					__parameters__[0] = (MonoObject*)visualizer;
					__parameters__[1] = (MonoObject*)visualizerObjectSource;
					__native_object__ = Global::New("mscorlib", "System.Diagnostics", "DebuggerVisualizerAttribute", 2, __parameter_types__, __parameters__);
				};
			
				DebuggerVisualizerAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Attribute(nativeTypeInfo)
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
				};
			
				DebuggerVisualizerAttribute(MonoObject *nativeObject)
				: mscorlib::System::Attribute(nativeObject)
				, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
				{
				};
			
				~DebuggerVisualizerAttribute()
				{
				};
			

				DebuggerVisualizerAttribute & operator=(DebuggerVisualizerAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(DebuggerVisualizerAttribute &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Description, put=set_Description)) mscorlib::System::String  Description;
				__declspec(property(get=get_Target, put=set_Target)) mscorlib::System::Type  Target;
				__declspec(property(get=get_TargetTypeName, put=set_TargetTypeName)) mscorlib::System::String  TargetTypeName;
				__declspec(property(get=get_VisualizerObjectSourceTypeName)) mscorlib::System::String  VisualizerObjectSourceTypeName;
				__declspec(property(get=get_VisualizerTypeName)) mscorlib::System::String  VisualizerTypeName;
				__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

				//Get Set Properties Methods
				//	Get/Set:Description
				mscorlib::System::String  get_Description() const;
				void set_Description(mscorlib::System::String  value);

				//	Get/Set:Target
				mscorlib::System::Type  get_Target() const;
				void set_Target(mscorlib::System::Type  value);

				//	Get/Set:TargetTypeName
				mscorlib::System::String  get_TargetTypeName() const;
				void set_TargetTypeName(mscorlib::System::String  value);

				//	Get:VisualizerObjectSourceTypeName
				mscorlib::System::String  get_VisualizerObjectSourceTypeName() const;

				//	Get:VisualizerTypeName
				mscorlib::System::String  get_VisualizerTypeName() const;

				//	Get:TypeId
				mscorlib::System::Object  get_TypeId() const;

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
