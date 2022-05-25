
#include <bits/stdc++.h> 
using namespace std;

int main()
{
    int head, temp;
    vector<int> v;
    char dir;
    string refrance;
    cout << "Enter head location : ";
    cin >> head;
    cout << "Enter string of disk locations : ";
    cin.ignore();
    getline(cin, refrance);
direction:
    cout << "Enter direction (L or R): ";
    cin >> dir;
    istringstream iss1(refrance);
    while (iss1 >> temp)
        v.push_back(temp);
    sort(v.begin(), v.end());
    if (dir == 'l' || dir == 'L')
    {
        if (v.back() > head)
            cout << "Total Head Movement: " << head - v.front() + v.back() << endl;
        else
            cout << "Total Head Movement: " << head - v.front() << endl;
    }
    else if (dir == 'r' || dir == 'R')
    {
        if (v.front() < head)
            cout << "Total Head Movement: " << 2 * v.back() - head - v.front() << endl;
        else
            cout << "Total Head Movement: " << v.back() - head << endl;
    }
    else
    {
        cout << "Enter valid direction" << endl;
        goto direction;
    }
    return 0;
}