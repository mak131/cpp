//vno.61
#include<iostream>
#include<conio.h>
#define size 3
using namespace std;
class student
{
    int id[size];
    char name[size][20];
public:
    void getdata(void);
    void display(void);
};
void student ::getdata(void)
{
    for (int i=0;i<size;i++)
    {
        cout<<"\nEnter name: ";
        cin>>name[i];
        cout<<"Enter Id no.: ";
        cin>>id[i];
    }
}
void student ::display(void)
{
    for (int i=0;i<size;i++)
    {
        cout<<"\nName: "<<name[i]<<endl;
        cout<<"ID : "<<id[i]<<endl;
        getch();
    }
}
int main()
{
    student st;
    st.getdata();
    st.display();
    return 0;
}