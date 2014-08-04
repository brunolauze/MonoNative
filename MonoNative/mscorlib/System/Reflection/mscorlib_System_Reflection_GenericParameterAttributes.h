#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_GENERICPARAMETERATTRIBUTES_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_GENERICPARAMETERATTRIBUTES_H
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class GenericParameterAttributes
			{
			public:
				enum __ENUM__
				{
					None = 0,
					Covariant = 1,
					Contravariant = 2,
					VarianceMask = 3,
					ReferenceTypeConstraint = 4,
					NotNullableValueTypeConstraint = 8,
					DefaultConstructorConstraint = 16,
					SpecialConstraintMask = 28,
				};
			};

		}
	}
}
#endif
