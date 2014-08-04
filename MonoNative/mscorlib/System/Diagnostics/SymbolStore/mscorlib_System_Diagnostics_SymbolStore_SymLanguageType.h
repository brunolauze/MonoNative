#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_SYMBOLSTORE_SYMLANGUAGETYPE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_SYMBOLSTORE_SYMLANGUAGETYPE_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		class Guid;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{
			namespace SymbolStore
			{

				class SymLanguageType
					: public mscorlib::System::Object
				{
				public:
					SymLanguageType()
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Diagnostics.SymbolStore.SymLanguageType"))
					{
						__native_object__ = Global::New("mscorlib", "System.Diagnostics.SymbolStore", "SymLanguageType");
					};
				
					SymLanguageType(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					SymLanguageType(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~SymLanguageType()
					{
					};
				

					SymLanguageType & operator=(SymLanguageType &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Static Fields
					static Property<mscorlib::System::Guid> Basic;
					static Property<mscorlib::System::Guid> C;
					static Property<mscorlib::System::Guid> Cobol;
					static Property<mscorlib::System::Guid> CPlusPlus;
					static Property<mscorlib::System::Guid> CSharp;
					static Property<mscorlib::System::Guid> ILAssembly;
					static Property<mscorlib::System::Guid> Java;
					static Property<mscorlib::System::Guid> JScript;
					static Property<mscorlib::System::Guid> MCPlusPlus;
					static Property<mscorlib::System::Guid> Pascal;
					static Property<mscorlib::System::Guid> SMC;

					//	Get/Set:Basic
					static mscorlib::System::Guid  get_Basic();

					//	Get/Set:C
					static mscorlib::System::Guid  get_C();

					//	Get/Set:Cobol
					static mscorlib::System::Guid  get_Cobol();

					//	Get/Set:CPlusPlus
					static mscorlib::System::Guid  get_CPlusPlus();

					//	Get/Set:CSharp
					static mscorlib::System::Guid  get_CSharp();

					//	Get/Set:ILAssembly
					static mscorlib::System::Guid  get_ILAssembly();

					//	Get/Set:Java
					static mscorlib::System::Guid  get_Java();

					//	Get/Set:JScript
					static mscorlib::System::Guid  get_JScript();

					//	Get/Set:MCPlusPlus
					static mscorlib::System::Guid  get_MCPlusPlus();

					//	Get/Set:Pascal
					static mscorlib::System::Guid  get_Pascal();

					//	Get/Set:SMC
					static mscorlib::System::Guid  get_SMC();

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
