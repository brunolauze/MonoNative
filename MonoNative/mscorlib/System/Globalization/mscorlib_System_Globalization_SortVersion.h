#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_SORTVERSION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_SORTVERSION_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
#include <mscorlib/System/mscorlib_System_IEquatable_1.h>

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
		namespace Globalization
		{

			class SortVersion
				: public mscorlib::System::Object
				, public virtual mscorlib::System::IEquatable<mscorlib::System::Globalization::SortVersion>
			{
			public:
				SortVersion(mscorlib::System::Int32 fullVersion, mscorlib::System::Guid sortId)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Globalization.SortVersion"))
				, mscorlib::System::IEquatable<mscorlib::System::Globalization::SortVersion>(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Guid");
					__parameters__[0] = &fullVersion;
					__parameters__[1] = (MonoObject*)sortId;
					__native_object__ = Global::New("mscorlib", "System.Globalization", "SortVersion", 2, __parameter_types__, __parameters__);
				};
			
				SortVersion(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::IEquatable<mscorlib::System::Globalization::SortVersion>(NULL)
				{
				};
			
				SortVersion(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::IEquatable<mscorlib::System::Globalization::SortVersion>(nativeObject)
				{
				};
			
				~SortVersion()
				{
				};
			

				SortVersion & operator=(SortVersion &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
				virtual mscorlib::System::Int32  GetHashCode() override;
				virtual mscorlib::System::Boolean  Equals(mscorlib::System::Globalization::SortVersion other);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_SortId, put=set_SortId)) mscorlib::System::Guid  SortId;
				__declspec(property(get=get_FullVersion, put=set_FullVersion)) mscorlib::System::Int32  FullVersion;

				//Get Set Properties Methods
				//	Get/Set:SortId
				mscorlib::System::Guid  get_SortId() const;
				void set_SortId(mscorlib::System::Guid  value);

				//	Get/Set:FullVersion
				mscorlib::System::Int32  get_FullVersion() const;
				void set_FullVersion(mscorlib::System::Int32  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
