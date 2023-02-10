#include<iostream>
using namespace std;
class base{
    protected:
    int data;
    public:
    base(int n):data(n){}
    void display(){
        cout<<"Data from Base:"<<data;
    }
};
template<class T>
class derived: public base{
protected:
T data;
public:
derived(int,T);
void display();
};
template<class T>
derived<T>::derived(int a, T b):base(a),data(b){}
template<class T>
void derived<T>::display(){
    base::display();
    cout<<endl<<"Data from derived:"<<data;
}
int main(){
    derived d(5,7.9);
    d.display();
    return 0;
}