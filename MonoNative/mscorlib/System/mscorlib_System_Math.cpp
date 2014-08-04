#include <mscorlib/System/mscorlib_System_Math.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Decimal.h>
#include <mscorlib/System/mscorlib_System_SByte.h>
#include <mscorlib/System/mscorlib_System_Byte.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		mscorlib::System::Decimal Math::Abs(mscorlib::System::Decimal value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Abs", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Double Math::Abs(mscorlib::System::Double value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Abs", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Single Math::Abs(mscorlib::System::Single value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Abs", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Single*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Math::Abs(mscorlib::System::Int32 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Abs", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int64 Math::Abs(mscorlib::System::Int64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Abs", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		mscorlib::System::SByte Math::Abs(mscorlib::System::SByte value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Abs", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::SByte(__result__);
		}

		mscorlib::System::Int16 Math::Abs(mscorlib::System::Int16 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Abs", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int16*)mono_object_unbox(__result__);
		}

		mscorlib::System::Decimal Math::Ceiling(mscorlib::System::Decimal d)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(d).name());
				__parameters__[0] = (MonoObject*)d;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Ceiling", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Double Math::Ceiling(mscorlib::System::Double a)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(a).name());
				__parameters__[0] = &a;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Ceiling", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int64 Math::BigMul(mscorlib::System::Int32 a, mscorlib::System::Int32 b)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(a).name());
				__parameter_types__[1] = Global::GetType(typeid(b).name());
				__parameters__[0] = &a;
				__parameters__[1] = &b;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "BigMul", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Math::DivRem(mscorlib::System::Int32 a, mscorlib::System::Int32 b, mscorlib::System::Int32 result)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(a).name());
				__parameter_types__[1] = Global::GetType(typeid(b).name());
				__parameter_types__[2] = Global::GetType(typeid(result).name());
				__parameters__[0] = &a;
				__parameters__[1] = &b;
				__parameters__[2] = &result;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "DivRem", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int64 Math::DivRem(mscorlib::System::Int64 a, mscorlib::System::Int64 b, mscorlib::System::Int64 result)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(a).name());
				__parameter_types__[1] = Global::GetType(typeid(b).name());
				__parameter_types__[2] = Global::GetType(typeid(result).name());
				__parameters__[0] = &a;
				__parameters__[1] = &b;
				__parameters__[2] = &result;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "DivRem", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Math::Floor(mscorlib::System::Double d)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(d).name());
				__parameters__[0] = &d;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Floor", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Math::IEEERemainder(mscorlib::System::Double x, mscorlib::System::Double y)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(x).name());
				__parameter_types__[1] = Global::GetType(typeid(y).name());
				__parameters__[0] = &x;
				__parameters__[1] = &y;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "IEEERemainder", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Math::Log(mscorlib::System::Double a, mscorlib::System::Double newBase)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(a).name());
				__parameter_types__[1] = Global::GetType(typeid(newBase).name());
				__parameters__[0] = &a;
				__parameters__[1] = &newBase;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Log", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Byte Math::Max(mscorlib::System::Byte val1, mscorlib::System::Byte val2)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(val1).name());
				__parameter_types__[1] = Global::GetType(typeid(val2).name());
				__parameters__[0] = (MonoObject*)val1;
				__parameters__[1] = (MonoObject*)val2;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Max", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Byte(__result__);
		}

		mscorlib::System::Decimal Math::Max(mscorlib::System::Decimal val1, mscorlib::System::Decimal val2)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(val1).name());
				__parameter_types__[1] = Global::GetType(typeid(val2).name());
				__parameters__[0] = (MonoObject*)val1;
				__parameters__[1] = (MonoObject*)val2;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Max", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Double Math::Max(mscorlib::System::Double val1, mscorlib::System::Double val2)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(val1).name());
				__parameter_types__[1] = Global::GetType(typeid(val2).name());
				__parameters__[0] = &val1;
				__parameters__[1] = &val2;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Max", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Single Math::Max(mscorlib::System::Single val1, mscorlib::System::Single val2)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(val1).name());
				__parameter_types__[1] = Global::GetType(typeid(val2).name());
				__parameters__[0] = &val1;
				__parameters__[1] = &val2;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Max", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Single*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Math::Max(mscorlib::System::Int32 val1, mscorlib::System::Int32 val2)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(val1).name());
				__parameter_types__[1] = Global::GetType(typeid(val2).name());
				__parameters__[0] = &val1;
				__parameters__[1] = &val2;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Max", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int64 Math::Max(mscorlib::System::Int64 val1, mscorlib::System::Int64 val2)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(val1).name());
				__parameter_types__[1] = Global::GetType(typeid(val2).name());
				__parameters__[0] = &val1;
				__parameters__[1] = &val2;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Max", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		mscorlib::System::SByte Math::Max(mscorlib::System::SByte val1, mscorlib::System::SByte val2)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(val1).name());
				__parameter_types__[1] = Global::GetType(typeid(val2).name());
				__parameters__[0] = (MonoObject*)val1;
				__parameters__[1] = (MonoObject*)val2;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Max", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::SByte(__result__);
		}

		mscorlib::System::Int16 Math::Max(mscorlib::System::Int16 val1, mscorlib::System::Int16 val2)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(val1).name());
				__parameter_types__[1] = Global::GetType(typeid(val2).name());
				__parameters__[0] = &val1;
				__parameters__[1] = &val2;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Max", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int16*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt32 Math::Max(mscorlib::System::UInt32 val1, mscorlib::System::UInt32 val2)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(val1).name());
				__parameter_types__[1] = Global::GetType(typeid(val2).name());
				__parameters__[0] = &val1;
				__parameters__[1] = &val2;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Max", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt32*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt64 Math::Max(mscorlib::System::UInt64 val1, mscorlib::System::UInt64 val2)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(val1).name());
				__parameter_types__[1] = Global::GetType(typeid(val2).name());
				__parameters__[0] = &val1;
				__parameters__[1] = &val2;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Max", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt64*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt16 Math::Max(mscorlib::System::UInt16 val1, mscorlib::System::UInt16 val2)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(val1).name());
				__parameter_types__[1] = Global::GetType(typeid(val2).name());
				__parameters__[0] = &val1;
				__parameters__[1] = &val2;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Max", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt16*)mono_object_unbox(__result__);
		}

		mscorlib::System::Byte Math::Min(mscorlib::System::Byte val1, mscorlib::System::Byte val2)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(val1).name());
				__parameter_types__[1] = Global::GetType(typeid(val2).name());
				__parameters__[0] = (MonoObject*)val1;
				__parameters__[1] = (MonoObject*)val2;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Min", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Byte(__result__);
		}

		mscorlib::System::Decimal Math::Min(mscorlib::System::Decimal val1, mscorlib::System::Decimal val2)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(val1).name());
				__parameter_types__[1] = Global::GetType(typeid(val2).name());
				__parameters__[0] = (MonoObject*)val1;
				__parameters__[1] = (MonoObject*)val2;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Min", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Double Math::Min(mscorlib::System::Double val1, mscorlib::System::Double val2)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(val1).name());
				__parameter_types__[1] = Global::GetType(typeid(val2).name());
				__parameters__[0] = &val1;
				__parameters__[1] = &val2;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Min", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Single Math::Min(mscorlib::System::Single val1, mscorlib::System::Single val2)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(val1).name());
				__parameter_types__[1] = Global::GetType(typeid(val2).name());
				__parameters__[0] = &val1;
				__parameters__[1] = &val2;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Min", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Single*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Math::Min(mscorlib::System::Int32 val1, mscorlib::System::Int32 val2)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(val1).name());
				__parameter_types__[1] = Global::GetType(typeid(val2).name());
				__parameters__[0] = &val1;
				__parameters__[1] = &val2;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Min", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int64 Math::Min(mscorlib::System::Int64 val1, mscorlib::System::Int64 val2)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(val1).name());
				__parameter_types__[1] = Global::GetType(typeid(val2).name());
				__parameters__[0] = &val1;
				__parameters__[1] = &val2;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Min", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		mscorlib::System::SByte Math::Min(mscorlib::System::SByte val1, mscorlib::System::SByte val2)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(val1).name());
				__parameter_types__[1] = Global::GetType(typeid(val2).name());
				__parameters__[0] = (MonoObject*)val1;
				__parameters__[1] = (MonoObject*)val2;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Min", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::SByte(__result__);
		}

		mscorlib::System::Int16 Math::Min(mscorlib::System::Int16 val1, mscorlib::System::Int16 val2)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(val1).name());
				__parameter_types__[1] = Global::GetType(typeid(val2).name());
				__parameters__[0] = &val1;
				__parameters__[1] = &val2;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Min", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int16*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt32 Math::Min(mscorlib::System::UInt32 val1, mscorlib::System::UInt32 val2)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(val1).name());
				__parameter_types__[1] = Global::GetType(typeid(val2).name());
				__parameters__[0] = &val1;
				__parameters__[1] = &val2;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Min", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt32*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt64 Math::Min(mscorlib::System::UInt64 val1, mscorlib::System::UInt64 val2)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(val1).name());
				__parameter_types__[1] = Global::GetType(typeid(val2).name());
				__parameters__[0] = &val1;
				__parameters__[1] = &val2;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Min", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt64*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt16 Math::Min(mscorlib::System::UInt16 val1, mscorlib::System::UInt16 val2)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(val1).name());
				__parameter_types__[1] = Global::GetType(typeid(val2).name());
				__parameters__[0] = &val1;
				__parameters__[1] = &val2;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Min", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt16*)mono_object_unbox(__result__);
		}

		mscorlib::System::Decimal Math::Round(mscorlib::System::Decimal d)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(d).name());
				__parameters__[0] = (MonoObject*)d;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Round", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Math::Round(mscorlib::System::Decimal d, mscorlib::System::Int32 decimals)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(d).name());
				__parameter_types__[1] = Global::GetType(typeid(decimals).name());
				__parameters__[0] = (MonoObject*)d;
				__parameters__[1] = &decimals;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Round", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Math::Round(mscorlib::System::Decimal d, mscorlib::System::MidpointRounding::__ENUM__ mode)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(d).name());
				__parameter_types__[1] = Global::GetType(typeid(mode).name());
				__parameters__[0] = (MonoObject*)d;
				__parameters__[1] = reinterpret_cast<void*>(mode);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Round", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Math::Round(mscorlib::System::Decimal d, mscorlib::System::Int32 decimals, mscorlib::System::MidpointRounding::__ENUM__ mode)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(d).name());
				__parameter_types__[1] = Global::GetType(typeid(decimals).name());
				__parameter_types__[2] = Global::GetType(typeid(mode).name());
				__parameters__[0] = (MonoObject*)d;
				__parameters__[1] = &decimals;
				__parameters__[2] = reinterpret_cast<void*>(mode);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Round", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Double Math::Round(mscorlib::System::Double a)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(a).name());
				__parameters__[0] = &a;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Round", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Math::Round(mscorlib::System::Double value, mscorlib::System::Int32 digits)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(digits).name());
				__parameters__[0] = &value;
				__parameters__[1] = &digits;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Round", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Math::Round(mscorlib::System::Double value, mscorlib::System::MidpointRounding::__ENUM__ mode)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(mode).name());
				__parameters__[0] = &value;
				__parameters__[1] = reinterpret_cast<void*>(mode);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Round", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Math::Round(mscorlib::System::Double value, mscorlib::System::Int32 digits, mscorlib::System::MidpointRounding::__ENUM__ mode)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(digits).name());
				__parameter_types__[2] = Global::GetType(typeid(mode).name());
				__parameters__[0] = &value;
				__parameters__[1] = &digits;
				__parameters__[2] = reinterpret_cast<void*>(mode);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Round", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Math::Truncate(mscorlib::System::Double d)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(d).name());
				__parameters__[0] = &d;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Truncate", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Decimal Math::Truncate(mscorlib::System::Decimal d)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(d).name());
				__parameters__[0] = (MonoObject*)d;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Truncate", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Math::Floor(mscorlib::System::Decimal d)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(d).name());
				__parameters__[0] = (MonoObject*)d;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Floor", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Int32 Math::Sign(mscorlib::System::Decimal value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Sign", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Math::Sign(mscorlib::System::Double value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Sign", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Math::Sign(mscorlib::System::Single value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Sign", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Math::Sign(mscorlib::System::Int32 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Sign", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Math::Sign(mscorlib::System::Int64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Sign", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Math::Sign(mscorlib::System::SByte value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Sign", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Math::Sign(mscorlib::System::Int16 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Sign", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Math::Sin(mscorlib::System::Double a)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(a).name());
				__parameters__[0] = &a;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Sin", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Math::Cos(mscorlib::System::Double d)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(d).name());
				__parameters__[0] = &d;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Cos", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Math::Tan(mscorlib::System::Double a)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(a).name());
				__parameters__[0] = &a;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Tan", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Math::Sinh(mscorlib::System::Double value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Sinh", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Math::Cosh(mscorlib::System::Double value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Cosh", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Math::Tanh(mscorlib::System::Double value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Tanh", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Math::Acos(mscorlib::System::Double d)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(d).name());
				__parameters__[0] = &d;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Acos", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Math::Asin(mscorlib::System::Double d)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(d).name());
				__parameters__[0] = &d;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Asin", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Math::Atan(mscorlib::System::Double d)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(d).name());
				__parameters__[0] = &d;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Atan", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Math::Atan2(mscorlib::System::Double y, mscorlib::System::Double x)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(y).name());
				__parameter_types__[1] = Global::GetType(typeid(x).name());
				__parameters__[0] = &y;
				__parameters__[1] = &x;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Atan2", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Math::Exp(mscorlib::System::Double d)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(d).name());
				__parameters__[0] = &d;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Exp", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Math::Log(mscorlib::System::Double d)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(d).name());
				__parameters__[0] = &d;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Log", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Math::Log10(mscorlib::System::Double d)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(d).name());
				__parameters__[0] = &d;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Log10", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Math::Pow(mscorlib::System::Double x, mscorlib::System::Double y)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(x).name());
				__parameter_types__[1] = Global::GetType(typeid(y).name());
				__parameters__[0] = &x;
				__parameters__[1] = &y;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Pow", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Math::Sqrt(mscorlib::System::Double d)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(d).name());
				__parameters__[0] = &d;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Math", 0, NULL, "Sqrt", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

			//	Get/Set:E
		mscorlib::System::Double Math::get_E()
		{
			return Global::GetFieldDoubleValue("mscorlib", "System", "Math", 0, NULL, "E");
		}

		void Math::set_E(mscorlib::System::Double  value)
		{
		}

			//	Get/Set:PI
		mscorlib::System::Double Math::get_PI()
		{
			return Global::GetFieldDoubleValue("mscorlib", "System", "Math", 0, NULL, "PI");
		}

		void Math::set_PI(mscorlib::System::Double  value)
		{
		}


	}
}
