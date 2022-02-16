#include <bits/stdc++.h>
using namespace std;

struct Process
{
    int pid; // Process ID
    int bt;  // Burst Time
    int art; // Arrival Time
};
void findTurnAroundTime(Process proc[], int n, int wt[], int tat[])
{
    for (int i = 0; i < n; i++)
        tat[i] = proc[i].bt + wt[i];
}

void findWaitingTime(Process proc[], int n, int wt[])
{
    int *rt = new int[n];
    for (int i = 0; i < n; i++)
        rt[i] = proc[i].bt;
    int complete = 0, t = 0, minm = INT_MAX;
    int shortest = 0, finish_time;
    bool check = false;
    while (complete != n)
    {
        for (int j = 0; j < n; j++)
        {
            if ((proc[j].art <= t) && (rt[j] < minm) )
            {
                minm = rt[j];
                shortest = j;
                check = true;
            }
        }
        if (check == false)
        {
            t++;
            continue;
        }
        rt[shortest]--;
        minm = rt[shortest];
        if (minm == 0)
            minm = INT_MAX;
        if (rt[shortest] == 0)
        {
            complete++;
            check = false;
            finish_time = t + 1;
            wt[shortest] = finish_time -
                           proc[shortest].bt -
                           proc[shortest].art;
            if (wt[shortest] < 0)
                wt[shortest] = 0;
        }

        t++;
    }
}
// Function to calculate average time
void findavgTime(Process proc[], int n)
{

    int *wt =  new int[n], *tat =  new int[n], total_wt = 0,
                       total_tat = 0;
    findWaitingTime(proc, n, wt);

    findTurnAroundTime(proc, n, wt, tat);
    cout << "Processes "
         << " Burst time "
         << " Waiting time "
         << " Turn around time\n";
    for (int i = 0; i < n; i++)
    {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        cout << " " << proc[i].pid << "\t\t" << proc[i].bt << "\t\t " << wt[i] << "\t\t " << tat[i] << endl;
    }
    cout << "\nAverage waiting time = " << (float)total_wt / (float)n;
    cout << "\nAverage turn around time = " << (float)total_tat / (float)n;
}

// main function
int main()
{
    int num;
    cout << "Enter the no. of processess : ";
    cin >> num;
    Process *processess = new Process[num];
    for (int i = 0; i < num; i++)
    {
        processess[i].pid = i + 1;
        cout << "Enter the Burst time for the processess " << i + 1 << " : ";
        cin >> processess[i].bt;
        cout << "Enter the Arrival time ofr the process " << i + 1 << " : ";
        cin >> processess[i].art;
    }
    findavgTime(processess, num);
    return 0;
}