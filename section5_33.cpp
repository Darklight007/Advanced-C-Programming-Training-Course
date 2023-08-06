#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;



int main () {

ifstream gradeFile;
stringstream grades;

int grade;
int total=0;
gradeFile.open("./grades.txt");
string line;
getline(gradeFile, line);
cout << "File:" << line <<endl;
grades << line;
gradeFile.close();

cout << "grades:" << grades.str() <<endl;
for (int i=0;i<5;i++){
    grades >> grade;
    total+=grade;

}

double avg=  total/5.0;

cout << "Average:" << avg <<endl;



    return 0;
}