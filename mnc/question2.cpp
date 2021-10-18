#include<iostream>
using namespace std;

class PrintNumber{

    public:

        void printn(int a){
             cout << "The integer datatype number is " << a << endl;
        }
        void printn(float b){
             cout << "The float datatype number is " << b << endl;
        }
        void printn(long c){
            cout << "The long datatype number is " << c << endl;
        }
        void printn(long long d){
            cout << "The long long datatype number is " << d << endl;
        }
        void printn(double e){
            cout << "The double datatype number is " << e << endl;
        }

};
int main(){
    
    PrintNumber n;
    int a;
    cout<<"Enter the integer : ";
    cin>>a;
    n.printn(a);
    float b;
    cout<<"Enter the float : ";
    cin>>b;
    n.printn(b);
    long c;
    cout<<"Enter the long : ";
    cin>>c;
    n.printn(c);
    long long d;
    cout<<"Enter the long long : ";
    cin>>d;
    n.printn(d);
    double e;
    cout<<"Enter the double : ";
    cin>>e;
    n.printn(e);

}