#include<iostream>
using namespace std;

template <typename T>
int linear_search(T *arr,int size,T val)
{
    for(int i =0;i<size;i++){
        if(arr[i] == val){
            return i;
        }
    }
    return -1;
}

void print_results(int ind){
    if(ind==-1) cout<<"Element not found !!"<<endl;
    else cout<<"Element found at index : "<<ind<<endl;
}

int main(){
    int ari[10] = {1,2,3,4,5,6,7,8,9,10};
    float arf[10] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10};
    char arc[10] = {'a','b','c','d','e','f','g','h','i','j'};
    int ind;
    int ele;
    cout<<"Enter the element to search in intiger array : ";
    cin>>ele;
    ind = linear_search<int>(ari,10,ele);
    print_results(ind);
    cout<<"Enter the element to search in intiger array : ";
    cin>>ele;
    ind = linear_search<int>(ari,10,ele);
    print_results(ind);
    float ele1;
    cout<<"Enter the element to search in float array : ";
    cin>>ele1;
    ind = linear_search<float>(arf,10,ele1);
    print_results(ind);
    cout<<"Enter the element to search in float array : ";
    cin>>ele1;
    ind = linear_search<float>(arf,10,ele1);
    print_results(ind);
    char ele2;
    cout<<"Enter the element to search in charecter array : ";
    cin>>ele2;
    ind = linear_search<char>(arc,10,ele2);
    print_results(ind);
    cout<<"Enter the element to search in charecter array : ";
    cin>>ele2;
    ind = linear_search<char>(arc,10,ele2);
    print_results(ind);
}