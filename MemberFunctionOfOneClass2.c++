//vno.75 
//operate on objects of two different class using friend function
#include<iostream>
using namespace std;
class rani; //forward decleration
class raja
{
    int a;
public:
    void getdata(void)
    {
        cout<<"Enter Raja's Total Marks: "<<endl;
        cin>>a;
    }
    friend void add(raja m,rani n);
};
class rani
{
    int b;
    public:
    void getdata(void)
    {
        cout<<"Enter Rani's Total Marks: "<<endl;
        cin>>b;
    }
    friend void add(raja m,rani n);
};
void add(raja m,rani n)
{
    cout<<"Marks: "<<m.a+n.b<<endl;
}
int main()
{
    raja k;
    rani v;
    k.getdata();
    v.getdata();
    add(k,v);
}