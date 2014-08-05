#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IMONIKER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IMONIKER_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Guid;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{
				namespace ComTypes
				{

					class IStream;
					class IBindCtx;
					class IEnumMoniker;
					class FILETIME;
					

				}
			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{
				namespace ComTypes
				{

					class IMoniker
					{
					public:
						IMoniker(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_InteropServices_ComTypes_IMoniker = nativeObject;
						};
					
						~IMoniker()
						{
						};
					

						IMoniker & operator=(IMoniker &value) { __mscorlib_System_Runtime_InteropServices_ComTypes_IMoniker = value.__mscorlib_System_Runtime_InteropServices_ComTypes_IMoniker; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_ComTypes_IMoniker; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_ComTypes_IMoniker = value; return value; };


						virtual void  GetClassID(mscorlib::System::Guid pClassID);
						virtual mscorlib::System::Int32  IsDirty();
						virtual void  Load(mscorlib::System::Runtime::InteropServices::ComTypes::IStream pStm);
						virtual void  Save(mscorlib::System::Runtime::InteropServices::ComTypes::IStream pStm, mscorlib::System::Boolean fClearDirty);
						virtual void  GetSizeMax(mscorlib::System::Int64 pcbSize);
						virtual void  BindToObject(mscorlib::System::Runtime::InteropServices::ComTypes::IBindCtx pbc, mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker pmkToLeft, mscorlib::System::Guid riidResult, mscorlib::System::Object ppvResult);
						virtual void  BindToStorage(mscorlib::System::Runtime::InteropServices::ComTypes::IBindCtx pbc, mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker pmkToLeft, mscorlib::System::Guid riid, mscorlib::System::Object ppvObj);
						virtual void  Reduce(mscorlib::System::Runtime::InteropServices::ComTypes::IBindCtx pbc, mscorlib::System::Int32 dwReduceHowFar, mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker ppmkToLeft, mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker ppmkReduced);
						virtual void  ComposeWith(mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker pmkRight, mscorlib::System::Boolean fOnlyIfNotGeneric, mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker ppmkComposite);
						virtual void  Enum(mscorlib::System::Boolean fForward, mscorlib::System::Runtime::InteropServices::ComTypes::IEnumMoniker ppenumMoniker);
						virtual mscorlib::System::Int32  IsEqual(mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker pmkOtherMoniker);
						virtual void  Hash(mscorlib::System::Int32 pdwHash);
						virtual mscorlib::System::Int32  IsRunning(mscorlib::System::Runtime::InteropServices::ComTypes::IBindCtx pbc, mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker pmkToLeft, mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker pmkNewlyRunning);
						virtual void  GetTimeOfLastChange(mscorlib::System::Runtime::InteropServices::ComTypes::IBindCtx pbc, mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker pmkToLeft, mscorlib::System::Runtime::InteropServices::ComTypes::FILETIME pFileTime);
						virtual void  Inverse(mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker ppmk);
						virtual void  CommonPrefixWith(mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker pmkOther, mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker ppmkPrefix);
						virtual void  RelativePathTo(mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker pmkOther, mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker ppmkRelPath);
						virtual void  GetDisplayName(mscorlib::System::Runtime::InteropServices::ComTypes::IBindCtx pbc, mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker pmkToLeft, mscorlib::System::String ppszDisplayName);
						virtual void  ParseDisplayName(mscorlib::System::Runtime::InteropServices::ComTypes::IBindCtx pbc, mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker pmkToLeft, mscorlib::System::String pszDisplayName, mscorlib::System::Int32 pchEaten, mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker ppmkOut);
						virtual void  ParseDisplayName(mscorlib::System::Runtime::InteropServices::ComTypes::IBindCtx pbc, mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker pmkToLeft, const char *pszDisplayName, mscorlib::System::Int32 pchEaten, mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker ppmkOut);
						virtual mscorlib::System::Int32  IsSystemMoniker(mscorlib::System::Int32 pdwMksys);


					
					protected:
						MonoObject *__mscorlib_System_Runtime_InteropServices_ComTypes_IMoniker;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
