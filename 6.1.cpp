//write a program thatcan convert the Distance (m,cm) to meters measurement in float and vice versa. Make a class distance with two 
//data members, meter and centimeter. You can add function members as per your requirement.
#include<iostream>
using namespace std;
class Distance{
private:
float m, cm;
public:
Distance():m(0),cm(0){}
//Distance(float meter,float centimeter):m(meter),cm(cm){}
Distance(float m){
    this->m= m;
}
Distance(int m,int cm){
    this->m =static_cast<float>(cm);
    this->cm =static_cast<float>(cm);
}
operator float(){
    //cm=static_cast<float>(cm); m = static_cast<float> (m);
    cm/=100;
    m+=cm;
    return m;}
Distance conv(){
    Distance d;
    d.m = int(m)*100;
    d.cm = m *100 - (int(m)*100);
    return *this;
    }
void display(){
    cout<<m<<","<<cm<<endl;
}
};
int main(){
    Distance d1={10,10};Distance d2(10.10);
    float conv = d1;
    cout<<conv<<endl;
    Distance d = d2.conv();
    d.display();
    return 0;
}