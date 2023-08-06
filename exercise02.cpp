#include <iostream>
#include <vector>

using namespace std;

class Quadrilateral
{
protected:
    double side1, side2, side3, side4;

    Quadrilateral(double s1, double s2, double s3, double s4)
    {
        side1 = s1;
        side2 = s2;
        side3 = s3;
        side4 = s4;
    }

public:
    virtual void dispaly()
    {

        cout << "Quadrilateral with sides: "
             << side1 << " " << side2 << " " << side3 << " " << side4 << " " << endl;
    }
};

class Trapezoid : public Quadrilateral
{

public:
    Trapezoid(double s1, double s2, double s3, double s4) : Quadrilateral(s1, s2, s3, s4)
    {
    }

        void dispaly()
    {

        cout << "Trapezoid with sides: "
             << side1 << " " << side2 << " " << side3 << " " << side4 << " " << endl;
    }
    
};

class Square : public Quadrilateral
{
public:
    Square(double s1) : Quadrilateral(s1, s1, s1, s1)
    {
    }
    void dispaly()
    {

        cout << "Square with sides: "
             << side1 << " " << side2 << " " << side3 << " " << side4 << " " << endl;
    }
};

int main()
{

    Trapezoid t1(3, 5, 5, 2);
    Square s1(6);

    t1.dispaly();
    s1.dispaly();

vector<Quadrilateral *> quads;
quads.push_back(&t1);
quads.push_back(&s1);

for (int i=0;i<quads.size();i++){

    quads[i]->dispaly();

}

    return 0;
}