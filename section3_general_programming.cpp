#include <iostream>

#include <vector>

using namespace std;

template <typename T>
void display(T arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

template <typename T>
T max(T &arg1, T &arg2)
{

    if (arg1 > arg2)
        return arg1;
    else
        return arg2;
}
int main()
{
    const int size = 10;

    int numbers[size];

    for (int i = 0; i < size; i++)
    {
        numbers[i] = i + 1;
    }
    display(numbers, 10);

    string names[] = {"Jim", "James", "Jimmy", "John", "Bob", "Mary",
                      "Mike", "Dave", "Terri", "Allison"};

    display(names, 10);


cout << max(3,5) <<endl;
cout << max(3.1,3.2) <<endl;

string w1 ="abcd";
string w2= "aaaaaaaaaa";
cout << max(w1,w2) <<endl;
    return 0;
}
