#include <bits/stdc++.h>
using namespace std;
class Priority_queue {
  int n;
  int *arr;
public:
  Priority_queue()  {
    n = 0;
    arr = new int[n];
  }
  void heapify(int i) {
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n and arr[l] > arr[largest])  largest = l;
    if (r < n and arr[r] > arr[largest])  largest = r;
    if (largest != i)  {
      swap(arr[i], arr[largest]);
      heapify(largest);
    }
  }
  void pop()  {
    arr[0] = arr[n - 1];
    n = n - 1;
    int startidx = n / 2 - 1;
    for (int j = startidx; j >= 0; j--) heapify(j);
  }
  int size()  {return n;}
  void top()  { cout << arr[0] << endl;}
  void push(int x)  {
    n = n + 1;
    arr[n - 1] = x;
    int startidx = n / 2 - 1;
    for (int i = startidx; i >= 0; i--)  heapify(i);
  }
};
int main() {
  Priority_queue pq;
  int cond = 1;
  while(cond){
    cout<<"\nPress 1 for inserting\nPress 2 for Removing\nPress 3 for checking top\nElse for exiting\n\nEnter your choice : ";
    int choice;
    cin>>choice;
    switch(choice){
      case 1:
        cout<<"Enter the data to be pussed : ";
        int data;
        cin>>data;
        pq.push(data);
        break;
      case 2:
        pq.pop();
        break;
      case 3:
        cout<<"The data at the top is : ";
        pq.top();
        break;
      default:
        cond = 0;
        break; 
    }
  }
}