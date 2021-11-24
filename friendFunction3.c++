//vno.74 with object
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

    friend int add(total t);       //friend function, It is not Member function
};
void total :: get_number(void)
{
    cout<<"Enter any number: \n";
    cin>>a>>b;
}
int add(total t)       //function defination
{
    
    int temp;                               //ff=friend function
    temp=t.a+t.b; //accessing private data (a and b) from non member function (ff)
    return temp;
}
int main()
{
    total u;
    int result;
    u.get_number();
    result=add(u);  //u is passing to line 15 for t 
    cout<<"Total "<<result<<endl;
    return 0;
}