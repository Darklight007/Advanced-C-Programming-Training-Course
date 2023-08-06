#include <iostream>
#include <vector>

using namespace std;

class Animal
{

public:
    virtual void talk() = 0;
};

class Dog : public Animal
{

public:
    void talk()
    {
        cout << "Bow Wow!" << endl;
    }
};

class Cat : public Animal
{

public:
    void talk()
    {
        cout << "Meou!" << endl;
    }
};



int main()
{

vector <Animal*> an;

Dog fido;
Cat kitty;

an.push_back(&fido);
an.push_back(&kitty);

for (int i=0;i<an.size();i++){
    an[i]->talk();
}

kitty.talk();

    return 0;
}