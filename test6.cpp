#include<iostream>
using namespace std;
class root{
    protected:
    int a,b;
    int c =50;
    public:
    void setvalues(int x, int y){
        a=x;b=y;
    }
    virtual int area(){return 0;}
    //root(int n):num(){}
    void showdata(int n){
        cout<<n;
    }
};
class p1: public root{
    public:
    int area(){
        cout<<c;
        return (a*b);
    }
    showdata(int n){
        cout<<15;
    }
};
class p2: public root{};
class child:public p1,public p2
{
public:
void showdata()
{
    p2::showdata(10);
}
};
int main(){
    child c1;
    c1.showdata();
    p1 p;
    root *r1;
    r1 = &p;
    r1->showdata(16);
    r1->setvalues(15,16);
    cout<<endl<<r1->area();
    return 0;
}