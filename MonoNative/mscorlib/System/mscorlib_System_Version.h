#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_VERSION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_VERSION_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_IComparable.h>
#include <mscorlib/System/mscorlib_System_IComparable_1.h>
#include <mscorlib/System/mscorlib_System_ICloneable.h>
#include <mscorlib/System/mscorlib_System_IEquatable_1.h>

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

		class Version
			: public mscorlib::System::Object
			, public virtual mscorlib::System::IObjectComparable
			, public virtual mscorlib::System::IComparable<mscorlib::System::Version>
			, public virtual mscorlib::System::ICloneable
			, public virtual mscorlib::System::IEquatable<mscorlib::System::Version>
		{
		public:
			Version()
			: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Version"))
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::IComparable<mscorlib::System::Version>(NULL)
			, mscorlib::System::ICloneable(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::Version>(NULL)
			{
				__native_object__ = Global::New("mscorlib", "System", "Version");
			};
		
			Version(mscorlib::System::String version)
			: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Version"))
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::IComparable<mscorlib::System::Version>(NULL)
			, mscorlib::System::ICloneable(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::Version>(NULL)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = (MonoObject*)version;
				__native_object__ = Global::New("mscorlib", "System", "Version", 1, __parameter_types__, __parameters__);
			};
		
			Version(mscorlib::System::Int32 major, mscorlib::System::Int32 minor)
			: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Version"))
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::IComparable<mscorlib::System::Version>(NULL)
			, mscorlib::System::ICloneable(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::Version>(NULL)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
				__parameters__[0] = &major;
				__parameters__[1] = &minor;
				__native_object__ = Global::New("mscorlib", "System", "Version", 2, __parameter_types__, __parameters__);
			};
		
			Version(mscorlib::System::Int32 major, mscorlib::System::Int32 minor, mscorlib::System::Int32 build)
			: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Version"))
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::IComparable<mscorlib::System::Version>(NULL)
			, mscorlib::System::ICloneable(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::Version>(NULL)
			{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
				__parameters__[0] = &major;
				__parameters__[1] = &minor;
				__parameters__[2] = &build;
				__native_object__ = Global::New("mscorlib", "System", "Version", 3, __parameter_types__, __parameters__);
			};
		
			Version(mscorlib::System::Int32 major, mscorlib::System::Int32 minor, mscorlib::System::Int32 build, mscorlib::System::Int32 revision)
			: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Version"))
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::IComparable<mscorlib::System::Version>(NULL)
			, mscorlib::System::ICloneable(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::Version>(NULL)
			{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[3] = Global::GetType("mscorlib", "System", "Int32");
				__parameters__[0] = &major;
				__parameters__[1] = &minor;
				__parameters__[2] = &build;
				__parameters__[3] = &revision;
				__native_object__ = Global::New("mscorlib", "System", "Version", 4, __parameter_types__, __parameters__);
			};
		
			Version(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::Object(nativeTypeInfo)
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::IComparable<mscorlib::System::Version>(NULL)
			, mscorlib::System::ICloneable(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::Version>(NULL)
			{
			};
		
			Version(MonoObject *nativeObject)
			: mscorlib::System::Object(nativeObject)
			, mscorlib::System::IObjectComparable(nativeObject)
			, mscorlib::System::IComparable<mscorlib::System::Version>(nativeObject)
			, mscorlib::System::ICloneable(nativeObject)
			, mscorlib::System::IEquatable<mscorlib::System::Version>(nativeObject)
			{
			};
		
			~Version()
			{
			};
		

			Version & operator=(Version &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			virtual mscorlib::System::Object  Clone();
			virtual mscorlib::System::Int32  CompareTo(mscorlib::System::Object version);
			virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
			virtual mscorlib::System::Int32  CompareTo(mscorlib::System::Version value);
			virtual mscorlib::System::Boolean  Equals(mscorlib::System::Version obj);
			virtual mscorlib::System::Int32  GetHashCode() override;
			virtual mscorlib::System::String  ToString() override;
			mscorlib::System::String  ToString(mscorlib::System::Int32 fieldCount);
			static mscorlib::System::Version  Parse(mscorlib::System::String input);
			static mscorlib::System::Boolean  TryParse(mscorlib::System::String input, mscorlib::System::Version result);
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Properties
			__declspec(property(get=get_Build)) mscorlib::System::Int32  Build;
			__declspec(property(get=get_Major)) mscorlib::System::Int32  Major;
			__declspec(property(get=get_Minor)) mscorlib::System::Int32  Minor;
			__declspec(property(get=get_Revision)) mscorlib::System::Int32  Revision;
			__declspec(property(get=get_MajorRevision)) mscorlib::System::Int16  MajorRevision;
			__declspec(property(get=get_MinorRevision)) mscorlib::System::Int16  MinorRevision;

			//Get Set Properties Methods
			//	Get:Build
			mscorlib::System::Int32  get_Build();

			//	Get:Major
			mscorlib::System::Int32  get_Major();

			//	Get:Minor
			mscorlib::System::Int32  get_Minor();

			//	Get:Revision
			mscorlib::System::Int32  get_Revision();

			//	Get:MajorRevision
			mscorlib::System::Int16  get_MajorRevision();

			//	Get:MinorRevision
			mscorlib::System::Int16  get_MinorRevision();

		
		protected:
		
		private:
		
		};

	}
}
#endif
