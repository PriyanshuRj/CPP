#include <bits/stdc++.h> 
using namespace std;

int Search(vector<int> v, int x)
{
    int min = 0, max = v.size() - 1, mid;
    while (min <= max)
    {
        mid = min + (max - min) / 2;
        if (v[mid] > x)
            max = mid - 1;
        else if (v[mid] < x)
            min = mid + 1;
        else
            return mid;
    }
    return mid;
}

int main()
{
    int head, temp, cylinder_count, less, more;
    vector<int> v;
    char dir;
    string refrance;
    cout << "Enter head location : ";
    cin >> head;
    cout << "Enter total no. of cylinders : ";
    cin >> cylinder_count;
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

    temp = Search(v, head);
    if (temp > head)
    {
        more = v[temp];
        less = v[temp - 1];
    }
    else if (temp < head)
    {
        less = v[temp];
        more = v[temp + 1];
    }
    else
        more = less = v[temp];
    if (dir == 'l' || dir == 'L')
    {
        if (v.back() > head)
            cout << "Total Head Movement: " << head + 2 * (cylinder_count - 1) - more << endl;
        else
            cout << "Total Head Movement: " << head - v.front() << endl;
    }
    else if (dir == 'r' || dir == 'R')
    {
        if (v.front() < head)
            cout << "Total Head Movement: " << 2 * (cylinder_count - 1) - head + less << endl;
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
