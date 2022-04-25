#include <bits/stdc++.h>
using namespace std;
class Priority_queue{
int n;
int *arr;
public:
Priority_queue(){
n=0;
arr=new int [n];
}
void heapify(int i){
int largest=i;
int l=2*i+1;
int r=2*i+2;
if(l<n and arr[l]>arr[largest])
largest=l;
if(r<n and arr[r]>arr[largest])
largest=r;
if(largest!=i){
swap(arr[i],arr[largest]);
heapify(largest);
}
}
void pop(){
arr[0]=arr[n-1];
n=n-1;
int startidx=n/2-1;
for(int j=startidx;j>=0;j--){
heapify(j);
}
}
int size(){
return n;
}
void top(){
cout<<arr[0]<<endl;
}
void push(int x)
{
n=n+1;
arr[n-1]=x;
int startidx=n/2-1;
for(int i= startidx;i>=0;i--)
heapify(i);
}
};
int main(){
Priority_queue pq;
pq.push(9);
pq.push(86);
pq.push(63);
pq.top();
pq.pop();
pq.top();
int n=pq.size();
}