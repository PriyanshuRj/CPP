#include<bits/stdc++.h>
using namespace std;

vector<int> process, burst_time, waiting_time, turn_around_time;

void waitingTime(int length){
    waiting_time.push_back(0);
    for(int i = 1; i <length; i++){
        waiting_time.push_back(waiting_time[i-1] + burst_time[i-1]);
    }
}

void turnAroundTime(int length){
    turn_around_time.push_back(burst_time[0]);
    for(int i = 1; i < length; i++){
        turn_around_time.push_back(turn_around_time[i-1] + burst_time[i]);
    }
}


int main(){
    int n;
    cout<<"Enter the length of the process array :"<<endl;
    cin >> n;
    
    cout<<"Enter the inputs for processes : "<<endl;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        process.push_back(num);
    }
    cout<<"Enter the inputs for burst time : "<<endl;

    for(int i = 0; i < n; i++){
         int num;
        cin >> num;
        burst_time.push_back(num);
    }

    waitingTime(n);
    turnAroundTime(n);
    
    cout << "Process" << "\t\t" << "Burst Time" << "\t" << "Waiting Time" << "\t" << "Turn Around Time" << '\n';
    for(int i=0; i<n; i++){
        cout << process[i] << "\t\t" << burst_time[i] << "\t\t" <<  waiting_time[i] << "\t\t" << turn_around_time[i] << '\n';
    }

}