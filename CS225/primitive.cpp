#include <bits/stdc++.h>
using namespace std;

struct fcfsprocess {
    int pid;
    int arrival_time;
    int burst_time;
    int start_time;
    int completion_time;
    int turnaround_time;
    int waiting_time;
    int response_time;
};

bool compareArrivalTime(fcfsprocess p1, fcfsprocess p2) 
{ 
    return p1.arrival_time < p2.arrival_time;
}

bool compareprocess(fcfsprocess p1, fcfsprocess p2) 
{  
    return p1.pid < p2.pid;
}

int main() {

    int n;
    float avg_turnaround_time;
    float avg_waiting_time;
    float avg_response_time;
    int total_turnaround_time = 0;
    int total_waiting_time = 0;
    int total_response_time = 0;
    float throughput;

    cout<<"Enter the number of processes: ";
    cin>>n;
    struct fcfsprocess *p = new struct fcfsprocess[n];

    for(int i = 0; i < n; i++) {
        cout<<"Enter arrival time of process "<<i+1<<": ";
        cin>>p[i].arrival_time;
        cout<<"Enter burst time of process "<<i+1<<": ";
        cin>>p[i].burst_time;
        p[i].pid = i+1;
        cout<<endl;
    }

    sort(p,p+n,compareArrivalTime);

    for(int i = 0; i < n; i++) {
        p[i].start_time = (i == 0)?p[i].arrival_time:max(p[i-1].completion_time,p[i].arrival_time);
        p[i].completion_time = p[i].start_time + p[i].burst_time;
        p[i].turnaround_time = p[i].completion_time - p[i].arrival_time;
        p[i].waiting_time = p[i].turnaround_time - p[i].burst_time;
        p[i].response_time = p[i].start_time - p[i].arrival_time;
        total_turnaround_time += p[i].turnaround_time;
        total_waiting_time += p[i].waiting_time;
        total_response_time += p[i].response_time;
    }

    avg_turnaround_time = (float) total_turnaround_time / n;
    avg_waiting_time = (float) total_waiting_time / n;
    avg_response_time = (float) total_response_time / n;

    throughput = float(n) / (p[n-1].completion_time - p[0].arrival_time);

    sort(p,p+n,compareprocess);

    cout<<endl;
    cout<<"Process    "<<"Arival Time\t"<<"Burst Time    "<<"Turnaround Time\t"<<"Waitning Time\t"<<"Response Time\t"<<"\n"<<endl;

    for(int i = 0; i < n; i++) {
        cout<<p[i].pid<<"\t   "<<p[i].arrival_time<<"\t\t"<<p[i].burst_time<<"\t\t"<<p[i].turnaround_time<<"\t\t"<<p[i].waiting_time<<"\t\t"<<p[i].response_time<<"\t"<<"\n"<<endl;
    }
    cout<<"Average Turnaround Time : "<<avg_turnaround_time<<endl;
    cout<<"Average Waiting Time : "<<avg_waiting_time<<endl;
    cout<<"Average Response Time : "<<avg_response_time<<endl;
    cout<<"Throughput : "<<throughput<<endl;
}