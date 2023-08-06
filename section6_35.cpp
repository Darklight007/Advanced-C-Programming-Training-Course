#include <iostream>
#include <list>

using namespace std;


int main(){


list<string> names;


names.push_back("Marry");
names.push_back("Marmar");
names.push_back("Marina");

list<string>::iterator iter = names.begin();

while(iter != names.end()){
    cout << *iter <<endl;

    iter++;
}
names.reverse();
for (auto it : names){
    cout << it <<endl;


}

cout << "Front: "<< names.front() <<endl;
cout << "Back: "<< names.back() <<endl;

names.sort();
for (auto it : names){
    cout << it <<endl;


}


    return 0;
}