#include<iostream>
using namespace std;
class Staff{
    private:
        int code;
        string name;
    public:
     Staff(int c,string n){
         this->code = c;
         this-> name = n;
     }
     void display(){
         cout<<"The name of the  member is : "<<name<<endl;
         cout<<"The code of the  member is : "<<code<<endl;
     }
};

class Teacher : public Staff{
    private:
        string subject;
        string publication[10];
        string high_edu;
        string high_pro;
        int publen;
    public:
        Teacher(string subject,string *publication,int code, string name,int publen,string edu,string pro) : Staff(code,name) {
            this->subject = subject;
            this->publen = publen;
            this->high_edu = edu;
            this->high_pro = pro;
            for(int i = 0 ; i< publen;i++)
                this->publication[i] = publication[i];
        }
        void display(){
            Staff::display();
            cout<<"The subject Teacher teaches is : "<<subject<<endl;
            cout<<"The Teacher has "<<publen<<" publication "<<endl;
            for(int i=0;i<publen;i++)
                cout<<publication[i]<<endl;
            cout<<"The highest education in general studies is : "<<high_edu<<endl;
            cout<<"The highest professional qualification is : "<<high_pro<<endl;
        }
};
class Typist : public Staff{
    private:
        float speed;
    public:
        Typist(float speed,int code, string name) : Staff(code,name){
            this->speed = speed;
            
        }
        void display(){
            Staff::display();
            cout<<"The subject Typist has a typing speed of   : "<<speed<<endl;
           
        }
        
};
class Officer : public Staff{
    private :
        char grade;
        string high_edu;
        string high_pro;
    public:
        Officer(char grade,int code, string name,string edu,string pro) : Staff(code,name){
            this->grade = grade;
            this->high_edu = edu;
            this->high_pro = pro;
        }
        void display(){
            Staff::display();
            cout<<"The subject officer has a grade of  : "<<grade<<endl;
            cout<<"The highest education in general studies is : "<<high_edu<<endl;
            cout<<"The highest professional qualification is : "<<high_pro<<endl;
           
        }
};
class Regular : public Typist{
    public:
        Regular(float speed,int code, string name) : Typist(speed,code,name){}
        void display(){
            Typist::display();
            
           
        }
};
class Casual : public Typist{
    private:
        float daily_wages;
    public:
        Casual(float wage,float speed,int code, string name) : Typist(speed,code,name){
            this->daily_wages = wage;
        }
        void display(){
            Typist::display();
            cout<<"The casual typist has a daily_wages : "<<daily_wages<<endl;
        }
};



int main(){
    cout<<"For a regular staff member"<<endl;
    cout<<"Enter the code : ";
    int code;
    cin>>code;
    string name;
    cout<<"Enter the name : ";
    cin>>name;
    Staff s1(code,name);
    s1.display();
    cout<<endl;
    cout<<"For a Teacher member"<<endl;

    cout<<"Enter the code : ";
    cin>>code;
    cout<<"Enter the name : ";
    cin>>name;
    cout<<"Enter the subject this teacher teaches : ";
    string sub,edu,pro;
    cin>>sub;
    int num ;
    cout<<"Enter the no. of publication :";
    cin>>num;
    string *publication = new string[num];
    for(int i =0 ;i<num;i++) {
        cout<<"Enter the publication name : ";
        cin>>publication[i];
    }
    cout<<"Enter the highest education in general studies : ";
    cin>>edu;
    cout<<"Enter the highest professionaL qualification : ";
    cin>>pro;

    Teacher t1(sub,publication,code,name,num,edu,pro);
    cout<<endl;
    t1.display();
    cout<<endl;
    cout<<"For a Typist member"<<endl;



    cout<<"Enter the code : ";
    cin>>code;
    cout<<"Enter the name : ";
    cin>>name;
    float speed ;
    cout<<"Enter the type speed : ";
    cin>>speed;
    Typist t2(speed,code,name);
    cout<<endl;
    t2.display();
    cout<<endl;
    cout<<"For officer "<<endl;
    char grd;
    cout<<"Enter the code : ";
    cin>>code;
    cout<<"Enter the name : ";
    cin>>name;
    cout<<"Enter the grade : ";
    cin>>grd;
    cout<<"Enter the highest education in general studies : ";
    cin>>edu;
    cout<<"Enter the highest professionaL qualification : ";
    cin>>pro;
    

    Officer o1(grd,code,name,edu,pro);
    cout<<endl;
    

    o1.display();
    cout<<endl;

    cout<<"For a Regular typist"<<endl;
    cout<<endl;
    cout<<"Enter the code : ";
    cin>>code;
    cout<<"Enter the name : ";
    cin>>name;
    
    cout<<"Enter the type speed : ";
    cin>>speed;
    Regular r1(speed,code,name);
    cout<<endl;

    r1.display();
    cout<<endl;
    cout<<"For a Casual typist"<<endl;

    cout<<endl;
    cout<<"Enter the code : ";
    cin>>code;
    cout<<"Enter the name : ";
    cin>>name;
    
    cout<<"Enter the type speed : ";
    cin>>speed;
    int daily_wages;
    cout<<"Enter the daily wage for the casual typist : ";
    cin>>daily_wages;
    Casual c1(daily_wages,speed,code,name);
    cout<<endl;
    c1.display();
    return 0;
}