#include<iostream>
using namespace std;
template<class T>
class base{
protected:
T data;
public:
base(T d):data(d){}
};
template<class T>
class derived:public base<int>
{
protected:
T data;
public:
derived(int num, T b):base<int>(num), data(b){}
void display(){
    cout<<base::data;
    cout<<endl;
    cout<<data;
}
};
int main(){
    derived d(50,20.5);
    d.display();
    return 0;
}