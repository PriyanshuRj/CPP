#include<iostream>
using namespace std;
class Cordinates{
    private:
        int x;
        int y;
        int z;
    public:
        Cordinates();
        Cordinates(int x, int y, int z);
        Cordinates operator++();
        Cordinates operator--();
        Cordinates operator+=(Cordinates obj);
        bool operator==(Cordinates obj);
        void display();
        void set();
};

Cordinates::Cordinates(){
    this->x = 0;
    this->y = 0;
    this->z = 0;

}

Cordinates::Cordinates(int x, int y, int z){
    this->x = x;
    this->y = y;
    this->z = z;

}

Cordinates Cordinates::operator++(){
    return Cordinates(x++, y++, z++);

}

Cordinates Cordinates::operator--(){
    return Cordinates(x--, y--, z--);

}

Cordinates Cordinates::operator+=(Cordinates obj){
    this->x = obj.x + this->x;
    this->y = obj.y + this->y;
    this->z = obj.z + this->z;
    return *this;
}

bool Cordinates::operator==(Cordinates obj){
    if(this->x == obj.x && this->y == obj.y && this->z == obj.z) return 1;
    return 0;
}

void Cordinates::display(){
    cout<<"The value of x is : "<<this->x<<endl;
    cout<<"The value of y is : "<<this->y<<endl;
    cout<<"The value of z is : "<<this->z<<endl<<endl;
}

void Cordinates::set(){
    cout<<"Enter the value for x : ";
    cin>>this->x;
    cout<<"Enter the value for y : ";
    cin>>this->y;
    cout<<"Enter the value for z : ";
    cin>>this->z;
}


int main(){
    Cordinates pt1;
    Cordinates pt2;
    cout<<"For First point "<<endl;
    pt1.set();
    cout<<endl;
    cout<<"For Second point "<<endl;
    pt2.set();
    cout<<endl;
    int dessision = 1;
    while(dessision){
        cout<<"press 1 for incrementing point 1\npress 2 for decrementing point 1\npress 3 for incrementing point 2\npress 4 for decrementing point 2\npress 5 to compare both\npress 6 for adding point 2 to point 1\npress 7 for adding point 1 to point 2\npress 8 to display point 1\npress 9 to display point 2\npress 10 to exit\n\n";
        cout<<"Enter your choice : ";
        int choice;
        cin>>choice;
        switch(choice){
            case(1):
                ++pt1;
                break;
            case(2):
                --pt1;
                break;
            case(3):
                ++pt2;
                break;
            case(4):
                --pt2;
                break;
            case(5):
                if(pt1==pt2) cout<<endl<<"Yes they are equal"<<endl<<endl;
                else cout<<endl<<"No they are not equal"<<endl<<endl;
                break;
            case(6):
                pt1 += pt2;
                break;
            case(7):
                pt2 += pt1;
                break;
            case(8):
                cout<<endl;
                pt1.display();
                break;
            case(9):
                cout<<endl;
                pt2.display();
                break;
            case(10):
                dessision = 0;
                break;
            default:
                cout<<endl<<"Wrong input"<<endl<<endl;
                break;
        }   
    }
}