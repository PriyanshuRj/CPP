#include <iostream>
using namespace std;
void swapping(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void display(int *array, int size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}
void merge(int *array, int l, int m, int r)
{
    int i, j, k, nl, nr;
    nl = m - l + 1;
    nr = r - m;
    int left_array[nl], rarr[nr];
    for (i = 0; i < nl; i++)
        left_array[i] = array[l + i];
    for (j = 0; j < nr; j++)
        rarr[j] = array[m + 1 + j];
    i = 0;
    j = 0;
    k = l;
    while (i < nl && j < nr) {
        if (left_array[i] <= rarr[j]) {
            array[k] = left_array[i];
            i++;
        }
        else {
            array[k] = rarr[j];
            j++;
        }
        k++;
    }
    while (i < nl) {
        array[k] = left_array[i];
        i++;
        k++;
    }
    while (j < nr) {
        array[k] = rarr[j];
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
int main() {
    int n;
    cout << "Enter the number of elements int the Array : ";
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