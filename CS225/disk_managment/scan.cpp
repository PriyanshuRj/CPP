#include <bits/stdc++.h> 
using namespace std;

int main()
{
    int head, temp;
    vector<int> v;
    char dir;
    string reference;
    cout << "Enter head location: ";
    cin >> head;
    cout << "Enter string of disk locations : ";
    cin.ignore();
    getline(cin, reference);
direction:
    cout << "Enter direction of movement of the Head (L or R): ";
    cin >> dir;
    istringstream iss1(reference);
    while (iss1 >> temp)
        v.push_back(temp);
    sort(v.begin(), v.end());
    if (dir == 'l' || dir == 'L')
    {
        if (v.back() > head)
            cout << "Total Head Movement: " << head + v.back() << endl;
        else
            cout << "Total Head Movement: " << head - v.front() << endl;
    }
    else if (dir == 'r' || dir == 'R')
    {
        int cylinder_count;
        cout << "Enter total no. of cylinders: ";
        cin >> cylinder_count;
        if (v.front() < head)
            cout << "Total Head Movement: " << 2 * (cylinder_count - 1) - v.front() - head << endl;
        else
            cout << "Total Head Movement: " << v.back() - head << endl;
    }
    else
    {
        cout << "Enter a valid direction" << endl;
        goto direction;
    }
    return 0;
}
