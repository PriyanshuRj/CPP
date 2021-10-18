#include <iostream>
using namespace std;
class Rectangle
{
public:
    int length, breadth;

    Rectangle();

    Rectangle(int x, int y);

    Rectangle(int z);

    float Area();
};
Rectangle::Rectangle()

{
    length = 0;
    breadth = 0;
    cout << "no parameter" << endl;
}

Rectangle ::Rectangle(int x, int y)
{
    length = x;
    breadth = y;
    cout << "two parameter" << endl;
}
Rectangle ::Rectangle(int z)
{
    length = z;
    breadth = z;
    cout << "one parameter" << endl;
}
float Rectangle:: Area()
{
    float area = length * breadth;
    cout << area << endl;
}
int main()
{
    int a, b, c;
    Rectangle m;
    m.Area();
    cout << "Enter the sides for the rectangle >> " << endl;
    cin >> a >> b;
    Rectangle m1 = Rectangle(a, b);
    m1.Area();
    cout << "Enter the single side for the rectangle >> " << endl;

    Rectangle m2 = Rectangle(c);
    m2.Area();
}