#include "FixtureBase.h"


class List_1Fixture 
	: public FixtureBase
{
public:
	virtual void Run() override;

private:
	void CreateList();
};