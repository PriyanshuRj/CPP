#include<iostream>
using namespace std;
void swapping(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void display(int *array, int size) {
    for (int i = 0; i < size; i++)  cout << array[i] << " ";
    cout << endl;
}
int partition(int *array, int lower, int upper) {
    int pivot, start, end;
    pivot = array[lower];
    start = lower;
    end = upper;
    while (start < end) {
        while (array[start] <= pivot && start < end) start++;
        while (array[end] > pivot)  end--;
        if (start < end)  swap(array[start], array[end]);
    }
    array[lower] = array[end];
    array[end] = pivot;
    return end;
}
void quickSort(int *array, int left, int right) {
    int q;
    if (left < right) {
        q = partition(array, left, right);
        quickSort(array, left, q - 1);
        quickSort(array, q + 1, right);
    }
}
int main() {
    int n;
    cout << "Enter the number of elements: ";
    int *arr = new int[n];
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++) {
        cout<<"Enter the value at index "<<i<<" : ";
        cin >> arr[i];
    }
    cout << "The Unsorted array: ";
    display(arr, n);
    quickSort(arr, 0, n - 1);
    cout << "The Sorted array: ";
    display(arr, n);
    return 0;
}