#include <iostream>
#include <fstream>
#include <stdexcept>

using namespace std;

int main()
{

    ifstream file;

    file.exceptions(ifstream::failbit |
                    ifstream::badbit);

    try
    {
        file.open("file.txt");
        while (!file.eof())
        {
            cout << file.get();
        }
    }
    catch (ifstream::failure e)
    {

        cout << e.what() << endl;
        cout << "Errpr openning File." << endl;

        return 1;
    }

    file.close();

    return 0;
}