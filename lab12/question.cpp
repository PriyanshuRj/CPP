#include<iostream>
#include<map>
#include <utility>
using namespace std;


int main(){
    map<pair<string, int>, int> cars;
    int number = 0;
    cout<<"Enter the No. of cars you want to add in the table : ";
    cin>>number;
    for(int i=0;i<number;i++){
        string model = "";
        int cost,unit_sold;
        cout<<"\nEnter the model for the "<<i+1<<"th car :";
        cin>>model;
        cout<<"Enter the cost of the model : ";
        cin>>cost;
        cout<<"Enter the No. of units sold : ";
        cin>>unit_sold;
        pair<string,int>  car(model,cost);
        
        cars[car] = unit_sold;

    }
    cout<<endl;
    cout<<"\n\n :::::::::: Intractive Display ::::::::::\n ";
    int ch =0;
    do{
        cout<<"\nPress 1 for Displaying the details for a particular model\nelse to exit\n\n";
        cout<<"Enter choice : ";
        cin>>ch;
        if(ch==1){
            cout<<"Enter the name for the model you want to display details of : ";
            string model;
            cin>>model;
            int cost;
            cout<<"Enter the cost of the model : ";
            cin>>cost;
            pair<string,int>  car(model,cost);

            if(!cars.count(car)){
                cout<<"Sorry you entered wrong model name or cost\n";
            }
            else{
                pair<string,int>  car(model,cost);

                cout<<"The no. of cars sold for model "<<model<<" : "<<cars[car]<<endl;
                long long total_cost = cost*cars[car];
                cout<<"The total cost is : "<<total_cost<<endl;

            }


        }
        else{
            cout<<"Thanks for visiting !!"<<endl;
            break;
        }
    }while(ch==1);
    return 0;
}