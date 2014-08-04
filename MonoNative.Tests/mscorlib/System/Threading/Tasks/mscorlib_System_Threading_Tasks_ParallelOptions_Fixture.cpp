// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Threading.Tasks
// Name: ParallelOptions
// C++ Typed Name: mscorlib::System::Threading::Tasks::ParallelOptions


#include <gtest/gtest.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_ParallelOptions.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_CancellationToken.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_TaskScheduler.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{
			namespace Tasks
			{

				//Constructors Tests
				
				//ParallelOptions()
				TEST(mscorlib_System_Threading_Tasks_ParallelOptions_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Threading::Tasks::ParallelOptions *value = new mscorlib::System::Threading::Tasks::ParallelOptions();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				//Public Properties Tests
				
				// Property CancellationToken
				//		Return Type: mscorlib::System::Threading::CancellationToken
				//			Property Get Method
				TEST(mscorlib_System_Threading_Tasks_ParallelOptions_Fixture,get_CancellationToken_Test)
				{
					
					
				}

				// Property CancellationToken
				//		Return Type: mscorlib::System::Threading::CancellationToken
				//			Property Set Method
				TEST(mscorlib_System_Threading_Tasks_ParallelOptions_Fixture,set_CancellationToken_Test)
				{
					
					
				}

				// Property MaxDegreeOfParallelism
				//		Return Type: mscorlib::System::Int32
				//			Property Get Method
				TEST(mscorlib_System_Threading_Tasks_ParallelOptions_Fixture,get_MaxDegreeOfParallelism_Test)
				{
					
					
				}

				// Property MaxDegreeOfParallelism
				//		Return Type: mscorlib::System::Int32
				//			Property Set Method
				TEST(mscorlib_System_Threading_Tasks_ParallelOptions_Fixture,set_MaxDegreeOfParallelism_Test)
				{
					
					
				}

				// Property TaskScheduler
				//		Return Type: mscorlib::System::Threading::Tasks::TaskScheduler
				//			Property Get Method
				TEST(mscorlib_System_Threading_Tasks_ParallelOptions_Fixture,get_TaskScheduler_Test)
				{
					
					
				}

				// Property TaskScheduler
				//		Return Type: mscorlib::System::Threading::Tasks::TaskScheduler
				//			Property Set Method
				TEST(mscorlib_System_Threading_Tasks_ParallelOptions_Fixture,set_TaskScheduler_Test)
				{
					
					
				}


			}
		}
	}
}
