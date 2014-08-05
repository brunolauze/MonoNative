#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_ComMemberType.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_UCOMITypeInfo.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_UCOMITypeLib.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_ITypeLib.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class Byte;
		class Guid;
		class Exception;
		class Array;
		class Delegate;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class MemberInfo;
			class Module;
			class Assembly;
			class MethodInfo;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			class Thread;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			class SecureString;
			

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

				class Marshal
					: public mscorlib::System::Object
				{
				public:
					Marshal(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					Marshal(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~Marshal()
					{
					};
				

					Marshal & operator=(Marshal &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					static mscorlib::System::Int32  AddRef(mscorlib::System::IntPtr pUnk);
					static mscorlib::System::IntPtr  AllocCoTaskMem(mscorlib::System::Int32 cb);
					static mscorlib::System::IntPtr  AllocHGlobal(mscorlib::System::IntPtr cb);
					static mscorlib::System::IntPtr  AllocHGlobal(mscorlib::System::Int32 cb);
					static mscorlib::System::Object  BindToMoniker(mscorlib::System::String monikerName);
					static mscorlib::System::Object  BindToMoniker(const char *monikerName);
					static void  ChangeWrapperHandleStrength(mscorlib::System::Object otp, mscorlib::System::Boolean fIsWeak);
					static void  Copy(std::vector<mscorlib::System::Byte*> source, mscorlib::System::Int32 startIndex, mscorlib::System::IntPtr destination, mscorlib::System::Int32 length);
					static void  Copy(std::vector<mscorlib::System::Char*> source, mscorlib::System::Int32 startIndex, mscorlib::System::IntPtr destination, mscorlib::System::Int32 length);
					static void  Copy(std::vector<mscorlib::System::Int16*> source, mscorlib::System::Int32 startIndex, mscorlib::System::IntPtr destination, mscorlib::System::Int32 length);
					static void  Copy(std::vector<mscorlib::System::Int32*> source, mscorlib::System::Int32 startIndex, mscorlib::System::IntPtr destination, mscorlib::System::Int32 length);
					static void  Copy(std::vector<mscorlib::System::Int64*> source, mscorlib::System::Int32 startIndex, mscorlib::System::IntPtr destination, mscorlib::System::Int32 length);
					static void  Copy(std::vector<mscorlib::System::Single*> source, mscorlib::System::Int32 startIndex, mscorlib::System::IntPtr destination, mscorlib::System::Int32 length);
					static void  Copy(std::vector<mscorlib::System::Double*> source, mscorlib::System::Int32 startIndex, mscorlib::System::IntPtr destination, mscorlib::System::Int32 length);
					static void  Copy(std::vector<mscorlib::System::IntPtr*> source, mscorlib::System::Int32 startIndex, mscorlib::System::IntPtr destination, mscorlib::System::Int32 length);
					static void  Copy(mscorlib::System::IntPtr source, std::vector<mscorlib::System::Byte*> destination, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 length);
					static void  Copy(mscorlib::System::IntPtr source, std::vector<mscorlib::System::Char*> destination, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 length);
					static void  Copy(mscorlib::System::IntPtr source, std::vector<mscorlib::System::Int16*> destination, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 length);
					static void  Copy(mscorlib::System::IntPtr source, std::vector<mscorlib::System::Int32*> destination, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 length);
					static void  Copy(mscorlib::System::IntPtr source, std::vector<mscorlib::System::Int64*> destination, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 length);
					static void  Copy(mscorlib::System::IntPtr source, std::vector<mscorlib::System::Single*> destination, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 length);
					static void  Copy(mscorlib::System::IntPtr source, std::vector<mscorlib::System::Double*> destination, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 length);
					static void  Copy(mscorlib::System::IntPtr source, std::vector<mscorlib::System::IntPtr*> destination, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 length);
					static mscorlib::System::IntPtr  CreateAggregatedObject(mscorlib::System::IntPtr pOuter, mscorlib::System::Object o);
					template<typename T>
					static mscorlib::System::IntPtr  CreateAggregatedObject(mscorlib::System::IntPtr pOuter, T o)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(pOuter).name());
						__parameter_types__[1] = Global::GetType(typeid(o).name());
						__parameters__[0] = (MonoObject*)pOuter;
						__parameters__[1] = (MonoObject*)o;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "CreateAggregatedObject", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
					};
					
					static mscorlib::System::Object  CreateWrapperOfType(mscorlib::System::Object o, mscorlib::System::Type t);
					template<typename T, typename TWrapper>
					static TWrapper  CreateWrapperOfType(T o)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(o).name());
						__parameters__[0] = (MonoObject*)o;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "CreateWrapperOfType", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return TWrapper(__result__);
					};
					
					static void  DestroyStructure(mscorlib::System::IntPtr ptr, mscorlib::System::Type structuretype);
					template<typename T>
					static void  DestroyStructure(mscorlib::System::IntPtr ptr)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameters__[0] = (MonoObject*)ptr;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "DestroyStructure", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					};
					
					static void  FreeBSTR(mscorlib::System::IntPtr ptr);
					static void  FreeCoTaskMem(mscorlib::System::IntPtr ptr);
					static void  FreeHGlobal(mscorlib::System::IntPtr hglobal);
					static void  ZeroFreeBSTR(mscorlib::System::IntPtr s);
					static void  ZeroFreeCoTaskMemAnsi(mscorlib::System::IntPtr s);
					static void  ZeroFreeCoTaskMemUnicode(mscorlib::System::IntPtr s);
					static void  ZeroFreeGlobalAllocAnsi(mscorlib::System::IntPtr s);
					static void  ZeroFreeGlobalAllocUnicode(mscorlib::System::IntPtr s);
					static mscorlib::System::Guid  GenerateGuidForType(mscorlib::System::Type type);
					static mscorlib::System::String  GenerateProgIdForType(mscorlib::System::Type type);
					static mscorlib::System::Object  GetActiveObject(mscorlib::System::String progID);
					static mscorlib::System::Object  GetActiveObject(const char *progID);
					static mscorlib::System::IntPtr  GetComInterfaceForObject(mscorlib::System::Object o, mscorlib::System::Type T);
					template<typename T, typename TInterface>
					static mscorlib::System::IntPtr  GetComInterfaceForObject(T o)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(o).name());
						__parameters__[0] = (MonoObject*)o;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetComInterfaceForObject", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
					};
					
					static mscorlib::System::IntPtr  GetComInterfaceForObjectInContext(mscorlib::System::Object o, mscorlib::System::Type t);
					static mscorlib::System::Object  GetComObjectData(mscorlib::System::Object obj, mscorlib::System::Object key);
					static mscorlib::System::Int32  GetComSlotForMethodInfo(mscorlib::System::Reflection::MemberInfo m);
					static mscorlib::System::Int32  GetEndComSlot(mscorlib::System::Type t);
					static mscorlib::System::Int32  GetExceptionCode();
					static mscorlib::System::IntPtr  GetExceptionPointers();
					static mscorlib::System::IntPtr  GetHINSTANCE(mscorlib::System::Reflection::Module m);
					static mscorlib::System::Int32  GetHRForException(mscorlib::System::Exception e);
					static mscorlib::System::Int32  GetHRForLastWin32Error();
					static mscorlib::System::IntPtr  GetIDispatchForObject(mscorlib::System::Object o);
					static mscorlib::System::IntPtr  GetIDispatchForObjectInContext(mscorlib::System::Object o);
					static mscorlib::System::IntPtr  GetITypeInfoForType(mscorlib::System::Type t);
					static mscorlib::System::IntPtr  GetIUnknownForObject(mscorlib::System::Object o);
					static mscorlib::System::IntPtr  GetIUnknownForObjectInContext(mscorlib::System::Object o);
					static mscorlib::System::IntPtr  GetManagedThunkForUnmanagedMethodPtr(mscorlib::System::IntPtr pfnMethodToWrap, mscorlib::System::IntPtr pbSignature, mscorlib::System::Int32 cbSignature);
					static mscorlib::System::Reflection::MemberInfo  GetMethodInfoForComSlot(mscorlib::System::Type t, mscorlib::System::Int32 slot, mscorlib::System::Runtime::InteropServices::ComMemberType::__ENUM__ memberType);
					static void  GetNativeVariantForObject(mscorlib::System::Object obj, mscorlib::System::IntPtr pDstNativeVariant);
					template<typename T>
					static void  GetNativeVariantForObject(T obj, mscorlib::System::IntPtr pDstNativeVariant)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameter_types__[1] = Global::GetType(typeid(pDstNativeVariant).name());
						__parameters__[0] = (MonoObject*)obj;
						__parameters__[1] = (MonoObject*)pDstNativeVariant;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetNativeVariantForObject", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					};
					
					static mscorlib::System::Object  GetObjectForIUnknown(mscorlib::System::IntPtr pUnk);
					static mscorlib::System::Object  GetObjectForNativeVariant(mscorlib::System::IntPtr pSrcNativeVariant);
					template<typename T>
					static T  GetObjectForNativeVariant(mscorlib::System::IntPtr pSrcNativeVariant)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(pSrcNativeVariant).name());
						__parameters__[0] = (MonoObject*)pSrcNativeVariant;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetObjectForNativeVariant", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return T(__result__);
					};
					
					static std::vector<mscorlib::System::Object*>  GetObjectsForNativeVariants(mscorlib::System::IntPtr aSrcNativeVariant, mscorlib::System::Int32 cVars);
					template<typename T>
					static std::vector<T*>  GetObjectsForNativeVariants(mscorlib::System::IntPtr aSrcNativeVariant, mscorlib::System::Int32 cVars)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(aSrcNativeVariant).name());
						__parameter_types__[1] = Global::GetType(typeid(cVars).name());
						__parameters__[0] = (MonoObject*)aSrcNativeVariant;
						__parameters__[1] = &cVars;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetObjectsForNativeVariants", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<T*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new T (__array_item__));
						}
						return __array_result__;
					};
					
					static mscorlib::System::Int32  GetStartComSlot(mscorlib::System::Type t);
					static mscorlib::System::Threading::Thread  GetThreadFromFiberCookie(mscorlib::System::Int32 cookie);
					static mscorlib::System::Object  GetTypedObjectForIUnknown(mscorlib::System::IntPtr pUnk, mscorlib::System::Type t);
					static mscorlib::System::Type  GetTypeForITypeInfo(mscorlib::System::IntPtr piTypeInfo);
					static mscorlib::System::Type  GetTypeFromCLSID(mscorlib::System::Guid clsid);
					static mscorlib::System::String  GetTypeInfoName(mscorlib::System::Runtime::InteropServices::UCOMITypeInfo pTI);
					static mscorlib::System::String  GetTypeInfoName(mscorlib::System::Runtime::InteropServices::ComTypes::ITypeInfo typeInfo);
					static mscorlib::System::Guid  GetTypeLibGuid(mscorlib::System::Runtime::InteropServices::UCOMITypeLib pTLB);
					static mscorlib::System::Guid  GetTypeLibGuid(mscorlib::System::Runtime::InteropServices::ComTypes::ITypeLib typelib);
					static mscorlib::System::Guid  GetTypeLibGuidForAssembly(mscorlib::System::Reflection::Assembly assembly);
					static mscorlib::System::Int32  GetTypeLibLcid(mscorlib::System::Runtime::InteropServices::UCOMITypeLib pTLB);
					static mscorlib::System::Int32  GetTypeLibLcid(mscorlib::System::Runtime::InteropServices::ComTypes::ITypeLib typelib);
					static mscorlib::System::String  GetTypeLibName(mscorlib::System::Runtime::InteropServices::UCOMITypeLib pTLB);
					static mscorlib::System::String  GetTypeLibName(mscorlib::System::Runtime::InteropServices::ComTypes::ITypeLib typelib);
					static void  GetTypeLibVersionForAssembly(mscorlib::System::Reflection::Assembly inputAssembly, mscorlib::System::Int32 majorVersion, mscorlib::System::Int32 minorVersion);
					static mscorlib::System::Object  GetUniqueObjectForIUnknown(mscorlib::System::IntPtr unknown);
					static mscorlib::System::IntPtr  GetUnmanagedThunkForManagedMethodPtr(mscorlib::System::IntPtr pfnMethodToWrap, mscorlib::System::IntPtr pbSignature, mscorlib::System::Int32 cbSignature);
					static mscorlib::System::Boolean  IsComObject(mscorlib::System::Object o);
					static mscorlib::System::Boolean  IsTypeVisibleFromCom(mscorlib::System::Type t);
					static mscorlib::System::Int32  NumParamBytes(mscorlib::System::Reflection::MethodInfo m);
					static mscorlib::System::Int32  GetLastWin32Error();
					static mscorlib::System::IntPtr  OffsetOf(mscorlib::System::Type t, mscorlib::System::String fieldName);
					static mscorlib::System::IntPtr  OffsetOf(mscorlib::System::Type t, const char *fieldName);
					template<typename T>
					static mscorlib::System::IntPtr  OffsetOf(mscorlib::System::String fieldName)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(fieldName).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), fieldName);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "OffsetOf", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
					};
					
					template<typename T>
					static mscorlib::System::IntPtr  OffsetOf(const char *fieldName)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(fieldName).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), fieldName);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "OffsetOf", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
					};
					
					static void  Prelink(mscorlib::System::Reflection::MethodInfo m);
					static void  PrelinkAll(mscorlib::System::Type c);
					static mscorlib::System::String  PtrToStringAnsi(mscorlib::System::IntPtr ptr);
					static mscorlib::System::String  PtrToStringAnsi(mscorlib::System::IntPtr ptr, mscorlib::System::Int32 len);
					static mscorlib::System::String  PtrToStringAuto(mscorlib::System::IntPtr ptr);
					static mscorlib::System::String  PtrToStringAuto(mscorlib::System::IntPtr ptr, mscorlib::System::Int32 len);
					static mscorlib::System::String  PtrToStringUni(mscorlib::System::IntPtr ptr);
					static mscorlib::System::String  PtrToStringUni(mscorlib::System::IntPtr ptr, mscorlib::System::Int32 len);
					static mscorlib::System::String  PtrToStringBSTR(mscorlib::System::IntPtr ptr);
					static void  PtrToStructure(mscorlib::System::IntPtr ptr, mscorlib::System::Object structure);
					static mscorlib::System::Object  PtrToStructure(mscorlib::System::IntPtr ptr, mscorlib::System::Type structureType);
					template<typename T>
					static void  PtrToStructure(mscorlib::System::IntPtr ptr, T structure)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameter_types__[1] = Global::GetType(typeid(structure).name());
						__parameters__[0] = (MonoObject*)ptr;
						__parameters__[1] = (MonoObject*)structure;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "PtrToStructure", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					};
					
					template<typename T>
					static T  PtrToStructure(mscorlib::System::IntPtr ptr)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameters__[0] = (MonoObject*)ptr;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "PtrToStructure", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return T(__result__);
					};
					
					static mscorlib::System::Int32  QueryInterface(mscorlib::System::IntPtr pUnk, mscorlib::System::Guid iid, mscorlib::System::IntPtr ppv);
					static mscorlib::System::Byte  ReadByte(mscorlib::System::IntPtr ptr);
					static mscorlib::System::Byte  ReadByte(mscorlib::System::IntPtr ptr, mscorlib::System::Int32 ofs);
					static mscorlib::System::Byte  ReadByte(mscorlib::System::Object ptr, mscorlib::System::Int32 ofs);
					static mscorlib::System::Int16  ReadInt16(mscorlib::System::IntPtr ptr);
					static mscorlib::System::Int16  ReadInt16(mscorlib::System::IntPtr ptr, mscorlib::System::Int32 ofs);
					static mscorlib::System::Int16  ReadInt16(mscorlib::System::Object ptr, mscorlib::System::Int32 ofs);
					static mscorlib::System::Int32  ReadInt32(mscorlib::System::IntPtr ptr);
					static mscorlib::System::Int32  ReadInt32(mscorlib::System::IntPtr ptr, mscorlib::System::Int32 ofs);
					static mscorlib::System::Int32  ReadInt32(mscorlib::System::Object ptr, mscorlib::System::Int32 ofs);
					static mscorlib::System::Int64  ReadInt64(mscorlib::System::IntPtr ptr);
					static mscorlib::System::Int64  ReadInt64(mscorlib::System::IntPtr ptr, mscorlib::System::Int32 ofs);
					static mscorlib::System::Int64  ReadInt64(mscorlib::System::Object ptr, mscorlib::System::Int32 ofs);
					static mscorlib::System::IntPtr  ReadIntPtr(mscorlib::System::IntPtr ptr);
					static mscorlib::System::IntPtr  ReadIntPtr(mscorlib::System::IntPtr ptr, mscorlib::System::Int32 ofs);
					static mscorlib::System::IntPtr  ReadIntPtr(mscorlib::System::Object ptr, mscorlib::System::Int32 ofs);
					static mscorlib::System::IntPtr  ReAllocCoTaskMem(mscorlib::System::IntPtr pv, mscorlib::System::Int32 cb);
					static mscorlib::System::IntPtr  ReAllocHGlobal(mscorlib::System::IntPtr pv, mscorlib::System::IntPtr cb);
					static mscorlib::System::Int32  Release(mscorlib::System::IntPtr pUnk);
					static mscorlib::System::Int32  ReleaseComObject(mscorlib::System::Object o);
					static void  ReleaseThreadCache();
					static mscorlib::System::Boolean  SetComObjectData(mscorlib::System::Object obj, mscorlib::System::Object key, mscorlib::System::Object data);
					static mscorlib::System::Int32  SizeOf(mscorlib::System::Object structure);
					static mscorlib::System::Int32  SizeOf(mscorlib::System::Type t);
					template<typename T>
					static mscorlib::System::Int32  SizeOf()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "SizeOf", NullMonoObject, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					};
					
					template<typename T>
					static mscorlib::System::Int32  SizeOf(T structure)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(structure).name());
						__parameters__[0] = (MonoObject*)structure;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "SizeOf", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					};
					
					static mscorlib::System::IntPtr  StringToBSTR(mscorlib::System::String s);
					static mscorlib::System::IntPtr  StringToBSTR(const char *s);
					static mscorlib::System::IntPtr  StringToCoTaskMemAnsi(mscorlib::System::String s);
					static mscorlib::System::IntPtr  StringToCoTaskMemAnsi(const char *s);
					static mscorlib::System::IntPtr  StringToCoTaskMemAuto(mscorlib::System::String s);
					static mscorlib::System::IntPtr  StringToCoTaskMemAuto(const char *s);
					static mscorlib::System::IntPtr  StringToCoTaskMemUni(mscorlib::System::String s);
					static mscorlib::System::IntPtr  StringToCoTaskMemUni(const char *s);
					static mscorlib::System::IntPtr  StringToHGlobalAnsi(mscorlib::System::String s);
					static mscorlib::System::IntPtr  StringToHGlobalAnsi(const char *s);
					static mscorlib::System::IntPtr  StringToHGlobalAuto(mscorlib::System::String s);
					static mscorlib::System::IntPtr  StringToHGlobalAuto(const char *s);
					static mscorlib::System::IntPtr  StringToHGlobalUni(mscorlib::System::String s);
					static mscorlib::System::IntPtr  StringToHGlobalUni(const char *s);
					static mscorlib::System::IntPtr  SecureStringToBSTR(mscorlib::System::Security::SecureString s);
					static mscorlib::System::IntPtr  SecureStringToCoTaskMemAnsi(mscorlib::System::Security::SecureString s);
					static mscorlib::System::IntPtr  SecureStringToCoTaskMemUnicode(mscorlib::System::Security::SecureString s);
					static mscorlib::System::IntPtr  SecureStringToGlobalAllocAnsi(mscorlib::System::Security::SecureString s);
					static mscorlib::System::IntPtr  SecureStringToGlobalAllocUnicode(mscorlib::System::Security::SecureString s);
					static void  StructureToPtr(mscorlib::System::Object structure, mscorlib::System::IntPtr ptr, mscorlib::System::Boolean fDeleteOld);
					template<typename T>
					static void  StructureToPtr(T structure, mscorlib::System::IntPtr ptr, mscorlib::System::Boolean fDeleteOld)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(structure).name());
						__parameter_types__[1] = Global::GetType(typeid(ptr).name());
						__parameter_types__[2] = Global::GetType(typeid(fDeleteOld).name());
						__parameters__[0] = (MonoObject*)structure;
						__parameters__[1] = (MonoObject*)ptr;
						__parameters__[2] = reinterpret_cast<void*>(fDeleteOld);
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "StructureToPtr", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					};
					
					static void  ThrowExceptionForHR(mscorlib::System::Int32 errorCode);
					static void  ThrowExceptionForHR(mscorlib::System::Int32 errorCode, mscorlib::System::IntPtr errorInfo);
					static mscorlib::System::IntPtr  UnsafeAddrOfPinnedArrayElement(mscorlib::System::Array arr, mscorlib::System::Int32 index);
					template<typename T>
					static mscorlib::System::IntPtr  UnsafeAddrOfPinnedArrayElement(std::vector<T*> arr, mscorlib::System::Int32 index)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(arr).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(index).name());
						__parameters__[0] = Global::FromArray<T*>(arr, typeid(T).name());
						__parameters__[1] = &index;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "UnsafeAddrOfPinnedArrayElement", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
					};
					
					static void  WriteByte(mscorlib::System::IntPtr ptr, mscorlib::System::Byte val);
					static void  WriteByte(mscorlib::System::IntPtr ptr, mscorlib::System::Int32 ofs, mscorlib::System::Byte val);
					static void  WriteByte(mscorlib::System::Object ptr, mscorlib::System::Int32 ofs, mscorlib::System::Byte val);
					static void  WriteInt16(mscorlib::System::IntPtr ptr, mscorlib::System::Int16 val);
					static void  WriteInt16(mscorlib::System::IntPtr ptr, mscorlib::System::Int32 ofs, mscorlib::System::Int16 val);
					static void  WriteInt16(mscorlib::System::Object ptr, mscorlib::System::Int32 ofs, mscorlib::System::Int16 val);
					static void  WriteInt16(mscorlib::System::IntPtr ptr, mscorlib::System::Char val);
					static void  WriteInt16(mscorlib::System::IntPtr ptr, mscorlib::System::Int32 ofs, mscorlib::System::Char val);
					static void  WriteInt16(mscorlib::System::Object ptr, mscorlib::System::Int32 ofs, mscorlib::System::Char val);
					static void  WriteInt32(mscorlib::System::IntPtr ptr, mscorlib::System::Int32 val);
					static void  WriteInt32(mscorlib::System::IntPtr ptr, mscorlib::System::Int32 ofs, mscorlib::System::Int32 val);
					static void  WriteInt32(mscorlib::System::Object ptr, mscorlib::System::Int32 ofs, mscorlib::System::Int32 val);
					static void  WriteInt64(mscorlib::System::IntPtr ptr, mscorlib::System::Int64 val);
					static void  WriteInt64(mscorlib::System::IntPtr ptr, mscorlib::System::Int32 ofs, mscorlib::System::Int64 val);
					static void  WriteInt64(mscorlib::System::Object ptr, mscorlib::System::Int32 ofs, mscorlib::System::Int64 val);
					static void  WriteIntPtr(mscorlib::System::IntPtr ptr, mscorlib::System::IntPtr val);
					static void  WriteIntPtr(mscorlib::System::IntPtr ptr, mscorlib::System::Int32 ofs, mscorlib::System::IntPtr val);
					static void  WriteIntPtr(mscorlib::System::Object ptr, mscorlib::System::Int32 ofs, mscorlib::System::IntPtr val);
					static mscorlib::System::Exception  GetExceptionForHR(mscorlib::System::Int32 errorCode);
					static mscorlib::System::Exception  GetExceptionForHR(mscorlib::System::Int32 errorCode, mscorlib::System::IntPtr errorInfo);
					static mscorlib::System::Int32  FinalReleaseComObject(mscorlib::System::Object o);
					static mscorlib::System::Delegate  GetDelegateForFunctionPointer(mscorlib::System::IntPtr ptr, mscorlib::System::Type t);
					template<typename TDelegate>
					static TDelegate  GetDelegateForFunctionPointer(mscorlib::System::IntPtr ptr)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(ptr).name());
						__parameters__[0] = (MonoObject*)ptr;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetDelegateForFunctionPointer", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return TDelegate(__result__);
					};
					
					static mscorlib::System::IntPtr  GetFunctionPointerForDelegate(mscorlib::System::Delegate d);
					template<typename TDelegate>
					static mscorlib::System::IntPtr  GetFunctionPointerForDelegate(TDelegate d)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(d).name());
						__parameters__[0] = (MonoObject*)d;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "Marshal", 0, NULL, "GetFunctionPointerForDelegate", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
					};
					
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Static Fields
					static Property<mscorlib::System::Int32 , mscorlib::System::Runtime::InteropServices::Marshal> SystemMaxDBCSCharSize;
					static Property<mscorlib::System::Int32 , mscorlib::System::Runtime::InteropServices::Marshal> SystemDefaultCharSize;

					//	Get/Set:SystemMaxDBCSCharSize
					static mscorlib::System::Int32  get_SystemMaxDBCSCharSize();
					static void set_SystemMaxDBCSCharSize(mscorlib::System::Int32  value);

					//	Get/Set:SystemDefaultCharSize
					static mscorlib::System::Int32  get_SystemDefaultCharSize();
					static void set_SystemDefaultCharSize(mscorlib::System::Int32  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
