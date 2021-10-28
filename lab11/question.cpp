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
    cin>>num;
    cout<<"Enter the Value of Denominator :";
    cin>>den;

}
void Division::calc(){
    if(den==0){
        throw "Division by zero not possible";
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
        
    }catch(string err){
        cout<<err<<endl;

    }
    return 0;
}