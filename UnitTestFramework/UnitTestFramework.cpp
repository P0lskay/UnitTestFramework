#include "UnitTestFrameWork.h"
using namespace std;


void Assert (bool b, const string& hint)
{
	AssertEqual(b, true, hint);
}


TestRunner::~TestRunner()
{
    if (fail_counter > 0)
    {
        cerr << fail_counter << " tests failed!" << endl;
        exit(1);
    }
}

