#define _USE_MATH_DEFINES
#include<iostream>
#include<cmath>

using namespace std;
// abstract class Shape
class Shape{
    public :

        virtual void display(){};
        virtual void find_volume(){};
        virtual void find_area(){};

};
class TwoDimentional : public Shape{
    public :
        float area;
};
class ThreeDimentional : public Shape{
    public:
        float volume;
};

class Triangle : public TwoDimentional{
    private :
        float hight;
        float base;
        
    public:
        Triangle(float hight,float base){
            this->hight = hight;
            this->base = base;
        }
        void find_area(){
        this->area = 0.5*(base*hight);
        }
        void display(){
            cout<<"The area of the trainagle is : "<<area<<endl;
        }
};

class Rectangle : public TwoDimentional{
    private : 
        float length;
        float breadth;
    public:
        Rectangle(float length,float breadth){
            this->length = length;
            this->breadth = breadth;
        }
        void find_area(){
            this->area = this->breadth*this->length;
        }
        void display(){
            cout<<"The area of the rectangle is : "<<area<<endl;
        }

};
class Circle : public TwoDimentional{
    private : 
        float radius;
    
    public:
        Circle(float radius){
            this->radius = radius;
        }
        void find_area(){
            this->area = M_PI*this->radius*this->radius;
        }
        void display(){
            cout<<"The area of thecircle is : "<<area<<endl;
        }

};

class Box :public ThreeDimentional{
    private:
        float length;
        float breadth;
        float height;
    public : 
        Box(float l,float b,float h){
            length = l;
            breadth = b;
            height = h;
        }
        void find_volume(){
            this->volume = length*breadth*height;
        }
        void display(){
            cout<<"The volume of the Box is : "<<volume<<endl;
        }
};
class Cone :public ThreeDimentional{
    private:
        float radius;
        float height;
    public : 
        Cone(float r,float h){
            radius = r;
            height = h;
        }
        void find_volume(){
            this->volume = M_PI*(1.0/3.0)*(radius*radius*height);
        }
         void display(){
            cout<<"The volume of the Cone is : "<<volume<<endl;
        }
};
class Cylinder :public ThreeDimentional{
    private:
        float radius;
        float height;
    public : 
        Cylinder(float r,float h){
            radius = r;
            height = h;
        }
        void find_volume(){
            this->volume = M_PI*(radius*radius*height);
        }
         void display(){
            cout<<"The volume of the Cylinder is : "<<volume<<endl;
        }
};
class Sphere :public ThreeDimentional{
    private:
        float radius;
    
    public : 
        Sphere(float r){
            radius = r;

        }
        void find_volume(){
            this->volume = M_PI*(4.0/3.0)*(radius*radius*radius);
        }
         void display(){
            cout<<"The volume of the Sphere is : "<<volume<<endl;
        }
};
int main(){
    int a,b,c;
    cout<<"For Two dimensional shapes : "<<endl;
    cout<<"For Triangle : "<<endl;
    cout<<"Enter the Height of the triangle : ";
    cin>>a;
    cout<<"Enter the base of the triangle : ";
    cin>>b;
    cout<<endl;

    Triangle t1(a,b);

    cout<<"For Rectangle : "<<endl;
    cout<<"Enter the length of the rectangle : ";
    cin>>a;
    cout<<"Enter the breath of the rectangle : ";
    cin>>b;
    cout<<endl;

    Rectangle r1(a,b);

    cout<<"For Circle : "<<endl;
    cout<<"Enter the Radius of the circle : ";
    cin>>a;
    Circle c1(a);

    cout<<endl;



    cout<<"For Three dimensional shapes : "<<endl;
    cout<<"For Box : "<<endl;
    cout<<"Enter the length of the Box : ";
    cin>>a;
    cout<<"Enter the breath of the Box : ";
    cin>>b;
    cout<<"Enter the Height of the Box : ";
    cin>>c;
    Box b1(a,b,c);

    cout<<endl;
    cout<<"Enter the Radius of the Cone : ";
    cin>>a;
    cout<<"Enter the Height of the Cone : ";
    cin>>b;
    Cone c2(a,b);

    cout<<endl;
    cout<<"Enter the Radius of the Cylinder : ";
    cin>>a;
    cout<<"Enter the Height of the Cylinder : ";
    cin>>b;
    Cylinder c3(a,b);

    cout<<endl;
    cout<<"Enter the Radius of the Sphere : ";
    cin>>a;
    Sphere s1(a);

    cout<<endl;
    Shape* list[7];
    list[0] = &t1;
    list[0]->find_area();
    list[1] = &r1;
    list[1]->find_area();
    list[2] = &c1;
    list[2]->find_area();

    list[3] = &b1;
    list[3]->find_volume();
    list[4] = &c2;
    list[4]->find_volume();
    list[5] = &c3;
    list[5]->find_volume();
    list[6] = &s1;
    list[6]->find_volume();

    for(int i =0 ;i< 7;i++) {
        list[i]->display();
        cout<<endl;
    }







    
    return 0;
}