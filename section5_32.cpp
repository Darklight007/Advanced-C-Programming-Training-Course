#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

class Person
{

private:
    string first, last, middle;
    int age;

public:
    Person(string f, string m, string l, int ag) : first(f), last(l), middle(m), age(ag){};

    string ToString()
    {
        stringstream stm;

        stm << first << " " << middle << " " << last << "  " << age;

        return stm.str();
    }
};

int main()
{

    Person p("George", "Fred", "Johns", 27);

    cout << p.ToString() << endl;

    return 0;
}
