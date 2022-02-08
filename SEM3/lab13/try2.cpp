#include<iostream>
using namespace std;
template<class T>
class Vector
{
    T vector[200];
    int size;
   
    public:
        void init();
        void modify();
        void scaler_multiply();
        void display();
};

template<class T>
void Vector<T>::init()
{
    cout<<"Enter the sizer of the vector : ";
    cin>>this->size;
    for(int i = 0 ;i<size;i++){
        cout<<"Enter the value at  "<<i+1<<"th place of vector : ";
        cin>>this->vector[i];
    }
}

template<class T>
void Vector<T>::modify()
{
    int index;
    T newval;
    cout<<"\nEnter index for modificaion :";
    cin>>index;
    cout<<"\nEnter new value :";
    cin>>newval;
    vector[index]=newval;
}

template<class T>
void Vector<T>::scaler_multiply()
{
    int i;
    int scalarval;
    cout<<"\nEnter scalar value for multiplication : ";
    cin>>scalarval;
    for(i=0;i<size;i++)
    vector[i]=vector[i]*scalarval;
}

template<class T>
void Vector<T>::display()
{
    int i;
   
    cout<<"\nSize of vector is :"<<size;
    cout<<"\nElements in vector are :";
    cout<<"[";
    for(i=0;i<size;i++)
    {
        cout<<vector[i]<<" ";
    }
    cout<<"]"<<endl;
}

int main()
{
    cout << "Do you want to create a try the program (1/0) : ";
    int ans = 0;
    cin >> ans;
    if (ans == 1)
    {
        int choice;
        cout << "\nSelect the data type : " << endl;
        cout << "1 for intiger\n2 for float\n3 for long\n4 for long long\n5 for double\n";
        cout << "Your choice : ";
        cin >> choice;
        if (choice == 1)
        {
            Vector<int> object;
            int ch;
            do
            {
                cout<<"Select of of the following"<<endl;
                cout << "\n\n1 for creating a vector\n2 for modifing the vector\n3 for multiplying with scaler\n4 for display\nelse to exit\n\n";
                cout<<"Enter your choice : ";
                cin >> ch;
                switch (ch)
                {
                case (1):
                    object.init();
                    break;
                case (2):
                    object.modify();
                    break;
                case (3):
                    object.scaler_multiply();
                    break;
                case (4):
                    object.display();
                    break;
                default:
                    ch = 10;
                    break;
                }

            } while (ch < 5);
        }
        else if (choice == 2)
        {
            Vector<float> object;
            int ch;
            do
            {
                cout<<"\nSelect one option :\n";
                cout << "1 for creating a vector\n2 for modifing the vector\n3 for multiplying with scaler\n4 for display\nelse to exit\n";
                cin >> ch;
                switch (ch)
                {
                case (1):
                    object.init();
                    break;
                case (2):
                    object.modify();
                    break;
                case (3):
                    object.scaler_multiply();
                    break;
                case (4):
                    object.display();
                    break;
                default:
                    ch = 10;
                    break;
                }

            } while (ch < 5);
        }
        else if (choice == 3)
        {
            Vector<long> object;
            int ch;
            do
            {
                cout << "\n1 for creating a vector\n2 for modifing the vector\n3 for multiplying with scaler\n4 for display\nelse to exit\n";
                cin >> ch;
                switch (ch)
                {
                case (1):
                    object.init();
                    break;
                case (2):
                    object.modify();
                    break;
                case (3):
                    object.scaler_multiply();
                    break;
                case (4):
                    object.display();
                    break;
                default:
                    ch = 10;
                    break;
                }

            } while (ch < 5);
        }
        else if (choice == 4)
        {
            Vector<long long> object;
            int ch;
            do
            {
                cout << "\n1 for creating a vector\n2 for modifing the vector\n3 for multiplying with scaler\n4 for display\nelse to exit\n";
                cin >> ch;
                switch (ch)
                {
                case (1):
                    object.init();
                    break;
                case (2):
                    object.modify();
                    break;
                case (3):
                    object.scaler_multiply();
                    break;
                case (4):
                    object.display();
                    break;
                default:
                    ch = 10;
                    break;
                }

            } while (ch < 5);
        }
        else if (choice == 5)
        {
            Vector<double> object;
            int ch;
            do
            {
                cout << "\n1 for creating a vector\n2 for modifing the vector\n3 for multiplying with scaler\n4 for display\nelse to exit\n";
                cin >> ch;
                switch (ch)
                {
                case (1):
                    object.init();
                    break;
                case (2):
                    object.modify();
                    break;
                case (3):
                    object.scaler_multiply();
                    break;
                case (4):
                    object.display();
                    break;
                default:
                    ch = 10;
                    cout << "Thank you for visiting " << endl;

                    break;
                }

            } while (ch < 5);
        }
    }
    else
        cout << "Thank you for visiting " << endl;
    return 0;
}