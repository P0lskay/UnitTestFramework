#include <exception>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

template <typename T, typename U>
void AssertEqual(const T& t, const U& u)
{
    if (t != u)
    {
        ostringstream os;
        os << "Assertion failed: " << t << " != " << u;
        throw runtime_error(os.str());
    }
}

int main()
{
    std::cout << "Hello World!\n";
}

