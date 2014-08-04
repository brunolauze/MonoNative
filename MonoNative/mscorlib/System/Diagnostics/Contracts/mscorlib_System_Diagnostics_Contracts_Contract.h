#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_CONTRACTS_CONTRACT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_CONTRACTS_CONTRACT_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>

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
			namespace Contracts
			{

				class ContractFailedEventArgs;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{
			namespace Contracts
			{

				class Contract
					: public mscorlib::System::Object
				{
				public:
					Contract(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					Contract(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~Contract()
					{
					};
				

					Contract & operator=(Contract &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					static void  Assert(mscorlib::System::Boolean condition);
					static void  Assert(mscorlib::System::Boolean condition, mscorlib::System::String userMessage);
					static void  Assume(mscorlib::System::Boolean condition);
					static void  Assume(mscorlib::System::Boolean condition, mscorlib::System::String userMessage);
					static void  EndContractBlock();
					static void  Ensures(mscorlib::System::Boolean condition);
					static void  Ensures(mscorlib::System::Boolean condition, mscorlib::System::String userMessage);
					template<typename TException>
					static void  EnsuresOnThrow(mscorlib::System::Boolean condition)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(condition).name());
						__parameters__[0] = reinterpret_cast<void*>(condition);
						Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "Contract", 0, NULL, "EnsuresOnThrow", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					};
					
					template<typename TException>
					static void  EnsuresOnThrow(mscorlib::System::Boolean condition, mscorlib::System::String userMessage)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(condition).name());
						__parameter_types__[1] = Global::GetType(typeid(userMessage).name());
						__parameters__[0] = reinterpret_cast<void*>(condition);
						__parameters__[1] = (MonoObject*)userMessage;
						Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "Contract", 0, NULL, "EnsuresOnThrow", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					};
					
					template<typename T>
					static mscorlib::System::Boolean  Exists(mscorlib::System::Collections::Generic::IEnumerable<T> collection, mscorlib::Callback<mscorlib::System::Boolean  (T )> predicate)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(collection).name());
						__parameter_types__[1] = Global::GetType(typeid(predicate).name());
						__parameters__[0] = (MonoObject*)collection;
						__parameters__[1] = &predicate;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "Contract", 0, NULL, "Exists", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					};
					
					static mscorlib::System::Boolean  Exists(mscorlib::System::Int32 fromInclusive, mscorlib::System::Int32 toExclusive, mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Int32 )> predicate);
					template<typename T>
					static mscorlib::System::Boolean  ForAll(mscorlib::System::Collections::Generic::IEnumerable<T> collection, mscorlib::Callback<mscorlib::System::Boolean  (T )> predicate)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(collection).name());
						__parameter_types__[1] = Global::GetType(typeid(predicate).name());
						__parameters__[0] = (MonoObject*)collection;
						__parameters__[1] = &predicate;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "Contract", 0, NULL, "ForAll", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					};
					
					static mscorlib::System::Boolean  ForAll(mscorlib::System::Int32 fromInclusive, mscorlib::System::Int32 toExclusive, mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Int32 )> predicate);
					static void  Invariant(mscorlib::System::Boolean condition);
					static void  Invariant(mscorlib::System::Boolean condition, mscorlib::System::String userMessage);
					template<typename T>
					static T  OldValue(T value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "Contract", 0, NULL, "OldValue", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return T(__result__);
					};
					
					static void  Requires(mscorlib::System::Boolean condition);
					static void  Requires(mscorlib::System::Boolean condition, mscorlib::System::String userMessage);
					template<typename TException>
					static void  Requires(mscorlib::System::Boolean condition)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(condition).name());
						__parameters__[0] = reinterpret_cast<void*>(condition);
						Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "Contract", 0, NULL, "Requires", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					};
					
					template<typename TException>
					static void  Requires(mscorlib::System::Boolean condition, mscorlib::System::String userMessage)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(condition).name());
						__parameter_types__[1] = Global::GetType(typeid(userMessage).name());
						__parameters__[0] = reinterpret_cast<void*>(condition);
						__parameters__[1] = (MonoObject*)userMessage;
						Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "Contract", 0, NULL, "Requires", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					};
					
					template<typename T>
					static T  Result()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "Contract", 0, NULL, "Result", NullMonoObject, 0, NULL, NULL, NULL);
						return T(__result__);
					};
					
					template<typename T>
					static T  ValueAtReturn(T value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "Contract", 0, NULL, "ValueAtReturn", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return T(__result__);
					};
					
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
