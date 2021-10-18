#include <iostream>
using namespace std;


class Area
{
public:
    void area(int x, int y);

    void area(int z);
};


void Area::area(int x, int y)
{
    float area = x * y;
    cout << "Area of rectangle with length : " << x << " and breath : " << y <<" is : "<<area<<endl;
}
void Area::area(int z)
{
    float area = z * z;
    cout << "Area of square with side : " << z << " is : "<<area<<endl;
}
int main()
{
    int a,b,c;
    cout<<"Enter the length : ";
    cin>>a;
    cout<<"Enter the breath : ";
    cin>>b;
    cout<<"Enter the side of square : ";
    cin>>c;
    Area Ar;
    Ar.area(a, b);
    Ar.area(c);
}