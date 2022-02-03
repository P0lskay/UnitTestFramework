#include <exception>
#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>

using namespace std;



template <typename Key, typename Value>
ostream& operator << (ostream& os, const map<Key, Value>& mp)
{
	for (auto& item : mp)
	{
		os << item.first << ": {" << item.second << "}";
	}
	return os;	
}

template <typename T, typename U>
void AssertEqual(const T& t, const U& u, const string& hint)
{
    if (t != u)
    {
        ostringstream os;
        os << "Assertion failed: " << t << " != " << u;
        << "Hint: " << hint;
        throw runtime_error(os.str());
    }
}

void Assert (bool b, const string& hint)
{
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

