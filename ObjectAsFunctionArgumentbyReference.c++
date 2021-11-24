//vno.68
//Object as Function Argument pass by Reference
#include<iostream>
#include<conio.h>
using namespace std;
class total
{
    int n;
public:
    void getdata(void);
    void putdata(void);
    void add(total&,total&); //here ampercent is used for reference
};
void total ::getdata(void)
{
    cout<<"Enter Numbers: ";
    cin>>n;
}
void total ::putdata(void)
{
    cout<<n<<endl;
}
void total ::add(total &x, total &y)
{
    x.n=10; //anything change here to reflect result.add(r,s)
    y.n=20;
    n=x.n + y.n;
}
int main()
{
    total r,s, result;
    r.getdata();
    s.getdata();
    result.add(r,s); // Here r,s is object and pass to (total &x,total &y)
    cout<<"\nValue Of A: \n";
    r.putdata();
    cout<<"\nValue Of B: \n";
    s.putdata();
    cout<<"\nAddition: \n";
    result.putdata();

}