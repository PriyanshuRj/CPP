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


int main(){
    Cordinates pt;
    ++pt;
    ++pt;
    ++pt;
    ++pt;
    pt.display();
    --pt;
    --pt;
    pt.display();
    Cordinates pt2(4,6,7);
    --pt2;
    --pt2;
    pt2.display();
    if(pt==pt2) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    cout<<endl;
    pt+=pt2;
    pt.display();


}