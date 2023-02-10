#include<iostream>
using namespace std;
class animal{
    public:
    virtual void func1(){}
};
class cow:public animal{
public:
//void func1(){}
};
int main(){
    animal *pan,*pan2,an;
    cow *pco,co;
    pan = &co;
    pan2 =&an;
    if(pco = reinterpret_cast<cow*>(pan))
    cout<<"Of type cow"<<endl;
    else 
    cout<<"of not type cow"<<endl;

    if(pan==pan2)
    cout<<"Of same type"<<endl;
    else 
    cout<<"of not same type"<<endl;

    cout<<typeid(*pan).name()<<endl;
    cout<<typeid(*pan2).name()<<endl;
    // if(typeid(*pan)==typeid(*pco))
    // cout<<"Of type cow"<<endl;
    // else 
    // cout<<"of not type cow"<<endl;
    return 0;
}