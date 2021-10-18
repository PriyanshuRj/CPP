#include<iostream>
using namespace std;

class Area{
    public :
        void area(int side){
            cout << "The area of square is " << side*side <<endl;
        }
        void area(int length,int breath){
            cout << "The area of rectangle is " << length*breath <<endl;
        }
};

int main(){
    cout << "Enter the size of side of square : ";
    int side;
    cin >> side;
    Area ar;
    ar.area(side);
    cout << "Enter the length and breadth of rectangle : ";
    int l,b;
    cin >> l >> b;
    ar.area(l,b);
   
}