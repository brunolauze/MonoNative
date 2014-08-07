#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IENUMCONNECTIONPOINTS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IENUMCONNECTIONPOINTS_H

#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_IConnectionPoint.h>

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

					class IEnumConnectionPoints
					{
					public:
						IEnumConnectionPoints(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_InteropServices_ComTypes_IEnumConnectionPoints = nativeObject;
						};
					
						~IEnumConnectionPoints()
						{
						};
					

						IEnumConnectionPoints & operator=(IEnumConnectionPoints &value) { __mscorlib_System_Runtime_InteropServices_ComTypes_IEnumConnectionPoints = value.__mscorlib_System_Runtime_InteropServices_ComTypes_IEnumConnectionPoints; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_ComTypes_IEnumConnectionPoints; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_ComTypes_IEnumConnectionPoints = value; return value; };


						virtual mscorlib::System::Int32  Next(mscorlib::System::Int32 celt, std::vector<mscorlib::System::Runtime::InteropServices::ComTypes::IConnectionPoint*> rgelt, mscorlib::System::IntPtr pceltFetched);
						virtual mscorlib::System::Int32  Skip(mscorlib::System::Int32 celt);
						virtual void  Reset();
						virtual void  Clone(mscorlib::System::Runtime::InteropServices::ComTypes::IEnumConnectionPoints ppenum);


					
					protected:
						MonoObject *__mscorlib_System_Runtime_InteropServices_ComTypes_IEnumConnectionPoints;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
