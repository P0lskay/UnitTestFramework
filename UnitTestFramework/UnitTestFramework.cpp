#include <exception>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

template <typename V>
ostream& operator << (ostream& os, const set<V>& st)
{
	bool isfirst = truel
	for (auto& item : st)
	{
		if (!isfirst)
			os << ", ";
		
		isfirst = false;
		os << item;
	}
	return os;	
}

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

int main()
{
    std::cout << "Hello World!\n";
}

