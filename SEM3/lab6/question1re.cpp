#include<iostream>
using namespace std;
class DB;
class DM{
    private:
        float meters;
        float centimeters;
    public:
        DM();

        DM(float dis);
        void display();
        friend DM add(DM &obj1, DB &obj2);
        friend DB add( DB &obj2,DM &obj1);
};


class DB{
    private:
        float feet;
        float inches;
    public:
        DB();
        DB(float dis);
        void display();
        friend DM add(DM &obj1, DB &obj2);
        friend DB add( DB &obj2,DM &obj1);
};

// Default Constructor function for DM class
DM :: DM(){
    this->meters =0;
    this->centimeters = 0;
}

// Parameterized Constructor function for DM class
DM :: DM(float dis){
    if(dis>=100){
        int meter = dis/100;
        this->meters = meter;
        this->centimeters = dis - meter*100;
    }
    else{
        this->meters = 0;
        this->centimeters =dis;
    }
}

// Display function for DM class
void DM :: display(){
    cout<<"The distance in meter - centimeter is : ";
    cout<<this->meters<<" meters and "<<this->centimeters<<" centimeters"<<endl;
}

// Default Constructor function for DM class
DB::DB(){
    this->feet = 0;
    this->inches = 0;
}
// Parameterized Constructor function for DB class
DB :: DB(float dis){
    if(dis>=12){
        int feet = dis/12;
        this->feet = feet;
        this->inches = dis - feet*12;
    }
    else{
        this->feet = 0;
        this->inches   = dis;
    }
}

// Display function for DB class
void DB :: display(){
    cout<<"The distance in feet - inches is : ";
    cout<<this->feet<<" feets and "<<this->inches<<" inches"<<endl;
}

// add function returning DM object

DM add(DM &obj1, DB &obj2){
    DM obj;
    float dis = obj1.meters*100 + obj1.centimeters + obj2.feet*30.48 + obj2.inches*2.54;
    if(dis>=100){
        int meter = dis/100;
        obj.meters = meter;
        obj.centimeters = dis - meter*100;
    }
    else{
        obj.meters = 0;
        obj.centimeters =dis;
    }
    return obj;

}

// add function returning DB object
DB add( DB &obj2,DM &obj1){
    DB obj;
    float dis=(obj1.meters*39.37 + obj1.centimeters*0.393701 + obj2.feet*12 + obj2.inches);
    if(dis>=12){
        int feet = dis/12;
        obj.feet = feet;
        obj.inches = dis - feet*12;
    }
    else{
        obj.feet = 0;
        obj.inches   = dis;
    }
    return obj;    
}

int main(){
    float discenti;
    cout<<"Enter the distance in centimeter for first object : ";
    cin >> discenti;
    DM objmeter(discenti);
    float disinch;
    cout<<"Enter the distance in inches for second object : ";
    cin >> disinch;
    DB objfoot(disinch);
    cout<<endl<<"the distance entered for the meter-centimeter object was : "<<endl;
    objmeter.display();
    cout<<endl<<"the distance entered for the meter-centimeter object was : "<<endl;
    objfoot.display();

    cout<<endl;
    cout<<"Do you want to add in meteric system or British imperial system"<<endl;
    cout<<"Choose 1 for meteric system\nChoose 2 for British imperial system\n";
    int ch;
    cout<<"Enter your choice : ";
    cin>>ch;
    cout<<endl;
    if(ch==1){
        DM obj = add(objmeter,objfoot);
        obj.display();
        
    }
    else if(ch==2){
        DB obj = add(objfoot,objmeter);
        obj.display();
    }
    else{
        cout<<"wrong input"<<endl;
    }
    
    return 0;

}