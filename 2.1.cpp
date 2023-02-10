/*Write a program using the function 
overloading that converts feet to inches.
The extra thing is that this is about return as well as pass by reference.
*/
#include<iostream>
using namespace std;

class Conversion{
    public:
        int& conv(const int value, int &inches){
            inches = value*12;
            return inches;
        }
};
int main(){
    Conversion c1;
    int inc=0,value;
    cin>>value;
    cout<<c1.conv(value,inc);
    return 0;
}