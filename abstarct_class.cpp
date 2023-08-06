#include <iostream>

using namespace std;

class Shape
{
    virtual void setX(int xcore) = 0;
    virtual void setY(int ycore) = 0;
    virtual int getX() = 0;
    virtual int getY() = 0;
    virtual void draw() = 0;
};

class Circle : public Shape
{

private:
    int x, y, radius;

public:
    Circle(int xcore, int ycore, int r)
    {
        x = xcore;
        y = ycore;
        radius = r;
    }

    virtual void setX(int xcore)
    {
        x = xcore;
    }
    virtual void setY(int ycore)
    {
        y = ycore;
    }

    void setRadius(int r)
    {
        radius = r;
    }

    int getX()
    {
        return x;
    }

    int getY()
    {
        return y;
    }
    virtual int getRadius()
    {
        return radius;
    }

    virtual void draw()
    {
        cout << "Draw circle at: " << getX() << ", " << getY() << " with Radius: "
             << getRadius() << endl;
    }
};

int main()
{

    Circle c(2, 3, 5);

    c.draw();

    return 0;
}