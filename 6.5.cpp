#include<iostream>
using namespace std;
class complexnum{
protected:
int r;
int i;
public:
complexnum(){}
complexnum(int real,int img):r(real),i(img){}
void get_data(){
    cout<<"Enter real part:"<<endl;
    cin>>r;
    cout<<"Enter img part:"<<endl;
    cin>>i;
    cout<<endl;
}
};
class complexnum2:public complexnum{
protected:
int r1;
int i1;
public:
complexnum2(){}
complexnum2(int real,int img):r1(real),i1(img){}
void get_data(){
    complexnum::get_data();
    cout<<"Enter real1 part:"<<endl;
    cin>>r1;
    cout<<"Enter img1 part:"<<endl;
    cin>>i1;
    cout<<endl;
}
void add(){
    cout<<"( "<<r+r1<<" + i"<<i+i1<<" )"<<endl;
}
friend class complexnum3;
};
class complexnum3{
private:
int r2;int i2;
public:
void get_data(){
    //complexnum::get_data();
    cout<<"Enter real2 part:"<<endl;
    cin>>r2;
    cout<<"Enter img2 part:"<<endl;
    cin>>i2;
    cout<<endl;
}
void sub(complexnum2 a){
    cout<<"( "<<(a.r-r2)<<" + i"<<a.i-i2<<" )"<<endl;
}
};
int main(){
    complexnum2 c2;
    c2.get_data();
    c2.add();
    complexnum3 c3;
    complexnum2 c22;
    c22.complexnum::get_data();
    c3.get_data();
    c3.sub(c22);
    return 0;
}