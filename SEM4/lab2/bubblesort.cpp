#include <bits/stdc++.h>
using namespace std;
void bubbleSortAlgo(int v[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        bool flag = true;
        for (j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                flag = false;
            }
        }
        if (flag)
            break;
    }
}

int main()
{
    cout << "Input Number of elements : ";
    int n;
    cin >> n;
    int *v = new int[n];
    cout << "Input all elements :::::" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element at index " << i << " : ";
        cin >> v[i];
    }
    bubbleSortAlgo(v, n);
    cout << "List after Sorting :" << '\n';
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout<<endl;
    return 0;
}