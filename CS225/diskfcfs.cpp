#include <iostream>
#include <algorithm> 
#include <iomanip> 
using namespace std;


void FCFSprocess(int arr[], int head,int size)
{
    int seek_count = 0;
    int distance, cur_track;
 
    for (int i = 0; i < size; i++) {
        cur_track = arr[i];
        distance = abs(cur_track - head);
        seek_count += distance;
        head = cur_track;
    }
    cout << "The seaking sequence is ass followes : " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << "Total number of seek operations : "
         << seek_count << endl;
}
main (){
    int n,h;
    cout<<"Enter the number of processes: ";
    cin>>n;
    int *process = new int[n];
    for(int i = 0 ;i<n;i++) {
        cout<<"Enter the posssiton of process "<<i+1<<": ";
        cin>>process[i];
    }
    cout<<"Enter the possition of head : ";
    cin>>h;
    int i = 0,condition = 0;
    for(;i<n;i++){
        if(process[i]==h){ 
            condition = 1;  
            break;
        }
    }
    if(condition==0){
        cout<<"Head don't exists quitting !!!!! ";
        return 0;
    }
    FCFSprocess(process,h,n);
}