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
					bool operator==(SymLanguageType &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Static Fields
					static Property<mscorlib::System::Guid , mscorlib::System::Diagnostics::SymbolStore::SymLanguageType> Basic;
					static Property<mscorlib::System::Guid , mscorlib::System::Diagnostics::SymbolStore::SymLanguageType> C;
					static Property<mscorlib::System::Guid , mscorlib::System::Diagnostics::SymbolStore::SymLanguageType> Cobol;
					static Property<mscorlib::System::Guid , mscorlib::System::Diagnostics::SymbolStore::SymLanguageType> CPlusPlus;
					static Property<mscorlib::System::Guid , mscorlib::System::Diagnostics::SymbolStore::SymLanguageType> CSharp;
					static Property<mscorlib::System::Guid , mscorlib::System::Diagnostics::SymbolStore::SymLanguageType> ILAssembly;
					static Property<mscorlib::System::Guid , mscorlib::System::Diagnostics::SymbolStore::SymLanguageType> Java;
					static Property<mscorlib::System::Guid , mscorlib::System::Diagnostics::SymbolStore::SymLanguageType> JScript;
					static Property<mscorlib::System::Guid , mscorlib::System::Diagnostics::SymbolStore::SymLanguageType> MCPlusPlus;
					static Property<mscorlib::System::Guid , mscorlib::System::Diagnostics::SymbolStore::SymLanguageType> Pascal;
					static Property<mscorlib::System::Guid , mscorlib::System::Diagnostics::SymbolStore::SymLanguageType> SMC;

					//	Get/Set:Basic
					static mscorlib::System::Guid  get_Basic();
					static void set_Basic(mscorlib::System::Guid  value);

					//	Get/Set:C
					static mscorlib::System::Guid  get_C();
					static void set_C(mscorlib::System::Guid  value);

					//	Get/Set:Cobol
					static mscorlib::System::Guid  get_Cobol();
					static void set_Cobol(mscorlib::System::Guid  value);

					//	Get/Set:CPlusPlus
					static mscorlib::System::Guid  get_CPlusPlus();
					static void set_CPlusPlus(mscorlib::System::Guid  value);

					//	Get/Set:CSharp
					static mscorlib::System::Guid  get_CSharp();
					static void set_CSharp(mscorlib::System::Guid  value);

					//	Get/Set:ILAssembly
					static mscorlib::System::Guid  get_ILAssembly();
					static void set_ILAssembly(mscorlib::System::Guid  value);

					//	Get/Set:Java
					static mscorlib::System::Guid  get_Java();
					static void set_Java(mscorlib::System::Guid  value);

					//	Get/Set:JScript
					static mscorlib::System::Guid  get_JScript();
					static void set_JScript(mscorlib::System::Guid  value);

					//	Get/Set:MCPlusPlus
					static mscorlib::System::Guid  get_MCPlusPlus();
					static void set_MCPlusPlus(mscorlib::System::Guid  value);

					//	Get/Set:Pascal
					static mscorlib::System::Guid  get_Pascal();
					static void set_Pascal(mscorlib::System::Guid  value);

					//	Get/Set:SMC
					static mscorlib::System::Guid  get_SMC();
					static void set_SMC(mscorlib::System::Guid  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
