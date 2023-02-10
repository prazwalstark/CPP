#include<iostream>
using namespace std;
class base{
protected:
float x;
float y;
public:
void getdata(){
    cout<<"Enter the complex coordinatees (a+ib):";
    cin>>x>>y;
}
float getx(){
    return x;
}
float gety(){
    return y;
}
};
class derive:public base{
// protected:
// float x;
// float y;
public:
void calculation(base b){
    x =x + b.getx();
    y =y + b.gety();
}
void display(){
    cout<<x<<"+i"<<y<<endl;
}
};
int main(){
base b;
derive d;
d.getdata();
b.getdata();
d.calculation(b);
d.display();
}