//vno.63
#include<iostream>
#include<conio.h>
#define size 3
using namespace std;
class Student
{
    int roll;
    char name[20];
public:
    void getdata(void);
    void display(void);
};
void Student :: getdata(void)
{
    cout<<"\nEnter Name: ";
    cin>>name;
    cout<<"Roll No.: ";
    cin>>roll;
}
void Student ::display(void)
{
    cout<<" name: "<<name<<endl;
    cout<<"Roll: "<<roll<<endl;
    cout<<"Press Enter To Continue...."<<endl;
    getch();
}
int main()
{
    Student st[size];
    for (int i=0;i<size;i++)
    {
        cout<<"\nEnter Detsils of Student: "<<i+1; 
        st[i].getdata();
    }
    cout<<endl;
    for (int i=0;i<size;i++)
    {
        cout<<"Details of Student: "<<i+1;
        st[i].display();
    }
    return 0;

}