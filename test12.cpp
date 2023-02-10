#include<iostream>
using namespace std;
int main(){
    cout.width(10);
    cout<<"PRAZWAL";
    cout.fill('_');
    cout.width(10);
    cout<<"D STARK";
    cout.precision(4);
    cout.setf(ios::hex,ios::basefield);
    cout.setf(ios::showbase);
    cout.setf(ios::showpos);
    cout<<10;
    cout.flush();
    return 0;
    
}