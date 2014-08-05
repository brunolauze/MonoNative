#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_EVIDENCE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_EVIDENCE_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_ICollection.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerator.h>

namespace mscorlib
{
	namespace System
	{

		class Array;
		class Type;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Policy
			{

				class Evidence
					: public mscorlib::System::Object
					, public virtual mscorlib::System::Collections::ICollection
					, public virtual mscorlib::System::Collections::IEnumerable
				{
				public:
					Evidence()
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Policy.Evidence"))
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					{
						__native_object__ = Global::New("mscorlib", "System.Security.Policy", "Evidence");
					};
				
					Evidence(mscorlib::System::Security::Policy::Evidence &evidence)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Policy.Evidence"))
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Policy", "Evidence");
						__parameters__[0] = (MonoObject*)evidence;
						__native_object__ = Global::New("mscorlib", "System.Security.Policy", "Evidence", 1, __parameter_types__, __parameters__);
					};
				
					Evidence(std::vector<mscorlib::System::Object*> hostEvidence, std::vector<mscorlib::System::Object*> assemblyEvidence)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Policy.Evidence"))
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType("mscorlib", "System", "Object"))->eklass);
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType("mscorlib", "System", "Object"))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Object*>(hostEvidence, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "Object");
						__parameters__[1] = Global::FromArray<mscorlib::System::Object*>(assemblyEvidence, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "Object");
						__native_object__ = Global::New("mscorlib", "System.Security.Policy", "Evidence", 2, __parameter_types__, __parameters__);
					};
				
					Evidence(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					{
					};
				
					Evidence(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::Collections::ICollection(nativeObject)
					, mscorlib::System::Collections::IEnumerable(nativeObject)
					{
					};
				
					~Evidence()
					{
					};
				

					Evidence & operator=(Evidence &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					void  AddAssembly(mscorlib::System::Object id);
					void  AddHost(mscorlib::System::Object id);
					void  Clear();
					virtual void  CopyTo(mscorlib::System::Array array, mscorlib::System::Int32 index);
					virtual mscorlib::System::Collections::IEnumerator * GetEnumerator();
					mscorlib::System::Collections::IEnumerator  GetAssemblyEnumerator();
					mscorlib::System::Collections::IEnumerator  GetHostEnumerator();
					void  Merge(mscorlib::System::Security::Policy::Evidence evidence);
					void  RemoveType(mscorlib::System::Type t);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Count)) mscorlib::System::Int32  Count;
					__declspec(property(get=get_IsReadOnly)) mscorlib::System::Boolean  IsReadOnly;
					__declspec(property(get=get_IsSynchronized)) mscorlib::System::Boolean  IsSynchronized;
					__declspec(property(get=get_Locked, put=set_Locked)) mscorlib::System::Boolean  Locked;
					__declspec(property(get=get_SyncRoot)) mscorlib::System::Object  SyncRoot;

					//Get Set Properties Methods
					//	Get:Count
					mscorlib::System::Int32  get_Count() const;

					//	Get:IsReadOnly
					mscorlib::System::Boolean  get_IsReadOnly() const;

					//	Get:IsSynchronized
					mscorlib::System::Boolean  get_IsSynchronized() const;

					//	Get/Set:Locked
					mscorlib::System::Boolean  get_Locked() const;
					void set_Locked(mscorlib::System::Boolean  value);

					//	Get:SyncRoot
					mscorlib::System::Object  get_SyncRoot() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
