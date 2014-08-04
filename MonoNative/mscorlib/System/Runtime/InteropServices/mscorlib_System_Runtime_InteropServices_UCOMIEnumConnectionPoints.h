#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_UCOMIENUMCONNECTIONPOINTS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_UCOMIENUMCONNECTIONPOINTS_H

#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_UCOMIConnectionPoint.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				class UCOMIEnumConnectionPoints
				{
				public:
					UCOMIEnumConnectionPoints(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_InteropServices_UCOMIEnumConnectionPoints = nativeObject;
					};
				
					~UCOMIEnumConnectionPoints()
					{
					};
				

					UCOMIEnumConnectionPoints & operator=(UCOMIEnumConnectionPoints &value) { __mscorlib_System_Runtime_InteropServices_UCOMIEnumConnectionPoints = value.__mscorlib_System_Runtime_InteropServices_UCOMIEnumConnectionPoints; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_UCOMIEnumConnectionPoints; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_UCOMIEnumConnectionPoints = value; return value; };


					virtual mscorlib::System::Int32  Next(mscorlib::System::Int32 celt, std::vector<mscorlib::System::Runtime::InteropServices::UCOMIConnectionPoint*> rgelt, mscorlib::System::Int32 pceltFetched);
					virtual mscorlib::System::Int32  Skip(mscorlib::System::Int32 celt);
					virtual mscorlib::System::Int32  Reset();
					virtual void  Clone(mscorlib::System::Runtime::InteropServices::UCOMIEnumConnectionPoints ppenum);


				
				protected:
					MonoObject *__mscorlib_System_Runtime_InteropServices_UCOMIEnumConnectionPoints;
				
				private:
				
				};

			}
		}
	}
}
#endif
