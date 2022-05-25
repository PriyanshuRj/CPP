#include <bits/stdc++.h>
using namespace std;

int main()
{
    int head, head_movement = 0, temp;
    string reference;
    cout << "Enter head location: ";
    cin >> head;
    cout << "Enter string of disk locations : ";
    cin.ignore();
    getline(cin, reference);
    istringstream iss(reference);
    while (iss >> temp)
    {
        head_movement += abs(temp - head);
        head = temp;
    }
    cout << "Total Head Movement: " << head_movement << endl;
    return 0;
}