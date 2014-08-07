#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_TEXTELEMENTENUMERATOR_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_TEXTELEMENTENUMERATOR_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerator.h>

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
		namespace Globalization
		{

			class TextElementEnumerator
				: public mscorlib::System::Object
				, public virtual mscorlib::System::Collections::IEnumerator
			{
			public:
				TextElementEnumerator(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::Collections::IEnumerator(NULL)
				{
				};
			
				TextElementEnumerator(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::Collections::IEnumerator(nativeObject)
				{
				};
			
				~TextElementEnumerator()
				{
				};
			

				TextElementEnumerator & operator=(TextElementEnumerator &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(TextElementEnumerator &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				mscorlib::System::String  GetTextElement();
				virtual mscorlib::System::Boolean  MoveNext();
				virtual void  Reset();
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Current)) mscorlib::System::Object  Current;
				__declspec(property(get=get_ElementIndex)) mscorlib::System::Int32  ElementIndex;

				//Get Set Properties Methods
				//	Get:Current
				mscorlib::System::Object  get_Current() const;

				//	Get:ElementIndex
				mscorlib::System::Int32  get_ElementIndex() const;

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
