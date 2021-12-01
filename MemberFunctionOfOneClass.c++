//vno.74 
//Member function of one class can be friend function of another class
#include<iostream>
using namespace std;
class raja
{
private:
    int hii;
public:
    void disp();
};
class rani
{
    private:
    int bye;
    friend void raja :: disp(); //disp() of class raja is friend of class rani

};
void raja ::disp()
{
    raja hate;
    rani love;
    hate.hii=183;
    love.bye=143;
    cout<<"Raja Says: "<<hate.hii<<endl;
    cout<<"Rani Says: "<<love.bye<<endl;

}
int main()
{
    raja what;
    what.disp();
    return 0;
}