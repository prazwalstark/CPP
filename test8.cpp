#include<iostream>
#include<typeinfo.h>
using namespace std;
class base{
    virtual void fun1(){}
};
class derive:public base{};
class deriv:public base{};
int main(){
    base *pba, ba,*pba2;
    pba2=&ba;
    cout<<typeid(*pba2).name()<<endl;
    derive *pdev,dev;
    pba = &dev;
    // if (pdev = dynamic_cast<derive*>(pba))
    // cout<<" Of type derive";
    // else 
    // cout<<"Notof type derive";
    // deriv pde;
    // pba = &pde;
    // if (pdev = dynamic_cast<derive*>(pba))
    // cout<<endl<<" Of type derive";
    // else 
    // cout<<endl<<"Not of type derive";
    cout<<typeid(*pba).name()<<endl;
    if (typeid(*pba)==typeid(*pba2))
    cout<<"Both are of same type"<<endl;
    else 
    cout<<"Both are of different type";
    //cout<<typeid(*pdev).name()<<endl;
    return 0;
}