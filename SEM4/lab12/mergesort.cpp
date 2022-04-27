#include <iostream>
using namespace std;
void merge(int *array, int l, int m, int r) {
    int i, j, k, left_length, right_length;
    left_length = m - l + 1;
    right_length = r - m;
    int *left_array = new int[left_length], *right_array = new int[right_length];
    for (i = 0; i < left_length; i++)  left_array[i] = array[l + i];
    for (j = 0; j < right_length; j++)  right_array[j] = array[m + 1 + j];
    i = 0;
    j = 0;
    k = l;
    while (i < left_length && j < right_length) {
        if (left_array[i] <= right_array[j]) {
            array[k] = left_array[i];
            i++;
        }
        else {
            array[k] = right_array[j];
            j++;
        }
        k++;
    }
    while (i < left_length) {
        array[k] = left_array[i];
        i++;
        k++;
    }
    while (j < right_length) {
        array[k] = right_array[j];
        j++;
        k++;
    }
}
void mergeSort(int *array, int l, int r) {
    int m;
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(array, l, m);
        mergeSort(array, m + 1, r);
        merge(array, l, m, r);
    }
}
void display(int *array, int size) {
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}
int main() {
    int n;
    cout << "Enter the number of elements the Array : ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the elements::::::" << endl;
    for (int i = 0; i < n; i++) {
        cout<<"Enter the value at index "<<i<<" : ";
        cin >> arr[i];
    }
    cout << "The Unsorted array : ";
    display(arr, n);
    mergeSort(arr, 0, n - 1);
    cout << "The Sorted array : ";
    display(arr, n);
}