//vno.64
#include<iostream>
#include<conio.h>

using namespace std;
class Company
{
    char id[10];
    char name[20];
    char dep[20];
public:
    void getdata(void);
    void display(void);
};
void Company :: getdata(void)
{
    cout<<"\nEnter Name: ";
    cin>>name;
    cout<<"Id No.: ";
    cin>>id;
    cout<<"Enter Department: ";
    cin>>dep;
}
void Company ::display(void)
{
    cout<<" ID: "<<id<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Department: "<<dep<<endl;
    cout<<"Press Enter To Continue...."<<endl;
    getch();
}
int main()
{
    Company manager[3],teamleader[5];
    for (int i=0;i<3;i++)
    {
        cout<<"\nEnter Detsils of Manager: "<<i+1; 
        manager[i].getdata();
    }
    for(int i=0;i<5;i++)
    {
        cout<<"\nEnter Details of Teamleader: "<<i+1;
        teamleader[i].getdata();
    }
    cout<<endl;
    for (int i=0;i<3;i++)
    {
        cout<<"Detsils of Manager: "<<i+1; 
        manager[i].display();
    }
    for (int i=0;i<5;i++)
    {
        cout<<"Detsils of Teamleader: "<<i+1; 
        teamleader[i].display();
    }
    return 0;

}