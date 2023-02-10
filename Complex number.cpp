#include<iostream>
using namespace std;
class cn_multi{
    private:
    int real; int img;
    public:
    cn_multi(int re, int im){real = re; img = im;}
    cn_multi(){real = 0; img = 0;}
    cn_multi mul(cn_multi &d2){
        cn_multi d;
        d.real = (real * d2.real)-(img * d2.img);
        d.img  =(real*d2.img)+ (img * d2.real);
        return d; 
    }
    void display(){
        cout<<real<<" + i"<<img;
    }
};
int main(){
    cn_multi d1(1,2),d2(2,3),d3;
    d3=d1.mul(d2);
    d3.display();
    return 0;
}