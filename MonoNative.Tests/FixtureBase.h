
#ifndef __MONONATIVE_TEST_FIXTURE_BASE
#define __MONONATIVE_TEST_FIXTURE_BASE
#include <unistd.h>
#include <iostream>
#include "Color.h"

class FixtureBase {
public:

	class ColorModifier {
        	Color code;
    public:
        ColorModifier(Color pCode) : code(pCode) {}
        friend std::ostream&
        operator<<(std::ostream& os, const ColorModifier& mod) {
            return os << "\033[" << mod.code << "m";
        }
    };
	virtual void Run()=0;
	virtual void Output(const char *message)
	{
		std::cout << message << std::endl;
	}
	virtual void Fail(const char *message)
	{
		ColorModifier red(Color::FG_RED);
		ColorModifier def(Color::FG_DEFAULT);
		std::cout << red << message <<  def << std::endl;
	}

};

#endif
