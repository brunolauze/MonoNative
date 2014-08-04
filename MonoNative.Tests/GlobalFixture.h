
#include "FixtureBase.h"


class GlobalFixture 
	: public FixtureBase
{
public:
	virtual void Run() override;

private:
	void GetAssembly();
	void GetImage();
	void GetType();
	void NewSimpleObject();
	void GetGenericClass();
	void GetGenericClass2();
	void CreateGenericType();
	void GetStaticField();
	void GetStaticInt32Field();

	void GetNestedTypes();
};