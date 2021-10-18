#include<iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breath;
    public:
        Rectangle(){
            length=0;
            breath=0;
        }
        Rectangle(int l, int b){
            length=l;
            breath=b;
        }
        Rectangle(int a){
            length=a;
            breath=a;
        }
        int area(){
            return length*breath;
        }

};

int main(){
    Rectangle r1;
    cout<<"Enter the single side for square : ";
    int a,l,b;
    cin>>a;
    Rectangle r2(a);
    cout<<"Enter the length : ";
    cin>>l;
    cout<<"Enter the breath : ";
    cin>>b;
    Rectangle r3(l,b);
    cout<<endl<<endl<<"Area of rectangle 1 is : "<<r1.area()<<endl<<"Area for rectangle 2 : "<<r2.area()<<endl<<"Area for rectangle 3 : "<<r3.area()<<endl;
}