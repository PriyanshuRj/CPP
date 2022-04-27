#include <iostream>
using namespace std;
void swapping(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void selectionSort(int *array, int size) {
    int i, j, min_ind;
    for (i = 0; i < size - 1; i++) {
        min_ind = i;
        for (j = i + 1; j < size; j++)  if (array[j] < array[min_ind])  min_ind = j;
        swap(array[i], array[min_ind]);
    }
}
void display(int *array, int size) {
    for (int i = 0; i < size; i++)  cout << array[i] << " ";
    cout << endl;
}
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the elements ::::::::" << endl;
    for (int i = 0; i < n; i++) {
        cout<<"Enter the value at index "<<i<<" : ";
        cin >> arr[i];
    }
    cout << "The Unsorted array : ";
    display(arr, n);
    selectionSort(arr, n);
    cout << "The Sorted array : ";
    display(arr, n);
}