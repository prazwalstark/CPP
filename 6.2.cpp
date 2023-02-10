#include<iostream>
using namespace std;
class A;
class B{
private:
float fin;
public:
B(){fin = 0;};
B(float fin){
    this->fin = fin;
}
float mcm(){return fin;}
void display(){
    cout<<fin<<"ft"<<endl;
}
};
class A{
private:
float mcm;
public:
A(){this->mcm =0;}
A(float mcm){
    this->mcm = mcm;}
operator B(){
float con = mcm * (3.28084);
return B(con);
}
A(B b){
    mcm = b.mcm() * (0.3048);
}void display(){
    cout<<mcm<<"m"<<endl;
}
};
int main(){
B b1;
A a1(10);
b1=a1;
//a1=b1;
b1.display();
B b2(10);A a2;
a2 = b2;
a2.display();
return 0;
}