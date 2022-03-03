#include<bits/stdc++.h>
#include <algorithm> 
#include <iomanip>
#include <queue> 
using namespace std;

struct roundrobinprocess {
    int process_ID;
    int arrival_time;
    int burst_time;
    int start_time;
    int completion_time;
    int turnaround_time;
    int waiting_time;
    int response_time;
};

bool compare1(roundrobinprocess p1, roundrobinprocess p2) 
{ 
    return p1.arrival_time < p2.arrival_time;
}

bool compare2(roundrobinprocess p1, roundrobinprocess p2) 
{  
    return p1.process_ID < p2.process_ID;
}

int main() {

    int n;
    int tq;
    float avg_turnaround_time;
    float avg_waiting_time;
    float avg_response_time;
    int total_turnaround_time = 0;
    int total_waiting_time = 0;
    int total_response_time = 0;
    int total_idle_time = 0;
    float throughput;

    int idx;
    cout<<"Enter the number of processes: ";
    cin>>n;
    cout<<"Enter time quantum: ";
    cin>>tq;
    struct roundrobinprocess *process = new struct roundrobinprocess[n];
    int *burst_remaining = new int[n];
    for(int i = 0; i < n; i++) {
        cout<<"Enter arrival time of process "<<i+1<<": ";
        cin>>process[i].arrival_time;
        cout<<"Enter burst time of process "<<i+1<<": ";
        cin>>process[i].burst_time;
        burst_remaining[i] = process[i].burst_time;
        process[i].process_ID = i+1;
        cout<<endl;
    }
    sort(process,process+n,compare1);
    queue<int> q;
    int current_time = 0;
    q.push(0);
    int completed = 0;
    int mark[100];
    memset(mark,0,sizeof(mark));
    mark[0] = 1;
    while(completed != n) {
        idx = q.front();
        q.pop();

        if(burst_remaining[idx] == process[idx].burst_time) {
            process[idx].start_time = max(current_time,process[idx].arrival_time);
            total_idle_time += process[idx].start_time - current_time;
            current_time = process[idx].start_time;
        }
        if(burst_remaining[idx]-tq > 0) {
            burst_remaining[idx] -= tq;
            current_time += tq;
        }
        else {
            current_time += burst_remaining[idx];
            burst_remaining[idx] = 0;
            completed++;
            process[idx].completion_time = current_time;
            process[idx].turnaround_time = process[idx].completion_time - process[idx].arrival_time;
            process[idx].waiting_time = process[idx].turnaround_time - process[idx].burst_time;
            process[idx].response_time = process[idx].start_time - process[idx].arrival_time;
            total_turnaround_time += process[idx].turnaround_time;
            total_waiting_time += process[idx].waiting_time;
            total_response_time += process[idx].response_time;
        }
        for(int i = 1; i < n; i++) {
            if(burst_remaining[i] > 0 && process[i].arrival_time <= current_time && mark[i] == 0) {
                q.push(i);
                mark[i] = 1;
            }
        }
        if(burst_remaining[idx] > 0) {
            q.push(idx);
        }
        if(q.empty()) {
            for(int i = 1; i < n; i++) {
                if(burst_remaining[i] > 0) {
                    q.push(i);
                    mark[i] = 1;
                    break;
                }
            }
        }
    }
    avg_turnaround_time = (float) total_turnaround_time / n;
    avg_waiting_time = (float) total_waiting_time / n;
    avg_response_time = (float) total_response_time / n;
    throughput = float(n) / (process[n-1].completion_time - process[0].arrival_time);

    sort(process,process+n,compare2);
    cout<<endl<<endl;
    cout<<"Process    "<<"Arival Time\t"<<"Burst Time    "<<"Turnaround Time\t"<<"Waitning Time\t"<<"Response Time\t"<<"\n"<<endl;
    for(int i = 0; i < n; i++) {
        cout<<process[i].process_ID<<"\t   "<<process[i].arrival_time<<"\t\t"<<process[i].burst_time<<"\t\t"<<process[i].turnaround_time<<"\t\t"<<process[i].waiting_time<<"\t\t"<<process[i].response_time<<"\t"<<"\n"<<endl;
    }
    cout<<"Average Turnaround Time = "<<avg_turnaround_time<<endl;
    cout<<"Average Waiting Time =    "<<avg_waiting_time<<endl;
    cout<<"Average Response Time =   "<<avg_response_time<<endl;
    cout<<"Throughput =              "<<throughput<<endl;


}