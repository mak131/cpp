//vno.78 
//All The Member Function Of One Class as the friend of another class
#include<iostream>
using namespace std;
class dell;   //forward class
class hp
{
    int product;
public:
    void getdata(void)
    {
        cout<<"Enter Any Number: "<<endl;
        cin>>product;
    }
    friend dell;    //friend class
};
class dell
{
    public:
    void lappy (hp a) //accessing hp class, private data in dell class
    {
        cout<<"\nLaptop    = "<<a.product<<endl;//productIsPrivate data of hp class
    }
    void keyboard(hp);  
};
void dell ::keyboard(hp m)
{
    cout<<  "Keyboard  = " <<m.product<<endl;
}
int main()
{
    hp x;
    dell y;
    x.getdata();
    y.lappy(x);
    y.keyboard(x);
    return 0;

}