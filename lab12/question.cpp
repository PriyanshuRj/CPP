#include<iostream>
#include<map>
using namespace std;


int main(){
    map<pair<string, int>, int> cars;
    int number = 0;
    cout<<"Enter the No. of cars you want to add in the table : ";
    cin>>number;
    for(int i=0;i<number;i++){
        string model = "";
        int cost,unit_sold;
        cout<<"Enter the model for the "<<i+1<<"th car :";
        cin>>model;
        cout<<"Enter the cost of the model : ";
        cin>>cost;
        cout<<"Enter the No. of units sold : ";
        cin>>unit_sold;
        cars[pair(model, cost)] = unit_sold;

    }
    cout<<endl;
    cout<<"\n\n\t\tIntractive Display ::::::::::\n ";
    int ch =0;
    do{
        cout<<"\nPress 1 for Displaying the details for a particular model\nelse to exit\n\n";
        cout<<"Enter choice : ";
        cin>>ch;
        if(ch==1){
            cout<<"Enter the name for the model you want to display details of\n";
            string model;
            cin>>model;
            int cost;
            cout<<"Enter the cost of the model : ";
            cin>>cost;
            if(!cars.count(pair(model,cost))){
                cout<<"Sorry you entered wrong model name\n";
            }
            else{
                cout<<"The no. of cars sold for model "<<model<<" : "<<cars[pair(model,cost)]<<endl;
                cout<<"The total cost is : "<<cost*cars[pair(model,cost)]<<endl;

            }


        }
        else{
            cout<<"Thanks for visiting !!"<<endl;
            break;
        }
    }while(ch!=1);
    return 0;
}