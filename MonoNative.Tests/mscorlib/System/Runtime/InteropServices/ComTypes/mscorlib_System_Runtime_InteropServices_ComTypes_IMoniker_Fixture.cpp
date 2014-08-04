// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.InteropServices.ComTypes
// Name: IMoniker
// C++ Typed Name: mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_IMoniker.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_IStream.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_IBindCtx.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_IEnumMoniker.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_FILETIME.h>
#include <mscorlib/System/mscorlib_System_String.h>



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

					//Public Methods Tests
					
					// Method GetClassID
					//		Signature: mscorlib::System::Guid pClassID
					TEST(mscorlib_System_Runtime_InteropServices_ComTypes_IMoniker_Fixture,GetClassID_Test)
					{
						
						
					}

					// Method IsDirty
					//		Signature: 
					TEST(mscorlib_System_Runtime_InteropServices_ComTypes_IMoniker_Fixture,IsDirty_Test)
					{
						
						
					}

					// Method Load
					//		Signature: mscorlib::System::Runtime::InteropServices::ComTypes::IStream pStm
					TEST(mscorlib_System_Runtime_InteropServices_ComTypes_IMoniker_Fixture,Load_Test)
					{
						
						
					}

					// Method Save
					//		Signature: mscorlib::System::Runtime::InteropServices::ComTypes::IStream pStm, mscorlib::System::Boolean fClearDirty
					TEST(mscorlib_System_Runtime_InteropServices_ComTypes_IMoniker_Fixture,Save_Test)
					{
						
						
					}

					// Method GetSizeMax
					//		Signature: mscorlib::System::Int64 pcbSize
					TEST(mscorlib_System_Runtime_InteropServices_ComTypes_IMoniker_Fixture,GetSizeMax_Test)
					{
						
						
					}

					// Method BindToObject
					//		Signature: mscorlib::System::Runtime::InteropServices::ComTypes::IBindCtx pbc, mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker pmkToLeft, mscorlib::System::Guid riidResult, mscorlib::System::Object ppvResult
					TEST(mscorlib_System_Runtime_InteropServices_ComTypes_IMoniker_Fixture,BindToObject_Test)
					{
						
						
					}

					// Method BindToStorage
					//		Signature: mscorlib::System::Runtime::InteropServices::ComTypes::IBindCtx pbc, mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker pmkToLeft, mscorlib::System::Guid riid, mscorlib::System::Object ppvObj
					TEST(mscorlib_System_Runtime_InteropServices_ComTypes_IMoniker_Fixture,BindToStorage_Test)
					{
						
						
					}

					// Method Reduce
					//		Signature: mscorlib::System::Runtime::InteropServices::ComTypes::IBindCtx pbc, mscorlib::System::Int32 dwReduceHowFar, mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker ppmkToLeft, mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker ppmkReduced
					TEST(mscorlib_System_Runtime_InteropServices_ComTypes_IMoniker_Fixture,Reduce_Test)
					{
						
						
					}

					// Method ComposeWith
					//		Signature: mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker pmkRight, mscorlib::System::Boolean fOnlyIfNotGeneric, mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker ppmkComposite
					TEST(mscorlib_System_Runtime_InteropServices_ComTypes_IMoniker_Fixture,ComposeWith_Test)
					{
						
						
					}

					// Method Enum
					//		Signature: mscorlib::System::Boolean fForward, mscorlib::System::Runtime::InteropServices::ComTypes::IEnumMoniker ppenumMoniker
					TEST(mscorlib_System_Runtime_InteropServices_ComTypes_IMoniker_Fixture,Enum_Test)
					{
						
						
					}

					// Method IsEqual
					//		Signature: mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker pmkOtherMoniker
					TEST(mscorlib_System_Runtime_InteropServices_ComTypes_IMoniker_Fixture,IsEqual_Test)
					{
						
						
					}

					// Method Hash
					//		Signature: mscorlib::System::Int32 pdwHash
					TEST(mscorlib_System_Runtime_InteropServices_ComTypes_IMoniker_Fixture,Hash_Test)
					{
						
						
					}

					// Method IsRunning
					//		Signature: mscorlib::System::Runtime::InteropServices::ComTypes::IBindCtx pbc, mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker pmkToLeft, mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker pmkNewlyRunning
					TEST(mscorlib_System_Runtime_InteropServices_ComTypes_IMoniker_Fixture,IsRunning_Test)
					{
						
						
					}

					// Method GetTimeOfLastChange
					//		Signature: mscorlib::System::Runtime::InteropServices::ComTypes::IBindCtx pbc, mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker pmkToLeft, mscorlib::System::Runtime::InteropServices::ComTypes::FILETIME pFileTime
					TEST(mscorlib_System_Runtime_InteropServices_ComTypes_IMoniker_Fixture,GetTimeOfLastChange_Test)
					{
						
						
					}

					// Method Inverse
					//		Signature: mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker ppmk
					TEST(mscorlib_System_Runtime_InteropServices_ComTypes_IMoniker_Fixture,Inverse_Test)
					{
						
						
					}

					// Method CommonPrefixWith
					//		Signature: mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker pmkOther, mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker ppmkPrefix
					TEST(mscorlib_System_Runtime_InteropServices_ComTypes_IMoniker_Fixture,CommonPrefixWith_Test)
					{
						
						
					}

					// Method RelativePathTo
					//		Signature: mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker pmkOther, mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker ppmkRelPath
					TEST(mscorlib_System_Runtime_InteropServices_ComTypes_IMoniker_Fixture,RelativePathTo_Test)
					{
						
						
					}

					// Method GetDisplayName
					//		Signature: mscorlib::System::Runtime::InteropServices::ComTypes::IBindCtx pbc, mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker pmkToLeft, mscorlib::System::String ppszDisplayName
					TEST(mscorlib_System_Runtime_InteropServices_ComTypes_IMoniker_Fixture,GetDisplayName_Test)
					{
						
						
					}

					// Method ParseDisplayName
					//		Signature: mscorlib::System::Runtime::InteropServices::ComTypes::IBindCtx pbc, mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker pmkToLeft, mscorlib::System::String pszDisplayName, mscorlib::System::Int32 pchEaten, mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker ppmkOut
					TEST(mscorlib_System_Runtime_InteropServices_ComTypes_IMoniker_Fixture,ParseDisplayName_Test)
					{
						
						
					}

					// Method IsSystemMoniker
					//		Signature: mscorlib::System::Int32 pdwMksys
					TEST(mscorlib_System_Runtime_InteropServices_ComTypes_IMoniker_Fixture,IsSystemMoniker_Test)
					{
						
						
					}


				}
			}
		}
	}
}
