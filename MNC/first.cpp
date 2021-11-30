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
    Complex add(Complex casual_typist, Complex C2)
    {
        Complex sum;
        sum.real = casual_typist.real + C2.real;
        sum.imaginary = casual_typist.imaginary + C2.imaginary;
        return sum;
    }
    Complex subtractComp(Complex casual_typist, Complex C2)
    {
        Complex difference;
        difference.real = casual_typist.real - C2.real;
        difference.imaginary = casual_typist.imaginary - C2.imaginary;
        return difference;
    }
    void display(){
        cout<<"The number is "<<real<<" + "<<imaginary<<"i "<<endl;
    }
};

int main()
{

    Complex casual_typist(3, 2);

    casual_typist.display();
    Complex C2(9, 5);

    C2.display();

    Complex C3;
    cout<<"Adding both : ";
    C3.add(casual_typist,C2);
    C3.display();
    Complex C4;
    cout<<"Subtracting both : ";
    C4.add(casual_typist,C2);
    C4.display();

}