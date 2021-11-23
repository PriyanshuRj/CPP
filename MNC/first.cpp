#include<iostream>
using namespace std;

class Complex {

    public:
        int real, imaginary;
    Complex(int Real = 0, int Imaginary = 0)
    {
        real = Real;
        imaginary = Imaginary;
    }
    Complex add(Complex C1, Complex C2)
    {
        Complex sum;
        sum.real = C1.real + C2.real;
        sum.imaginary = C1.imaginary + C2.imaginary;
        return sum;
    }
    Complex subtractComp(Complex C1, Complex C2)
    {
        Complex difference;
        difference.real = C1.real - C2.real;
        difference.imaginary = C1.imaginary - C2.imaginary;
        return difference;
    }
    void display(){
        cout<<"The number is "<<real<<" + "<<imaginary<<"i "<<endl;
    }
};

int main()
{

    Complex C1(3, 2);

    C1.display();
    Complex C2(9, 5);

    C2.display();

    Complex C3;
    cout<<"Adding both : ";
    C3.add(C1,C2);
    C3.display();
    Complex C4;
    cout<<"Subtracting both : ";
    C4.add(C1,C2);
    C4.display();

}