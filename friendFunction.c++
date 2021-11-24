//vno.74
//Friend Function
//Friend function is not a member of class function that why write anywhere up and down doesn't matter
#include<iostream>
#include<conio.h>
using namespace std;
class total
{
    int a,b;
public:
    void get_number(void);
    friend int add(void);       //friend function, It is not Member function
};
void total :: get_number(void)
{
    cout<<"Enter any number: \n";
    cin>>a>>b;
}
int add(void)       //function defination
{
    total t;
    int temp;
    t.get_number();                                         //ff=friend function
    temp=t.a+t.b; //accessing private data (a and b) from non member function (ff)
    return temp;
}
int main()
{
    int result;
    result=add();
    cout<<"Total "<<result<<endl;
    return 0;
}