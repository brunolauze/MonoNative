#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_CASEINSENSITIVEHASHCODEPROVIDER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_CASEINSENSITIVEHASHCODEPROVIDER_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CultureInfo.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IHashCodeProvider.h>

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

			class CaseInsensitiveHashCodeProvider
				: public mscorlib::System::Object
				, public virtual mscorlib::System::Collections::IHashCodeProvider
			{
			public:
				CaseInsensitiveHashCodeProvider()
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.CaseInsensitiveHashCodeProvider"))
				, mscorlib::System::Collections::IHashCodeProvider(NULL)
				{
					__native_object__ = Global::New("mscorlib", "System.Collections", "CaseInsensitiveHashCodeProvider");
				};
			
				CaseInsensitiveHashCodeProvider(mscorlib::System::Globalization::CultureInfo culture)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.CaseInsensitiveHashCodeProvider"))
				, mscorlib::System::Collections::IHashCodeProvider(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Globalization", "CultureInfo");
					__parameters__[0] = (MonoObject*)culture;
					__native_object__ = Global::New("mscorlib", "System.Collections", "CaseInsensitiveHashCodeProvider", 1, __parameter_types__, __parameters__);
				};
			
				CaseInsensitiveHashCodeProvider(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::Collections::IHashCodeProvider(NULL)
				{
				};
			
				CaseInsensitiveHashCodeProvider(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::Collections::IHashCodeProvider(nativeObject)
				{
				};
			
				~CaseInsensitiveHashCodeProvider()
				{
				};
			

				CaseInsensitiveHashCodeProvider & operator=(CaseInsensitiveHashCodeProvider &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(CaseInsensitiveHashCodeProvider &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Int32  GetHashCode(mscorlib::System::Object obj);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Static Properties
				static Property<mscorlib::System::Collections::CaseInsensitiveHashCodeProvider , mscorlib::System::Collections::CaseInsensitiveHashCodeProvider> Default;
				static Property<mscorlib::System::Collections::CaseInsensitiveHashCodeProvider , mscorlib::System::Collections::CaseInsensitiveHashCodeProvider> DefaultInvariant;

				//Get Set Static Properties Methods
				//	Get:Default
				static mscorlib::System::Collections::CaseInsensitiveHashCodeProvider  get_Default();
				static void set_Default(mscorlib::System::Collections::CaseInsensitiveHashCodeProvider  value);

				//	Get:DefaultInvariant
				static mscorlib::System::Collections::CaseInsensitiveHashCodeProvider  get_DefaultInvariant();
				static void set_DefaultInvariant(mscorlib::System::Collections::CaseInsensitiveHashCodeProvider  value);


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
