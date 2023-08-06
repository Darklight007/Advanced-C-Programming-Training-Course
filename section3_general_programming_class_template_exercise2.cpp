#include <iostream>
#include <vector>

using namespace std;

template <class T>
class List
{

private:
    vector<T> data;

public:
    List(){};
    ~List(){};

    void add(T item)
    {
        data.push_back(item);
    }
    void display()
    {
        for (int i = 0; i < data.size(); i++)
        {
            cout << data[i] << endl;
        }
    }

};

int
main()
{

List <string> grocery;
grocery.add("milk");
grocery.add("eggs");
grocery.add("apple");
grocery.add("bread");

    
    grocery.display();
    return 0;
}