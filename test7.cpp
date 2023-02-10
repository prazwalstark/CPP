#include<iostream>
using namespace std;
class test{
protected:
int a;int b;
public:
void setvalues(int x,int y){
    a=x;
    b=y;
}
virtual int area()=0;
};
class baby:public test{
    public:
    int area(){
        return (a*b);
    }
};
int main(){
test *t;
baby b;
t=&b;
t->setvalues(10,20);
cout<<t->area();
}