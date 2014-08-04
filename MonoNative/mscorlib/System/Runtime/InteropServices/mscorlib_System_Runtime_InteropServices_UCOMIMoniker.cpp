#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_UCOMIMoniker.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_UCOMIStream.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_UCOMIBindCtx.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_UCOMIEnumMoniker.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_FILETIME.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Public Methods
				void UCOMIMoniker::GetClassID(mscorlib::System::Guid pClassID)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(pClassID).name());
						__parameters__[0] = (MonoObject*)pClassID;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIMoniker", 0, NULL, "GetClassID", __mscorlib_System_Runtime_InteropServices_UCOMIMoniker, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Int32 UCOMIMoniker::IsDirty()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIMoniker", 0, NULL, "IsDirty", __mscorlib_System_Runtime_InteropServices_UCOMIMoniker, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void UCOMIMoniker::Load(mscorlib::System::Runtime::InteropServices::UCOMIStream pStm)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(pStm).name());
						__parameters__[0] = (MonoObject*)pStm;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIMoniker", 0, NULL, "Load", __mscorlib_System_Runtime_InteropServices_UCOMIMoniker, 1, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIMoniker::Save(mscorlib::System::Runtime::InteropServices::UCOMIStream pStm, mscorlib::System::Boolean fClearDirty)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(pStm).name());
						__parameter_types__[1] = Global::GetType(typeid(fClearDirty).name());
						__parameters__[0] = (MonoObject*)pStm;
						__parameters__[1] = reinterpret_cast<void*>(fClearDirty);
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIMoniker", 0, NULL, "Save", __mscorlib_System_Runtime_InteropServices_UCOMIMoniker, 2, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIMoniker::GetSizeMax(mscorlib::System::Int64 pcbSize)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(pcbSize).name());
						__parameters__[0] = &pcbSize;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIMoniker", 0, NULL, "GetSizeMax", __mscorlib_System_Runtime_InteropServices_UCOMIMoniker, 1, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIMoniker::BindToObject(mscorlib::System::Runtime::InteropServices::UCOMIBindCtx pbc, mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkToLeft, mscorlib::System::Guid riidResult, mscorlib::System::Object ppvResult)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(pbc).name());
						__parameter_types__[1] = Global::GetType(typeid(pmkToLeft).name());
						__parameter_types__[2] = Global::GetType(typeid(riidResult).name());
						__parameter_types__[3] = Global::GetType(typeid(ppvResult).name());
						__parameters__[0] = (MonoObject*)pbc;
						__parameters__[1] = (MonoObject*)pmkToLeft;
						__parameters__[2] = (MonoObject*)riidResult;
						__parameters__[3] = (MonoObject*)ppvResult;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIMoniker", 0, NULL, "BindToObject", __mscorlib_System_Runtime_InteropServices_UCOMIMoniker, 4, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIMoniker::BindToStorage(mscorlib::System::Runtime::InteropServices::UCOMIBindCtx pbc, mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkToLeft, mscorlib::System::Guid riid, mscorlib::System::Object ppvObj)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(pbc).name());
						__parameter_types__[1] = Global::GetType(typeid(pmkToLeft).name());
						__parameter_types__[2] = Global::GetType(typeid(riid).name());
						__parameter_types__[3] = Global::GetType(typeid(ppvObj).name());
						__parameters__[0] = (MonoObject*)pbc;
						__parameters__[1] = (MonoObject*)pmkToLeft;
						__parameters__[2] = (MonoObject*)riid;
						__parameters__[3] = (MonoObject*)ppvObj;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIMoniker", 0, NULL, "BindToStorage", __mscorlib_System_Runtime_InteropServices_UCOMIMoniker, 4, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIMoniker::Reduce(mscorlib::System::Runtime::InteropServices::UCOMIBindCtx pbc, mscorlib::System::Int32 dwReduceHowFar, mscorlib::System::Runtime::InteropServices::UCOMIMoniker ppmkToLeft, mscorlib::System::Runtime::InteropServices::UCOMIMoniker ppmkReduced)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(pbc).name());
						__parameter_types__[1] = Global::GetType(typeid(dwReduceHowFar).name());
						__parameter_types__[2] = Global::GetType(typeid(ppmkToLeft).name());
						__parameter_types__[3] = Global::GetType(typeid(ppmkReduced).name());
						__parameters__[0] = (MonoObject*)pbc;
						__parameters__[1] = &dwReduceHowFar;
						__parameters__[2] = (MonoObject*)ppmkToLeft;
						__parameters__[3] = (MonoObject*)ppmkReduced;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIMoniker", 0, NULL, "Reduce", __mscorlib_System_Runtime_InteropServices_UCOMIMoniker, 4, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIMoniker::ComposeWith(mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkRight, mscorlib::System::Boolean fOnlyIfNotGeneric, mscorlib::System::Runtime::InteropServices::UCOMIMoniker ppmkComposite)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(pmkRight).name());
						__parameter_types__[1] = Global::GetType(typeid(fOnlyIfNotGeneric).name());
						__parameter_types__[2] = Global::GetType(typeid(ppmkComposite).name());
						__parameters__[0] = (MonoObject*)pmkRight;
						__parameters__[1] = reinterpret_cast<void*>(fOnlyIfNotGeneric);
						__parameters__[2] = (MonoObject*)ppmkComposite;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIMoniker", 0, NULL, "ComposeWith", __mscorlib_System_Runtime_InteropServices_UCOMIMoniker, 3, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIMoniker::Enum(mscorlib::System::Boolean fForward, mscorlib::System::Runtime::InteropServices::UCOMIEnumMoniker ppenumMoniker)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(fForward).name());
						__parameter_types__[1] = Global::GetType(typeid(ppenumMoniker).name());
						__parameters__[0] = reinterpret_cast<void*>(fForward);
						__parameters__[1] = (MonoObject*)ppenumMoniker;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIMoniker", 0, NULL, "Enum", __mscorlib_System_Runtime_InteropServices_UCOMIMoniker, 2, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIMoniker::IsEqual(mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkOtherMoniker)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(pmkOtherMoniker).name());
						__parameters__[0] = (MonoObject*)pmkOtherMoniker;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIMoniker", 0, NULL, "IsEqual", __mscorlib_System_Runtime_InteropServices_UCOMIMoniker, 1, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIMoniker::Hash(mscorlib::System::Int32 pdwHash)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(pdwHash).name());
						__parameters__[0] = &pdwHash;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIMoniker", 0, NULL, "Hash", __mscorlib_System_Runtime_InteropServices_UCOMIMoniker, 1, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIMoniker::IsRunning(mscorlib::System::Runtime::InteropServices::UCOMIBindCtx pbc, mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkToLeft, mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkNewlyRunning)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(pbc).name());
						__parameter_types__[1] = Global::GetType(typeid(pmkToLeft).name());
						__parameter_types__[2] = Global::GetType(typeid(pmkNewlyRunning).name());
						__parameters__[0] = (MonoObject*)pbc;
						__parameters__[1] = (MonoObject*)pmkToLeft;
						__parameters__[2] = (MonoObject*)pmkNewlyRunning;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIMoniker", 0, NULL, "IsRunning", __mscorlib_System_Runtime_InteropServices_UCOMIMoniker, 3, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIMoniker::GetTimeOfLastChange(mscorlib::System::Runtime::InteropServices::UCOMIBindCtx pbc, mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkToLeft, mscorlib::System::Runtime::InteropServices::FILETIME pFileTime)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(pbc).name());
						__parameter_types__[1] = Global::GetType(typeid(pmkToLeft).name());
						__parameter_types__[2] = Global::GetType(typeid(pFileTime).name());
						__parameters__[0] = (MonoObject*)pbc;
						__parameters__[1] = (MonoObject*)pmkToLeft;
						__parameters__[2] = (MonoObject*)pFileTime;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIMoniker", 0, NULL, "GetTimeOfLastChange", __mscorlib_System_Runtime_InteropServices_UCOMIMoniker, 3, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIMoniker::Inverse(mscorlib::System::Runtime::InteropServices::UCOMIMoniker ppmk)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(ppmk).name());
						__parameters__[0] = (MonoObject*)ppmk;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIMoniker", 0, NULL, "Inverse", __mscorlib_System_Runtime_InteropServices_UCOMIMoniker, 1, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIMoniker::CommonPrefixWith(mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkOther, mscorlib::System::Runtime::InteropServices::UCOMIMoniker ppmkPrefix)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(pmkOther).name());
						__parameter_types__[1] = Global::GetType(typeid(ppmkPrefix).name());
						__parameters__[0] = (MonoObject*)pmkOther;
						__parameters__[1] = (MonoObject*)ppmkPrefix;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIMoniker", 0, NULL, "CommonPrefixWith", __mscorlib_System_Runtime_InteropServices_UCOMIMoniker, 2, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIMoniker::RelativePathTo(mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkOther, mscorlib::System::Runtime::InteropServices::UCOMIMoniker ppmkRelPath)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(pmkOther).name());
						__parameter_types__[1] = Global::GetType(typeid(ppmkRelPath).name());
						__parameters__[0] = (MonoObject*)pmkOther;
						__parameters__[1] = (MonoObject*)ppmkRelPath;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIMoniker", 0, NULL, "RelativePathTo", __mscorlib_System_Runtime_InteropServices_UCOMIMoniker, 2, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIMoniker::GetDisplayName(mscorlib::System::Runtime::InteropServices::UCOMIBindCtx pbc, mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkToLeft, mscorlib::System::String ppszDisplayName)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(pbc).name());
						__parameter_types__[1] = Global::GetType(typeid(pmkToLeft).name());
						__parameter_types__[2] = Global::GetType(typeid(ppszDisplayName).name());
						__parameters__[0] = (MonoObject*)pbc;
						__parameters__[1] = (MonoObject*)pmkToLeft;
						__parameters__[2] = (MonoObject*)ppszDisplayName;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIMoniker", 0, NULL, "GetDisplayName", __mscorlib_System_Runtime_InteropServices_UCOMIMoniker, 3, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIMoniker::ParseDisplayName(mscorlib::System::Runtime::InteropServices::UCOMIBindCtx pbc, mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkToLeft, mscorlib::System::String pszDisplayName, mscorlib::System::Int32 pchEaten, mscorlib::System::Runtime::InteropServices::UCOMIMoniker ppmkOut)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(pbc).name());
						__parameter_types__[1] = Global::GetType(typeid(pmkToLeft).name());
						__parameter_types__[2] = Global::GetType(typeid(pszDisplayName).name());
						__parameter_types__[3] = Global::GetType(typeid(pchEaten).name());
						__parameter_types__[4] = Global::GetType(typeid(ppmkOut).name());
						__parameters__[0] = (MonoObject*)pbc;
						__parameters__[1] = (MonoObject*)pmkToLeft;
						__parameters__[2] = (MonoObject*)pszDisplayName;
						__parameters__[3] = &pchEaten;
						__parameters__[4] = (MonoObject*)ppmkOut;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIMoniker", 0, NULL, "ParseDisplayName", __mscorlib_System_Runtime_InteropServices_UCOMIMoniker, 5, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIMoniker::IsSystemMoniker(mscorlib::System::Int32 pdwMksys)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(pdwMksys).name());
						__parameters__[0] = &pdwMksys;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIMoniker", 0, NULL, "IsSystemMoniker", __mscorlib_System_Runtime_InteropServices_UCOMIMoniker, 1, __parameter_types__, __parameters__, NULL);
				}


			}
		}
	}
}
