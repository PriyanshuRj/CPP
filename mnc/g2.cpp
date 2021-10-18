#include <iostream>
using namespace std;
class PrintNumber
{
public:
    void printNum(int val);
    void printNum(float val);
    void printNum(double val);
    void printNum(string val);

};
void PrintNumber::printNum(int val)
{
    cout << val << endl;
}
void PrintNumber::printNum(float val)
{
    cout << val << endl;
}
void PrintNumber::printNum(double val)
{
    cout << val << endl;
}
void PrintNumber::printNum(string val)
{
    cout << val << endl;
}
int main()
{
    cout<<"Program started"<<endl;
    PrintNumber L;
    cout<<"Object created "<<endl;
    int a;
    cout<<"Enter the integer : ";
    cin>>a;
    L.printNum(a);
    float b;
    cout<<"Enter the float : ";
    cin>>b;
    L.printNum(b);
    double c;
    cout<<"Enter the double : ";
    cin>>c;
    L.printNum(c);
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    L.printNum(s);
}