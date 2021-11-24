//vno.72
//Returning object and function defination inside class
#include<iostream>
#include<conio.h>
using namespace std;
class matrix
{
    int item[3][3];
    public:
    void getdata(void);
    void putdata(void);
    matrix add(matrix m,matrix n)
{
    matrix h;
    for(int i=0;i<3;i++)        // here 11 to 22 class inside add function 
    {
        for(int j=0;j<3;j++)
        {
            h.item[i][j]=m.item[i][j]+n.item[i][j];
        }
    }
    return(h);
}
};
void matrix ::getdata(void)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>item[i][j];
        }
    }
}

void matrix ::putdata(void)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<item[i][j]<<"\t";
        }
        cout<<endl;
    }
}
int main()
{
    matrix a,b,c,result;
    cout<<"Matrix of A: \n";
    a.getdata();
    cout<<"Matrix of B: \n";
    b.getdata();
    cout<<"You Entered A: \n";
    a.putdata();
    cout<<"You Entered B: \n";
    b.putdata();
    result=c.add(a,b);
    cout<<"Addition: \n";
    result.putdata();
    return 0;
}