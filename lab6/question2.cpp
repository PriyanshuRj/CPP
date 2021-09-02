#include<iostream>
using namespace std;

class Objcreater{
    private:
        int val1;
        int val2;
        static int objectcount;
    public:
        Objcreater();
        Objcreater(int val1, int val2);
        ~Objcreater();
        friend void displaycount();

};
int Objcreater::objectcount = 0;

// Default Constructor function for class
Objcreater::Objcreater(){
    val1 =0;
    val2 =0;
    Objcreater::objectcount++;
}

// Parameterized Constructor function for the class
Objcreater::Objcreater(int val1, int val2){
    this->val1 = val1;
    this->val2 = val2;
    Objcreater::objectcount++;
}

Objcreater::~Objcreater() {
        Objcreater::objectcount--;

}

void displaycount(){
    cout<<"There are currently "<<Objcreater::objectcount<<" objects of this class"<<endl;
}
int main(){
    Objcreater obj1, obj2,obj3,obj4;
    displaycount();
    cout<<endl;
    Objcreater obj5;
    displaycount();
    return 0;

    

}
