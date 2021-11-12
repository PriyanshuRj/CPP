#include <iostream>
using namespace std;

template <class T>
class Vector
{
private:
    T x, y, z;

public:
    void init();
    void modify();
    void scaler_multiply();
    void display();
};

template <class T>
void Vector<T>::init()
{

    cout << "Enter the value for X : ";
    cin >> this->x;
    cout << "Enter the value for Y : ";
    cin >> this->y;
    cout << "Enter the value for Z : ";
    cin >> this->z;
}

template <class T>
void Vector<T>::modify()
{
    int ans;
    cout << "Do you want to modify value of X(1/0) : ";
    cin >> ans;
    if (ans == 1)
    {
        cout << "Enter the new value of X : ";
        cin >> this->x;
    }
    ans = 0;
    cout << "Do you want to modify value of Y(1/0) : ";
    cin >> ans;
    if (ans == 1)
    {
        cout << "Enter the new value of Y : ";
        cin >> this->y;
    }
    ans = 0;
    cout << "Do you want to modify value of Z(1/0) : ";
    cin >> ans;
    if (ans == 1)
    {
        cout << "Enter the new value of Z : ";
        cin >> this->z;
    }
}

template <class T>

void Vector<T>::scaler_multiply()
{
    T num;
    cout << "Enter the scaler factor you want to multiply with  : ";
    cin >> num;
    this->x = num * this->x;
    this->y = num * this->y;
    this->z = num * this->z;
}

template <class T>
void Vector<T>::display()
{

    cout << "Value of X : " << this->x << endl;
    cout << "Value of Y : " << this->y << endl;
    cout << "Value of Z : " << this->z << endl;
    cout << endl
         << "The vector is as follows : " << endl;
    cout << this->x << "i + " << this->y << "j + " << this->z << "k" << endl;
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
                    break;
                }

            } while (ch < 5);
        }
    }
    else
        cout << "Thank you for visiting " << endl;
    return 0;
}