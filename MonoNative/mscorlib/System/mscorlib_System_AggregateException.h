#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_AGGREGATEEXCEPTION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_AGGREGATEEXCEPTION_H

#include <mscorlib/System/mscorlib_System_Exception.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Exception.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>
#include <mscorlib/System/Collections/ObjectModel/mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IDictionary.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				class SerializationInfo;
				class StreamingContext;
				

			}
		}
	}
}
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

		class AggregateException
			: public mscorlib::System::Exception
			, public virtual mscorlib::System::Runtime::InteropServices::_Exception
			, public virtual mscorlib::System::Runtime::Serialization::ISerializable
		{
		public:
			AggregateException()
			: mscorlib::System::Exception(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.AggregateException"))
			, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			{
				__native_object__ = Global::New("mscorlib", "System", "AggregateException");
			};
		
			AggregateException(mscorlib::System::String message)
			: mscorlib::System::Exception(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.AggregateException"))
			, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = (MonoObject*)message;
				__native_object__ = Global::New("mscorlib", "System", "AggregateException", 1, __parameter_types__, __parameters__);
			};
		
			AggregateException(mscorlib::System::String message, mscorlib::System::Exception innerException)
			: mscorlib::System::Exception(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.AggregateException"))
			, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "Exception");
				__parameters__[0] = (MonoObject*)message;
				__parameters__[1] = (MonoObject*)innerException;
				__native_object__ = Global::New("mscorlib", "System", "AggregateException", 2, __parameter_types__, __parameters__);
			};
		
			AggregateException(std::vector<mscorlib::System::Exception*> innerExceptions)
			: mscorlib::System::Exception(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.AggregateException"))
			, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Exception")), 1));
				__parameters__[0] = Global::FromArray<mscorlib::System::Exception*>(innerExceptions, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "Exception");
				__native_object__ = Global::New("mscorlib", "System", "AggregateException", 1, __parameter_types__, __parameters__);
			};
		
			AggregateException(mscorlib::System::String message, std::vector<mscorlib::System::Exception*> innerExceptions)
			: mscorlib::System::Exception(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.AggregateException"))
			, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Exception")), 1));
				__parameters__[0] = (MonoObject*)message;
				__parameters__[1] = Global::FromArray<mscorlib::System::Exception*>(innerExceptions, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "Exception");
				__native_object__ = Global::New("mscorlib", "System", "AggregateException", 2, __parameter_types__, __parameters__);
			};
		
			AggregateException(mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Exception> innerExceptions)
			: mscorlib::System::Exception(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.AggregateException"))
			, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				MonoType *__generic_types__innerExceptions__[1];
				__generic_types__innerExceptions__[0] = Global::GetType("mscorlib", "System.Collections.Generic", "IEnumerable`1");
				__parameter_types__[0] = Global::GetType("mscorlib", "System.Collections.Generic", "IEnumerable`1", 1,__generic_types__innerExceptions__);
				__parameters__[0] = (MonoObject*)innerExceptions;
				__native_object__ = Global::New("mscorlib", "System", "AggregateException", 1, __parameter_types__, __parameters__);
			};
		
			AggregateException(mscorlib::System::String message, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Exception> innerExceptions)
			: mscorlib::System::Exception(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.AggregateException"))
			, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				MonoType *__generic_types__innerExceptions__[1];
				__generic_types__innerExceptions__[0] = Global::GetType("mscorlib", "System.Collections.Generic", "IEnumerable`1");
				__parameter_types__[1] = Global::GetType("mscorlib", "System.Collections.Generic", "IEnumerable`1", 1,__generic_types__innerExceptions__);
				__parameters__[0] = (MonoObject*)message;
				__parameters__[1] = (MonoObject*)innerExceptions;
				__native_object__ = Global::New("mscorlib", "System", "AggregateException", 2, __parameter_types__, __parameters__);
			};
		
			AggregateException(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::Exception(nativeTypeInfo)
			, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			{
			};
		
			AggregateException(MonoObject *nativeObject)
			: mscorlib::System::Exception(nativeObject)
			, mscorlib::System::Runtime::InteropServices::_Exception(nativeObject)
			, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
			{
			};
		
			~AggregateException()
			{
			};
		

			AggregateException & operator=(AggregateException &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			mscorlib::System::AggregateException  Flatten();
			void  Handle(mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Exception )> predicate);
			virtual mscorlib::System::String  ToString() override;
			virtual void  GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context) override;
			virtual mscorlib::System::Exception  GetBaseException() override;
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Properties
			__declspec(property(get=get_InnerExceptions)) mscorlib::System::Collections::ObjectModel::ReadOnlyCollection<mscorlib::System::Exception>  InnerExceptions;
			__declspec(property(get=get_InnerException)) mscorlib::System::Exception  InnerException;
			__declspec(property(get=get_HelpLink, put=set_HelpLink)) mscorlib::System::String  HelpLink;
			__declspec(property(get=get_HResult, put=set_HResult)) mscorlib::System::Int32  HResult;
			__declspec(property(get=get_Message)) mscorlib::System::String  Message;
			__declspec(property(get=get_Source, put=set_Source)) mscorlib::System::String  Source;
			__declspec(property(get=get_StackTrace)) mscorlib::System::String  StackTrace;
			__declspec(property(get=get_TargetSite)) mscorlib::System::Reflection::MethodBase  TargetSite;
			__declspec(property(get=get_Data)) mscorlib::System::Collections::IDictionary  Data;

			//Get Set Properties Methods
			//	Get:InnerExceptions
			mscorlib::System::Collections::ObjectModel::ReadOnlyCollection<mscorlib::System::Exception>  get_InnerExceptions() const;

			//	Get:InnerException
			mscorlib::System::Exception  get_InnerException() const;

			//	Get/Set:HelpLink
			mscorlib::System::String  get_HelpLink() const;
			void set_HelpLink(mscorlib::System::String  value);

			//	Get/Set:HResult
			mscorlib::System::Int32  get_HResult() const;
			void set_HResult(mscorlib::System::Int32  value);

			//	Get:Message
			mscorlib::System::String  get_Message() const;

			//	Get/Set:Source
			mscorlib::System::String  get_Source() const;
			void set_Source(mscorlib::System::String  value);

			//	Get:StackTrace
			mscorlib::System::String  get_StackTrace() const;

			//	Get:TargetSite
			mscorlib::System::Reflection::MethodBase  get_TargetSite() const;

			//	Get:Data
			mscorlib::System::Collections::IDictionary  get_Data() const;

		
		protected:
		
		private:
		
		};

	}
}
#endif
