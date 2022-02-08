#include<iostream>

using namespace std;
float area(float radius){
    return 3.14*radius*radius;
}
float area(float length,float width){
    return length*width;
}
float area(float side1,float side2,float side3){
    float s = (side1 + side2 + side3)/2;
    return sqrt(s*(s-side1)*(s-side2)*(s-side3));
}
int calculate(int ans){
    cout<<"Area of which shape do u want to calculate "<<endl<<endl;
    cout<<"\n1 for circle \n2 for rectangle \n3 for triangle \nelse for exit \nInput : ";
    int res;
    cin>>res;
    switch(res){
        case(1):
        int r;
        cout<<"Enter the radius of the circle : ";
        cin>>r;
        cout<<endl<<"Area of the circle is : "<<area(r)<<endl<<endl;
        break;
        case(2):
        int length,width;
        cout<<"Enter the length of the rectangle : ";
        cin>>length;
        cout<<"Enter the width of the rectangle : ";
        cin>>width;
        cout<<endl<<"Area of the rectangle is : "<<area(length,width)<<endl<<endl;
        break;
        case(3):
        int a,b,c;
        cout<<"Enter the sid 1 of the triangle : ";
        cin>>a;
        cout<<"Enter the side 2 of the triangle : ";
        cin>>b;
        cout<<"Enter the side 3 of the triangle : ";
        cin>>c;

        cout<<endl<<"Area of the triangle is : "<<area(a,b,c)<<endl<<endl;
        break;
        default:
        ans =0;
        break;



    }
    return ans;
}
int main(){
    int ans =1;
    while(ans){
        ans = calculate(ans);
    }
    return 0;
}