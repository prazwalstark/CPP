#include<iostream>
using namespace std;
class Polygon{
// protected:
// float h,b;
public:
Polygon(){//float a=0,float b=0):h(a),b(b
    cout<<endl<<"Base Constructor Called."<<endl;
}
// virtual float area()=0;
// virtual void display()=0;
virtual ~Polygon(){
    cout<<endl<<"Base Destructor Called."<<endl;
}
};
class Rect:public Polygon{
public:
Rect(){//float a=0,float c=0
    // h=a;b=c;
    cout<<endl<<"Derived1 Constructor Called."<<endl;
}
// float area(){
// return(h*b);
// }
// void display(){
//     cout<<"The area is:"<<area();
// }
~Rect(){
    cout<<endl<<"Derived1 Destructor Called."<<endl;
}
};
class Triangle:public Polygon{
public:
Triangle(){//float a=0,float c=0
    // h=a;
    // b=c;
    cout<<endl<<"Derived2 Constructor Called."<<endl;
}
// float area(){
// return((h*b)/2);
// }
// void display(){
//     cout<<"The area is:"<<area();
// }
~Triangle(){
    cout<<endl<<"Derived2 Destructor Called."<<endl;
}
};
int main(){
    Polygon *p[2];
    Rect r;//(10,50)
    Triangle t;//(60,100)
    p[0]=&r;
    p[1]=&t;
    // for (int i= 0; i<2;i++)
    // p[i]->display();
    delete []p;
    return 0;
}

