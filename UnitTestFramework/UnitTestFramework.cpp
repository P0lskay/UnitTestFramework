#include "UnitTestFrameWork.h"
using namespace std;


void Assert(bool b, const string& hint) {
    AssertEqual(b, true, hint);
}

class TestRunner {
public:
    ~TestRunner()
    {
        if (fail_counter > 0)
        {
            cerr << fail_counter << " tests failed!" << endl;
            exit(1);
        }
    }

    template <typename TestFunc>
    void RunTest(TestFunc func, const string& name_test)
    {
        try
        {
            func();
            cerr << name_test << " OK!" << endl;
        }
        catch (runtime_error& e)
        {
            fail_counter++;
            cerr << name_test << " is fail: " << e.what() << endl;
        }
    }
private:
    int fail_counter = 0;
};

int main()
{
    cout << "Hello World!\n";
}

