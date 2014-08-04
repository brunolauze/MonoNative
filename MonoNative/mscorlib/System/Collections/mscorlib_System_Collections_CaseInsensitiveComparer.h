#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_CASEINSENSITIVECOMPARER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_CASEINSENSITIVECOMPARER_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CultureInfo.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IComparer.h>

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

			class CaseInsensitiveComparer
				: public mscorlib::System::Object
				, public virtual mscorlib::System::Collections::IComparer
			{
			public:
				CaseInsensitiveComparer()
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.CaseInsensitiveComparer"))
				, mscorlib::System::Collections::IComparer(NULL)
				{
					__native_object__ = Global::New("mscorlib", "System.Collections", "CaseInsensitiveComparer");
				};
			
				CaseInsensitiveComparer(mscorlib::System::Globalization::CultureInfo culture)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.CaseInsensitiveComparer"))
				, mscorlib::System::Collections::IComparer(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Globalization", "CultureInfo");
					__parameters__[0] = (MonoObject*)culture;
					__native_object__ = Global::New("mscorlib", "System.Collections", "CaseInsensitiveComparer", 1, __parameter_types__, __parameters__);
				};
			
				CaseInsensitiveComparer(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::Collections::IComparer(NULL)
				{
				};
			
				CaseInsensitiveComparer(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::Collections::IComparer(nativeObject)
				{
				};
			
				~CaseInsensitiveComparer()
				{
				};
			

				CaseInsensitiveComparer & operator=(CaseInsensitiveComparer &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Int32  Compare(mscorlib::System::Object a, mscorlib::System::Object b);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Static Properties
				static Property<mscorlib::System::Collections::CaseInsensitiveComparer> Default;
				static Property<mscorlib::System::Collections::CaseInsensitiveComparer> DefaultInvariant;

				//Get Set Static Properties Methods
				//	Get:Default
				static mscorlib::System::Collections::CaseInsensitiveComparer  get_Default();

				//	Get:DefaultInvariant
				static mscorlib::System::Collections::CaseInsensitiveComparer  get_DefaultInvariant();


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
