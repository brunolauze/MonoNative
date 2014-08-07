// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Diagnostics.SymbolStore
// Name: ISymbolWriter
// C++ Typed Name: mscorlib::System::Diagnostics::SymbolStore::ISymbolWriter


#include <gtest/gtest.h>
#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter.h>
#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_ISymbolDocumentWriter.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_SymbolToken.h>
#include <mscorlib/System/mscorlib_System_Byte.h>



namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{
			namespace SymbolStore
			{

				//Public Methods Tests
				
				// Method Close
				//		Signature: 
				TEST(mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter_Fixture,Close_Test)
				{
					
					
				}

				// Method CloseMethod
				//		Signature: 
				TEST(mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter_Fixture,CloseMethod_Test)
				{
					
					
				}

				// Method CloseNamespace
				//		Signature: 
				TEST(mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter_Fixture,CloseNamespace_Test)
				{
					
					
				}

				// Method CloseScope
				//		Signature: mscorlib::System::Int32 endOffset
				TEST(mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter_Fixture,CloseScope_Test)
				{
					
					
				}

				// Method DefineDocument
				//		Signature: mscorlib::System::String url, mscorlib::System::Guid language, mscorlib::System::Guid languageVendor, mscorlib::System::Guid documentType
				TEST(mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter_Fixture,DefineDocument_Test)
				{
					
					
				}

				// Method DefineField
				//		Signature: mscorlib::System::Diagnostics::SymbolStore::SymbolToken parent, mscorlib::System::String name, mscorlib::System::Reflection::FieldAttributes::__ENUM__ attributes, std::vector<mscorlib::System::Byte*> signature, mscorlib::System::Diagnostics::SymbolStore::SymAddressKind::__ENUM__ addrKind, mscorlib::System::Int32 addr1, mscorlib::System::Int32 addr2, mscorlib::System::Int32 addr3
				TEST(mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter_Fixture,DefineField_Test)
				{
					
					
				}

				// Method DefineGlobalVariable
				//		Signature: mscorlib::System::String name, mscorlib::System::Reflection::FieldAttributes::__ENUM__ attributes, std::vector<mscorlib::System::Byte*> signature, mscorlib::System::Diagnostics::SymbolStore::SymAddressKind::__ENUM__ addrKind, mscorlib::System::Int32 addr1, mscorlib::System::Int32 addr2, mscorlib::System::Int32 addr3
				TEST(mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter_Fixture,DefineGlobalVariable_Test)
				{
					
					
				}

				// Method DefineLocalVariable
				//		Signature: mscorlib::System::String name, mscorlib::System::Reflection::FieldAttributes::__ENUM__ attributes, std::vector<mscorlib::System::Byte*> signature, mscorlib::System::Diagnostics::SymbolStore::SymAddressKind::__ENUM__ addrKind, mscorlib::System::Int32 addr1, mscorlib::System::Int32 addr2, mscorlib::System::Int32 addr3, mscorlib::System::Int32 startOffset, mscorlib::System::Int32 endOffset
				TEST(mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter_Fixture,DefineLocalVariable_Test)
				{
					
					
				}

				// Method DefineParameter
				//		Signature: mscorlib::System::String name, mscorlib::System::Reflection::ParameterAttributes::__ENUM__ attributes, mscorlib::System::Int32 sequence, mscorlib::System::Diagnostics::SymbolStore::SymAddressKind::__ENUM__ addrKind, mscorlib::System::Int32 addr1, mscorlib::System::Int32 addr2, mscorlib::System::Int32 addr3
				TEST(mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter_Fixture,DefineParameter_Test)
				{
					
					
				}

				// Method DefineSequencePoints
				//		Signature: mscorlib::System::Diagnostics::SymbolStore::ISymbolDocumentWriter document, std::vector<mscorlib::System::Int32*> offsets, std::vector<mscorlib::System::Int32*> lines, std::vector<mscorlib::System::Int32*> columns, std::vector<mscorlib::System::Int32*> endLines, std::vector<mscorlib::System::Int32*> endColumns
				TEST(mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter_Fixture,DefineSequencePoints_Test)
				{
					
					
				}

				// Method Initialize
				//		Signature: mscorlib::System::IntPtr emitter, mscorlib::System::String filename, mscorlib::System::Boolean fFullBuild
				TEST(mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter_Fixture,Initialize_Test)
				{
					
					
				}

				// Method OpenMethod
				//		Signature: mscorlib::System::Diagnostics::SymbolStore::SymbolToken method
				TEST(mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter_Fixture,OpenMethod_Test)
				{
					
					
				}

				// Method OpenNamespace
				//		Signature: mscorlib::System::String name
				TEST(mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter_Fixture,OpenNamespace_Test)
				{
					
					
				}

				// Method OpenScope
				//		Signature: mscorlib::System::Int32 startOffset
				TEST(mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter_Fixture,OpenScope_Test)
				{
					
					
				}

				// Method SetMethodSourceRange
				//		Signature: mscorlib::System::Diagnostics::SymbolStore::ISymbolDocumentWriter startDoc, mscorlib::System::Int32 startLine, mscorlib::System::Int32 startColumn, mscorlib::System::Diagnostics::SymbolStore::ISymbolDocumentWriter endDoc, mscorlib::System::Int32 endLine, mscorlib::System::Int32 endColumn
				TEST(mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter_Fixture,SetMethodSourceRange_Test)
				{
					
					
				}

				// Method SetScopeRange
				//		Signature: mscorlib::System::Int32 scopeID, mscorlib::System::Int32 startOffset, mscorlib::System::Int32 endOffset
				TEST(mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter_Fixture,SetScopeRange_Test)
				{
					
					
				}

				// Method SetSymAttribute
				//		Signature: mscorlib::System::Diagnostics::SymbolStore::SymbolToken parent, mscorlib::System::String name, std::vector<mscorlib::System::Byte*> data
				TEST(mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter_Fixture,SetSymAttribute_Test)
				{
					
					
				}

				// Method SetUnderlyingWriter
				//		Signature: mscorlib::System::IntPtr underlyingWriter
				TEST(mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter_Fixture,SetUnderlyingWriter_Test)
				{
					
					
				}

				// Method SetUserEntryPoint
				//		Signature: mscorlib::System::Diagnostics::SymbolStore::SymbolToken entryMethod
				TEST(mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter_Fixture,SetUserEntryPoint_Test)
				{
					
					
				}

				// Method UsingNamespace
				//		Signature: mscorlib::System::String fullName
				TEST(mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter_Fixture,UsingNamespace_Test)
				{
					
					
				}


			}
		}
	}
}
