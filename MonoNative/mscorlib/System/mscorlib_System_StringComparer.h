#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_STRINGCOMPARER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_STRINGCOMPARER_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEqualityComparer.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEqualityComparer_1.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IComparer.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IComparer_1.h>

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

			class CultureInfo;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class StringComparer
			: public mscorlib::System::Object
			, public virtual mscorlib::System::Collections::IEqualityComparer
			, public virtual mscorlib::System::Collections::Generic::IEqualityComparer<mscorlib::System::String>
			, public virtual mscorlib::System::Collections::IComparer
			, public virtual mscorlib::System::Collections::Generic::IComparer<mscorlib::System::String>
		{
		public:
			StringComparer(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::Object(nativeTypeInfo)
			, mscorlib::System::Collections::IEqualityComparer(NULL)
			, mscorlib::System::Collections::Generic::IEqualityComparer<mscorlib::System::String>(NULL)
			, mscorlib::System::Collections::IComparer(NULL)
			, mscorlib::System::Collections::Generic::IComparer<mscorlib::System::String>(NULL)
			{
			};
		
			StringComparer(MonoObject *nativeObject)
			: mscorlib::System::Object(nativeObject)
			, mscorlib::System::Collections::IEqualityComparer(nativeObject)
			, mscorlib::System::Collections::Generic::IEqualityComparer<mscorlib::System::String>(nativeObject)
			, mscorlib::System::Collections::IComparer(nativeObject)
			, mscorlib::System::Collections::Generic::IComparer<mscorlib::System::String>(nativeObject)
			{
			};
		
			~StringComparer()
			{
			};
		

			StringComparer & operator=(StringComparer &value) { __native_object__ = value.GetNativeObject(); return value; };
			bool operator==(StringComparer &value) { return mscorlib::System::Object::Equals(value); };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			static mscorlib::System::StringComparer  Create(mscorlib::System::Globalization::CultureInfo culture, mscorlib::System::Boolean ignoreCase);
			virtual mscorlib::System::Int32  Compare(mscorlib::System::Object x, mscorlib::System::Object y);
			virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object x, mscorlib::System::Object y);
			virtual mscorlib::System::Int32  GetHashCode(mscorlib::System::Object obj);
			virtual mscorlib::System::Int32  Compare(mscorlib::System::String x, mscorlib::System::String y);
			virtual mscorlib::System::Int32  Compare(const char *x, const char *y);
			virtual mscorlib::System::Boolean  Equals(mscorlib::System::String x, mscorlib::System::String y);
			virtual mscorlib::System::Boolean  Equals(const char *x, const char *y);
			virtual mscorlib::System::Int32  GetHashCode(mscorlib::System::String obj);
			virtual mscorlib::System::Int32  GetHashCode(const char *obj);
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Static Properties
			static Property<mscorlib::System::StringComparer , mscorlib::System::StringComparer> CurrentCulture;
			static Property<mscorlib::System::StringComparer , mscorlib::System::StringComparer> CurrentCultureIgnoreCase;
			static Property<mscorlib::System::StringComparer , mscorlib::System::StringComparer> InvariantCulture;
			static Property<mscorlib::System::StringComparer , mscorlib::System::StringComparer> InvariantCultureIgnoreCase;
			static Property<mscorlib::System::StringComparer , mscorlib::System::StringComparer> Ordinal;
			static Property<mscorlib::System::StringComparer , mscorlib::System::StringComparer> OrdinalIgnoreCase;

			//Get Set Static Properties Methods
			//	Get:CurrentCulture
			static mscorlib::System::StringComparer  get_CurrentCulture();
			static void set_CurrentCulture(mscorlib::System::StringComparer  value);

			//	Get:CurrentCultureIgnoreCase
			static mscorlib::System::StringComparer  get_CurrentCultureIgnoreCase();
			static void set_CurrentCultureIgnoreCase(mscorlib::System::StringComparer  value);

			//	Get:InvariantCulture
			static mscorlib::System::StringComparer  get_InvariantCulture();
			static void set_InvariantCulture(mscorlib::System::StringComparer  value);

			//	Get:InvariantCultureIgnoreCase
			static mscorlib::System::StringComparer  get_InvariantCultureIgnoreCase();
			static void set_InvariantCultureIgnoreCase(mscorlib::System::StringComparer  value);

			//	Get:Ordinal
			static mscorlib::System::StringComparer  get_Ordinal();
			static void set_Ordinal(mscorlib::System::StringComparer  value);

			//	Get:OrdinalIgnoreCase
			static mscorlib::System::StringComparer  get_OrdinalIgnoreCase();
			static void set_OrdinalIgnoreCase(mscorlib::System::StringComparer  value);


		
		protected:
		
		private:
		
		};

	}
}
#endif
