#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_COMPARER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_COMPARER_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CultureInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IComparer.h>

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

		class Type;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			class Comparer
				: public mscorlib::System::Object
				, public virtual mscorlib::System::Runtime::Serialization::ISerializable
				, public virtual mscorlib::System::Collections::IComparer
			{
			public:
				Comparer(mscorlib::System::Globalization::CultureInfo culture)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Comparer"))
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				, mscorlib::System::Collections::IComparer(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Globalization", "CultureInfo");
					__parameters__[0] = (MonoObject*)culture;
					__native_object__ = Global::New("mscorlib", "System.Collections", "Comparer", 1, __parameter_types__, __parameters__);
				};
			
				Comparer(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				, mscorlib::System::Collections::IComparer(NULL)
				{
				};
			
				Comparer(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
				, mscorlib::System::Collections::IComparer(nativeObject)
				{
				};
			
				~Comparer()
				{
				};
			

				Comparer & operator=(Comparer &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(Comparer &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Int32  Compare(mscorlib::System::Object a, mscorlib::System::Object b);
				virtual void  GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Static Fields
				static Property<mscorlib::System::Collections::Comparer , mscorlib::System::Collections::Comparer> Default;
				static Property<mscorlib::System::Collections::Comparer , mscorlib::System::Collections::Comparer> DefaultInvariant;

				//	Get/Set:Default
				static mscorlib::System::Collections::Comparer  get_Default();
				static void set_Default(mscorlib::System::Collections::Comparer  value);

				//	Get/Set:DefaultInvariant
				static mscorlib::System::Collections::Comparer  get_DefaultInvariant();
				static void set_DefaultInvariant(mscorlib::System::Collections::Comparer  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
