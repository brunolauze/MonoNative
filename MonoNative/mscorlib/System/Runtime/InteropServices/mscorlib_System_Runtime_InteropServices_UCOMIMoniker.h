#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_UCOMIMONIKER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_UCOMIMONIKER_H

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

				class UCOMIStream;
				class UCOMIBindCtx;
				class UCOMIEnumMoniker;
				class FILETIME;
				

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

				class UCOMIMoniker
				{
				public:
					UCOMIMoniker(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_InteropServices_UCOMIMoniker = nativeObject;
					};
				
					~UCOMIMoniker()
					{
					};
				

					UCOMIMoniker & operator=(UCOMIMoniker &value) { __mscorlib_System_Runtime_InteropServices_UCOMIMoniker = value.__mscorlib_System_Runtime_InteropServices_UCOMIMoniker; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_UCOMIMoniker; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_UCOMIMoniker = value; return value; };


					virtual void  GetClassID(mscorlib::System::Guid pClassID);
					virtual mscorlib::System::Int32  IsDirty();
					virtual void  Load(mscorlib::System::Runtime::InteropServices::UCOMIStream pStm);
					virtual void  Save(mscorlib::System::Runtime::InteropServices::UCOMIStream pStm, mscorlib::System::Boolean fClearDirty);
					virtual void  GetSizeMax(mscorlib::System::Int64 pcbSize);
					virtual void  BindToObject(mscorlib::System::Runtime::InteropServices::UCOMIBindCtx pbc, mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkToLeft, mscorlib::System::Guid riidResult, mscorlib::System::Object ppvResult);
					virtual void  BindToStorage(mscorlib::System::Runtime::InteropServices::UCOMIBindCtx pbc, mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkToLeft, mscorlib::System::Guid riid, mscorlib::System::Object ppvObj);
					virtual void  Reduce(mscorlib::System::Runtime::InteropServices::UCOMIBindCtx pbc, mscorlib::System::Int32 dwReduceHowFar, mscorlib::System::Runtime::InteropServices::UCOMIMoniker ppmkToLeft, mscorlib::System::Runtime::InteropServices::UCOMIMoniker ppmkReduced);
					virtual void  ComposeWith(mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkRight, mscorlib::System::Boolean fOnlyIfNotGeneric, mscorlib::System::Runtime::InteropServices::UCOMIMoniker ppmkComposite);
					virtual void  Enum(mscorlib::System::Boolean fForward, mscorlib::System::Runtime::InteropServices::UCOMIEnumMoniker ppenumMoniker);
					virtual void  IsEqual(mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkOtherMoniker);
					virtual void  Hash(mscorlib::System::Int32 pdwHash);
					virtual void  IsRunning(mscorlib::System::Runtime::InteropServices::UCOMIBindCtx pbc, mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkToLeft, mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkNewlyRunning);
					virtual void  GetTimeOfLastChange(mscorlib::System::Runtime::InteropServices::UCOMIBindCtx pbc, mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkToLeft, mscorlib::System::Runtime::InteropServices::FILETIME pFileTime);
					virtual void  Inverse(mscorlib::System::Runtime::InteropServices::UCOMIMoniker ppmk);
					virtual void  CommonPrefixWith(mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkOther, mscorlib::System::Runtime::InteropServices::UCOMIMoniker ppmkPrefix);
					virtual void  RelativePathTo(mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkOther, mscorlib::System::Runtime::InteropServices::UCOMIMoniker ppmkRelPath);
					virtual void  GetDisplayName(mscorlib::System::Runtime::InteropServices::UCOMIBindCtx pbc, mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkToLeft, mscorlib::System::String ppszDisplayName);
					virtual void  ParseDisplayName(mscorlib::System::Runtime::InteropServices::UCOMIBindCtx pbc, mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkToLeft, mscorlib::System::String pszDisplayName, mscorlib::System::Int32 pchEaten, mscorlib::System::Runtime::InteropServices::UCOMIMoniker ppmkOut);
					virtual void  ParseDisplayName(mscorlib::System::Runtime::InteropServices::UCOMIBindCtx pbc, mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkToLeft, const char *pszDisplayName, mscorlib::System::Int32 pchEaten, mscorlib::System::Runtime::InteropServices::UCOMIMoniker ppmkOut);
					virtual void  IsSystemMoniker(mscorlib::System::Int32 pdwMksys);


				
				protected:
					MonoObject *__mscorlib_System_Runtime_InteropServices_UCOMIMoniker;
				
				private:
				
				};

			}
		}
	}
}
#endif
