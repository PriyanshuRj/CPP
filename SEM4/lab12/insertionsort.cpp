#include <iostream>
using namespace std;
void insertionSort(int *array, int size)  {
    int key, j;
    for (int i = 1; i < size; i++)  {
        key = array[i];
        j = i;
        while (j > 0 && array[j - 1] > key)  {
            array[j] = array[j - 1];
            j--;
        }
        array[j] = key;
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
    cout << "Enter the elements ::::::" << endl;
    for (int i = 0; i < n; i++) {
        cout<<"Enter the value at index "<<i<<" : ";
        cin >> arr[i];
    }
    cout << "The Unsorted array : ";
    display(arr, n);
    insertionSort(arr, n);
    cout << "The Sorted array: ";
    display(arr, n);
}