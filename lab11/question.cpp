#include<iostream>
using namespace std;

class Division{
    private:
        double num;
        double den;
    public:
        void getval();
        void calc();
};

void Division::getval(){
    cout<<"Enter the Value of Numirator :";
    cin>>this->num;
    if(cin.fail()){
        throw 1;
    }
    cout<<"Enter the Value of Denominator :";
    cin>>this->den;
    if(cin.fail()){
        throw 1;
    }

}

void Division::calc(){
    if(den==0){
        throw 0;
    }
    else{
        cout<<"The result after division is : "<<num/den;
    }
}

int main() {
    try{
        Division d;
        d.getval();
        d.calc();
    }catch(int err){
        if(err == 0){
            cout<<"Error !! Division by zero Aborting !! "<<endl;
        }
        if(err == 1){ 
            cout<<"Error !! Wrong input data type Aborting !!"<<endl;
        }

    }
    return 0;
}