#include <bits/stdc++.h>
using namespace std;
int main()
{
    int head, head_movement = 0, temp;
    vector<int> v;
    string reference;
    cout << "Enter head location : ";
    cin >> head;
    cout << "Enter string of disk locations : ";
    cin.ignore();
    getline(cin, reference);
    istringstream iss1(reference);
    while (iss1 >> temp)
        v.push_back(temp);
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        int min = INT_MAX;
        int index;
        for (int i = 0; i < v.size(); i++)
            if (min > abs(head - v[i]))
            {
                min = abs(head - v[i]);
                index = i;
            }
        head_movement += min;
        head = v[index];
        v.erase(v.begin() + index);
    }
    cout << "Total Head Movement: " << head_movement << endl;
    return 0;
}
