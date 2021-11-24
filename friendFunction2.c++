//vno.74
//Friend Function easy way
//Friend function is not a member of class function that why write anywhere up and down doesn't matter
#include<iostream>
#include<conio.h>
using namespace std;
class total
{
    int a,b;

    friend int add(void);       //friend function, It is not Member function
};

int add(void)       //function defination
{
    total t;
    int temp;      
    t.a=30;
    t.b=12;                                 //ff=friend function
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