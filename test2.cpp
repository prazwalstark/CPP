#include<iostream>
using namespace std;
class complex{
    private:
    float real,imag;
    public:
    complex():real(0),imag(0){}
    complex(float reall,float imagine):real(reall),imag(imagine){} 
    friend complex operator -(complex c1, complex c2);
    void display(){
        cout<<real;
        if (imag<0)
        cout<<"-i"<<imag*(-1)<<endl;
        else
        cout<<"+i"<<imag<<endl;
    }
};
complex operator -(complex c1, complex c2){
    complex c;
    c.real = c1.real - c2.real;
    c.imag = c1.imag - c2.imag;
    return c;
}
int main(){
    float n1,n2,n3,n4;
    cout<<"Enter Real and Imaginary part of C N 1:"<<endl;
    cin>>n1>>n2;
    cout<<"Enter Real and Imaginary part of C N 2:"<<endl;
    cin>>n3>>n4;
    complex c1(n1,n2),c2(n3,n4),c3;
    c3 = c1 - c2;
    c3.display();
    return 0;
}