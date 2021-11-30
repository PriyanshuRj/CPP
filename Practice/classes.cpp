#include<iostream>
#include<string>
using namespace std;



class Complex{
    private : 
        double real,imaginary;
    public:
        Complex();
        Complex(double real, double imaginary);
        Complex(Complex &c);
        void display();
        friend class Calculator;

};

Complex::Complex(){
    real = 0; imaginary = 0;
}
Complex :: Complex(double real, double imaginary){
    this->real = real;
    this->imaginary = imaginary;
}

Complex :: Complex(Complex &c){
    real = c.real;
    imaginary = c.imaginary;
}
void Complex :: display(){
    cout<<endl<<"The number is :"<<real<<" + "<<imaginary<<"i"<<endl<<endl;
}

class Calculator{
public:
    Calculator(){
        cout << "Calculator created" << endl;
    }
    ~Calculator(){
        cout << "Calculator destroyed" << endl;
    }
    Complex add(Complex a, Complex b);
    Complex subtract(Complex a,Complex b);
    Complex multiply(Complex a,Complex b);
    Complex inverse(Complex a);
};

Complex Calculator::add(Complex a, Complex b){
    Complex temp;
    temp.real = a.real + b.real;
    temp.imaginary = a.imaginary + b.imaginary;
    return temp;
}
Complex Calculator :: subtract(Complex a, Complex b){
    Complex temp;
    temp.real = a.real-b.real;
    temp.imaginary = a.imaginary-b.imaginary;
    return temp;
}

Complex Calculator::multiply(Complex a, Complex b){
    Complex temp;
    temp.real = a.real*a.real - b.imaginary*b.imaginary;
    temp.imaginary = a.imaginary*b.real + a.real*b.imaginary;
    return temp;
}

Complex Calculator:: inverse(Complex a){
    Complex temp;
    temp.real = a.real;
    temp.imaginary = -a.imaginary;
    return temp;
}

int main(){
    bool ans = true;
    while(ans){
        
        cout<<"Thanks for choosing out program ::::::::::  "<<endl;
        double real1=0,real2=0,imaginary2=0,imaginary1=0;
        cout<<endl<<"For first number : "<<endl;
        cout<<"Enter the real part : ";
        cin>>real1;
        cout<<"Enter the imaginary part :";
        cin>>imaginary1;
        cout<<"For secoond number : "<<endl;
        cout<<"Enter the real part : ";
        cin>>real2;
        cout<<"Enter the imaginary part :";
        cin>>imaginary2;
        Complex a(real1,imaginary1);
        Complex b(real2,imaginary2);
        Calculator calc;
        cout<<endl<<endl<<"1 for addition\n2 for subtraction\n3 for multiplication\n4 for inverse of first number\n5 for inverse of 2nd number\nelse for exit"<<endl;
        int choice=0;
        cout<<"Enter your choice :";
        cin>>choice;
        if(choice==1){
            Complex x;
            x = calc.add(a,b);
            cout<<"The result is >>>>>>>"<<endl;
            x.display();
        }
        else if(choice==2){
            Complex x;
            x = calc.subtract(a,b);
            cout<<"The result is >>>>>>>"<<endl;
            x.display();

        }
        else if(choice==3){
            Complex x;
            x = calc.multiply(a,b);
            cout<<"The result is >>>>>>>"<<endl;
            x.display();

        }
        else if(choice==4){
            Complex x;
            x = calc.inverse(a);
            cout<<"The result is >>>>>>>"<<endl;
            x.display();
        }
        else if(choice==5){
            Complex x;
            x = calc.inverse(b);
            cout<<"The result is >>>>>>>"<<endl;
            x.display();
        }
        else{
            ans = false;
        }
        

    }
}