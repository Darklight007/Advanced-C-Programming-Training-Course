#include <iostream>
#include <vector>

using namespace std;


template <typename T> 
class Stack
{
private:
    T datastore[100];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(T num)
    {
        ++top;
        datastore[top] = num;
    }

    T pop()
    {
        T val = datastore[top];
        --top;
        return val;
    }
    T peek()
    {
        return datastore[top];
    }
};

int main()
{

Stack <string>numbers;
numbers.push("A1");
numbers.push("A22");
numbers.push("A333");
numbers.push("A4444");
cout << numbers.peek() << endl;


cout << numbers.pop() << endl;

cout << numbers.peek() << endl;
    return 0;
}