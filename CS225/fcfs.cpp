#include <iostream>
#include <algorithm> 
#include <iomanip> 
using namespace std;

struct fcfsprocess {
    int process_ID;
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

bool compareID(fcfsprocess p1, fcfsprocess p2) 
{  
    return p1.process_ID < p2.process_ID;
}
void print_gantt_chart(struct fcfsprocess *p,int n){
    struct fcfsprocess *pr = p;
    int *ganttlist = new int[n];
    
    int min_ind=0;
    for(int j = 0;j<n;j++){
        int min = INT_MAX;
        for(int i = 0;i<n;i++){
            if(pr[i].start_time<min){
                min = pr[i].start_time<min;
                min_ind = i+1;
            }
        }
        ganttlist[j] = min_ind;
        pr[min_ind-1].start_time = INT_MAX;
    }
    cout<<"The gantt Chart :::::::"<<endl;
    cout<<"|| ";
    for(int i = 0 ;i<n;i++){
        if(i==n-1) cout<<ganttlist[i];
        else cout<<ganttlist[i]<<" -->";
    }
    cout<<" ||";

}
int main() {
    int n;
    float avg_turnaround_time;
    float avg_waiting_time;
    float avg_response_time;
    int total_turnaround_time = 0;
    int total_waiting_time = 0;
    int total_response_time = 0;
    int total_idle_time = 0;
    float throughput;

    cout<<"Enter the number of processes: ";
    cin>>n;
    struct fcfsprocess *process = new fcfsprocess[n];

    for(int i = 0; i < n; i++) {
        cout<<"Enter arrival time of process "<<i+1<<": ";
        cin>>process[i].arrival_time;
        cout<<"Enter burst time of process "<<i+1<<": ";
        cin>>process[i].burst_time;
        process[i].process_ID = i+1;
        cout<<endl;
    }
    

    sort(process,process+n,compareArrivalTime);

    for(int i = 0; i < n; i++) {
        process[i].start_time = (i == 0)?process[i].arrival_time:max(process[i-1].completion_time,process[i].arrival_time);
        process[i].completion_time = process[i].start_time + process[i].burst_time;
        process[i].turnaround_time = process[i].completion_time - process[i].arrival_time;
        process[i].waiting_time = process[i].turnaround_time - process[i].burst_time;
        process[i].response_time = process[i].start_time - process[i].arrival_time;

        total_turnaround_time += process[i].turnaround_time;
        total_waiting_time += process[i].waiting_time;
        total_response_time += process[i].response_time;
        total_idle_time += (i == 0)?(process[i].arrival_time):(process[i].start_time - process[i-1].completion_time);
    }

    avg_turnaround_time = (float) total_turnaround_time / n;
    avg_waiting_time = (float) total_waiting_time / n;
    avg_response_time = (float) total_response_time / n;
    
    throughput = float(n) / (process[n-1].completion_time - process[0].arrival_time);

    sort(process,process+n,compareID);

    cout<<endl;
   
    cout<<"Process    "<<"Arival Time\t"<<"Burst Time    "<<"Turnaround Time\t"<<"Waitning Time\t"<<"Response Time\t"<<"\n"<<endl;

    for(int i = 0; i < n; i++) {
        cout<<process[i].process_ID<<"\t   "<<process[i].arrival_time<<"\t\t"<<process[i].burst_time<<"\t\t"<<process[i].turnaround_time<<"\t\t"<<process[i].waiting_time<<"\t\t"<<process[i].response_time<<"\t"<<"\n"<<endl;
    }
    cout<<"Average Turnaround Time = "<<avg_turnaround_time<<endl;
    cout<<"Average Waiting Time = "<<avg_waiting_time<<endl;
    cout<<"Average Response Time = "<<avg_response_time<<endl;
    cout<<"Throughput = "<<throughput<<endl;
    print_gantt_chart(process,n);
}