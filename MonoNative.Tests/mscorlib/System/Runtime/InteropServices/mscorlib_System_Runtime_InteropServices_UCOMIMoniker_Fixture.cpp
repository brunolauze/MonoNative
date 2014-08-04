// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.InteropServices
// Name: UCOMIMoniker
// C++ Typed Name: mscorlib::System::Runtime::InteropServices::UCOMIMoniker


#include <gtest/gtest.h>
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

				//Public Methods Tests
				
				// Method GetClassID
				//		Signature: mscorlib::System::Guid pClassID
				TEST(mscorlib_System_Runtime_InteropServices_UCOMIMoniker_Fixture,GetClassID_Test)
				{
					
					
				}

				// Method IsDirty
				//		Signature: 
				TEST(mscorlib_System_Runtime_InteropServices_UCOMIMoniker_Fixture,IsDirty_Test)
				{
					
					
				}

				// Method Load
				//		Signature: mscorlib::System::Runtime::InteropServices::UCOMIStream pStm
				TEST(mscorlib_System_Runtime_InteropServices_UCOMIMoniker_Fixture,Load_Test)
				{
					
					
				}

				// Method Save
				//		Signature: mscorlib::System::Runtime::InteropServices::UCOMIStream pStm, mscorlib::System::Boolean fClearDirty
				TEST(mscorlib_System_Runtime_InteropServices_UCOMIMoniker_Fixture,Save_Test)
				{
					
					
				}

				// Method GetSizeMax
				//		Signature: mscorlib::System::Int64 pcbSize
				TEST(mscorlib_System_Runtime_InteropServices_UCOMIMoniker_Fixture,GetSizeMax_Test)
				{
					
					
				}

				// Method BindToObject
				//		Signature: mscorlib::System::Runtime::InteropServices::UCOMIBindCtx pbc, mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkToLeft, mscorlib::System::Guid riidResult, mscorlib::System::Object ppvResult
				TEST(mscorlib_System_Runtime_InteropServices_UCOMIMoniker_Fixture,BindToObject_Test)
				{
					
					
				}

				// Method BindToStorage
				//		Signature: mscorlib::System::Runtime::InteropServices::UCOMIBindCtx pbc, mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkToLeft, mscorlib::System::Guid riid, mscorlib::System::Object ppvObj
				TEST(mscorlib_System_Runtime_InteropServices_UCOMIMoniker_Fixture,BindToStorage_Test)
				{
					
					
				}

				// Method Reduce
				//		Signature: mscorlib::System::Runtime::InteropServices::UCOMIBindCtx pbc, mscorlib::System::Int32 dwReduceHowFar, mscorlib::System::Runtime::InteropServices::UCOMIMoniker ppmkToLeft, mscorlib::System::Runtime::InteropServices::UCOMIMoniker ppmkReduced
				TEST(mscorlib_System_Runtime_InteropServices_UCOMIMoniker_Fixture,Reduce_Test)
				{
					
					
				}

				// Method ComposeWith
				//		Signature: mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkRight, mscorlib::System::Boolean fOnlyIfNotGeneric, mscorlib::System::Runtime::InteropServices::UCOMIMoniker ppmkComposite
				TEST(mscorlib_System_Runtime_InteropServices_UCOMIMoniker_Fixture,ComposeWith_Test)
				{
					
					
				}

				// Method Enum
				//		Signature: mscorlib::System::Boolean fForward, mscorlib::System::Runtime::InteropServices::UCOMIEnumMoniker ppenumMoniker
				TEST(mscorlib_System_Runtime_InteropServices_UCOMIMoniker_Fixture,Enum_Test)
				{
					
					
				}

				// Method IsEqual
				//		Signature: mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkOtherMoniker
				TEST(mscorlib_System_Runtime_InteropServices_UCOMIMoniker_Fixture,IsEqual_Test)
				{
					
					
				}

				// Method Hash
				//		Signature: mscorlib::System::Int32 pdwHash
				TEST(mscorlib_System_Runtime_InteropServices_UCOMIMoniker_Fixture,Hash_Test)
				{
					
					
				}

				// Method IsRunning
				//		Signature: mscorlib::System::Runtime::InteropServices::UCOMIBindCtx pbc, mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkToLeft, mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkNewlyRunning
				TEST(mscorlib_System_Runtime_InteropServices_UCOMIMoniker_Fixture,IsRunning_Test)
				{
					
					
				}

				// Method GetTimeOfLastChange
				//		Signature: mscorlib::System::Runtime::InteropServices::UCOMIBindCtx pbc, mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkToLeft, mscorlib::System::Runtime::InteropServices::FILETIME pFileTime
				TEST(mscorlib_System_Runtime_InteropServices_UCOMIMoniker_Fixture,GetTimeOfLastChange_Test)
				{
					
					
				}

				// Method Inverse
				//		Signature: mscorlib::System::Runtime::InteropServices::UCOMIMoniker ppmk
				TEST(mscorlib_System_Runtime_InteropServices_UCOMIMoniker_Fixture,Inverse_Test)
				{
					
					
				}

				// Method CommonPrefixWith
				//		Signature: mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkOther, mscorlib::System::Runtime::InteropServices::UCOMIMoniker ppmkPrefix
				TEST(mscorlib_System_Runtime_InteropServices_UCOMIMoniker_Fixture,CommonPrefixWith_Test)
				{
					
					
				}

				// Method RelativePathTo
				//		Signature: mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkOther, mscorlib::System::Runtime::InteropServices::UCOMIMoniker ppmkRelPath
				TEST(mscorlib_System_Runtime_InteropServices_UCOMIMoniker_Fixture,RelativePathTo_Test)
				{
					
					
				}

				// Method GetDisplayName
				//		Signature: mscorlib::System::Runtime::InteropServices::UCOMIBindCtx pbc, mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkToLeft, mscorlib::System::String ppszDisplayName
				TEST(mscorlib_System_Runtime_InteropServices_UCOMIMoniker_Fixture,GetDisplayName_Test)
				{
					
					
				}

				// Method ParseDisplayName
				//		Signature: mscorlib::System::Runtime::InteropServices::UCOMIBindCtx pbc, mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkToLeft, mscorlib::System::String pszDisplayName, mscorlib::System::Int32 pchEaten, mscorlib::System::Runtime::InteropServices::UCOMIMoniker ppmkOut
				TEST(mscorlib_System_Runtime_InteropServices_UCOMIMoniker_Fixture,ParseDisplayName_Test)
				{
					
					
				}

				// Method IsSystemMoniker
				//		Signature: mscorlib::System::Int32 pdwMksys
				TEST(mscorlib_System_Runtime_InteropServices_UCOMIMoniker_Fixture,IsSystemMoniker_Test)
				{
					
					
				}


			}
		}
	}
}
