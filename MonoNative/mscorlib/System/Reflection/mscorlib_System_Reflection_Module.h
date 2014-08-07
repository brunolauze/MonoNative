#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_MODULE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_MODULE_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ICustomAttributeProvider.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Module.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_BindingFlags.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_CallingConventions.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IList_1.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_PortableExecutableKinds.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ImageFileMachine.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>

namespace mscorlib
{
	namespace System
	{

		class ModuleHandle;
		class String;
		class Type;
		class Guid;
		class Byte;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class FieldInfo;
			class MethodInfo;
			class Binder;
			class ParameterModifier;
			class MemberInfo;
			class MethodBase;
			class Assembly;
			class CustomAttributeData;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				class SerializationInfo;
				class StreamingContext;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Cryptography
			{
				namespace X509Certificates
				{

					class X509Certificate;
					

				}
			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class Module
				: public mscorlib::System::Object
				, public virtual mscorlib::System::Reflection::ICustomAttributeProvider
				, public virtual mscorlib::System::Runtime::InteropServices::_Module
				, public virtual mscorlib::System::Runtime::Serialization::ISerializable
			{
			public:
				Module(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::Reflection::ICustomAttributeProvider(NULL)
				, mscorlib::System::Runtime::InteropServices::_Module(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
				};
			
				Module(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::Reflection::ICustomAttributeProvider(nativeObject)
				, mscorlib::System::Runtime::InteropServices::_Module(nativeObject)
				, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
				{
				};
			
				~Module()
				{
				};
			

				Module & operator=(Module &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(Module &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				mscorlib::System::Reflection::FieldInfo  GetField(mscorlib::System::String name);
				mscorlib::System::Reflection::FieldInfo  GetField(const char *name);
				std::vector<mscorlib::System::Reflection::FieldInfo*>  GetFields();
				mscorlib::System::Reflection::MethodInfo  GetMethod(mscorlib::System::String name);
				mscorlib::System::Reflection::MethodInfo  GetMethod(const char *name);
				mscorlib::System::Reflection::MethodInfo  GetMethod(mscorlib::System::String name, std::vector<mscorlib::System::Type*> types);
				mscorlib::System::Reflection::MethodInfo  GetMethod(const char *name, std::vector<mscorlib::System::Type*> types);
				mscorlib::System::Reflection::MethodInfo  GetMethod(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Reflection::CallingConventions::__ENUM__ callConvention, std::vector<mscorlib::System::Type*> types, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers);
				mscorlib::System::Reflection::MethodInfo  GetMethod(const char *name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Reflection::CallingConventions::__ENUM__ callConvention, std::vector<mscorlib::System::Type*> types, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers);
				std::vector<mscorlib::System::Reflection::MethodInfo*>  GetMethods();
				virtual void  GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context);
				virtual mscorlib::System::Type  GetType(mscorlib::System::String className);
				virtual mscorlib::System::Type  GetType(const char *className);
				virtual mscorlib::System::Type  GetType(mscorlib::System::String className, mscorlib::System::Boolean ignoreCase);
				virtual mscorlib::System::Type  GetType(const char *className, mscorlib::System::Boolean ignoreCase);
				virtual mscorlib::System::String  ToString() override;
				mscorlib::System::Reflection::FieldInfo  ResolveField(mscorlib::System::Int32 metadataToken);
				mscorlib::System::Reflection::MemberInfo  ResolveMember(mscorlib::System::Int32 metadataToken);
				mscorlib::System::Reflection::MethodBase  ResolveMethod(mscorlib::System::Int32 metadataToken);
				mscorlib::System::Type  ResolveType(mscorlib::System::Int32 metadataToken);
				virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object o) override;
				virtual mscorlib::System::Int32  GetHashCode() override;
				virtual mscorlib::System::Boolean  IsResource();
				virtual std::vector<mscorlib::System::Type*>  FindTypes(mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Type , mscorlib::System::Object )> filter, mscorlib::System::Object filterCriteria);
				virtual std::vector<mscorlib::System::Object*>  GetCustomAttributes(mscorlib::System::Boolean inherit);
				virtual std::vector<mscorlib::System::Object*>  GetCustomAttributes(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);
				virtual mscorlib::System::Collections::Generic::IList<mscorlib::System::Reflection::CustomAttributeData>  GetCustomAttributesData();
				virtual mscorlib::System::Reflection::FieldInfo  GetField(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr);
				virtual mscorlib::System::Reflection::FieldInfo  GetField(const char *name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr);
				virtual std::vector<mscorlib::System::Reflection::FieldInfo*>  GetFields(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingFlags);
				virtual std::vector<mscorlib::System::Reflection::MethodInfo*>  GetMethods(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingFlags);
				virtual void  GetPEKind(mscorlib::System::Reflection::PortableExecutableKinds::__ENUM__ peKind, mscorlib::System::Reflection::ImageFileMachine::__ENUM__ machine);
				virtual mscorlib::System::Type  GetType(mscorlib::System::String className, mscorlib::System::Boolean throwOnError, mscorlib::System::Boolean ignoreCase);
				virtual mscorlib::System::Type  GetType(const char *className, mscorlib::System::Boolean throwOnError, mscorlib::System::Boolean ignoreCase);
				virtual mscorlib::System::Boolean  IsDefined(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);
				virtual mscorlib::System::Reflection::FieldInfo  ResolveField(mscorlib::System::Int32 metadataToken, std::vector<mscorlib::System::Type*> genericTypeArguments, std::vector<mscorlib::System::Type*> genericMethodArguments);
				virtual mscorlib::System::Reflection::MemberInfo  ResolveMember(mscorlib::System::Int32 metadataToken, std::vector<mscorlib::System::Type*> genericTypeArguments, std::vector<mscorlib::System::Type*> genericMethodArguments);
				virtual mscorlib::System::Reflection::MethodBase  ResolveMethod(mscorlib::System::Int32 metadataToken, std::vector<mscorlib::System::Type*> genericTypeArguments, std::vector<mscorlib::System::Type*> genericMethodArguments);
				virtual std::vector<mscorlib::System::Byte*>  ResolveSignature(mscorlib::System::Int32 metadataToken);
				virtual mscorlib::System::String  ResolveString(mscorlib::System::Int32 metadataToken);
				virtual mscorlib::System::Type  ResolveType(mscorlib::System::Int32 metadataToken, std::vector<mscorlib::System::Type*> genericTypeArguments, std::vector<mscorlib::System::Type*> genericMethodArguments);
				virtual mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate  GetSignerCertificate();
				virtual std::vector<mscorlib::System::Type*>  GetTypes();
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_ModuleHandle)) mscorlib::System::ModuleHandle  ModuleHandle;
				__declspec(property(get=get_Assembly)) mscorlib::System::Reflection::Assembly  Assembly;
				__declspec(property(get=get_Name)) mscorlib::System::String  Name;
				__declspec(property(get=get_ScopeName)) mscorlib::System::String  ScopeName;
				__declspec(property(get=get_MDStreamVersion)) mscorlib::System::Int32  MDStreamVersion;
				__declspec(property(get=get_ModuleVersionId)) mscorlib::System::Guid  ModuleVersionId;
				__declspec(property(get=get_FullyQualifiedName)) mscorlib::System::String  FullyQualifiedName;
				__declspec(property(get=get_MetadataToken)) mscorlib::System::Int32  MetadataToken;
				__declspec(property(get=get_CustomAttributes)) mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>  CustomAttributes;

				//Public Static Fields
				static Property<mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Type , mscorlib::System::Object )> , mscorlib::System::Reflection::Module> FilterTypeName;
				static Property<mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Type , mscorlib::System::Object )> , mscorlib::System::Reflection::Module> FilterTypeNameIgnoreCase;

				//Get Set Properties Methods
				//	Get:ModuleHandle
				mscorlib::System::ModuleHandle  get_ModuleHandle() const;

				//	Get:Assembly
				mscorlib::System::Reflection::Assembly  get_Assembly() const;

				//	Get:Name
				mscorlib::System::String  get_Name() const;

				//	Get:ScopeName
				mscorlib::System::String  get_ScopeName() const;

				//	Get:MDStreamVersion
				mscorlib::System::Int32  get_MDStreamVersion() const;

				//	Get:ModuleVersionId
				mscorlib::System::Guid  get_ModuleVersionId() const;

				//	Get:FullyQualifiedName
				mscorlib::System::String  get_FullyQualifiedName() const;

				//	Get:MetadataToken
				mscorlib::System::Int32  get_MetadataToken() const;

				//	Get:CustomAttributes
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>  get_CustomAttributes() const;

				//	Get/Set:FilterTypeName
				static mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Type , mscorlib::System::Object )>  get_FilterTypeName();
				static void set_FilterTypeName(mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Type , mscorlib::System::Object )>  value);

				//	Get/Set:FilterTypeNameIgnoreCase
				static mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Type , mscorlib::System::Object )>  get_FilterTypeNameIgnoreCase();
				static void set_FilterTypeNameIgnoreCase(mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Type , mscorlib::System::Object )>  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
