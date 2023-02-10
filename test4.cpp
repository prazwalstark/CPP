#include<iostream>
#include<cmath>
using namespace std;
class polar{
    private:
        float r; float t;
    public:
        polar(float r1=0, float t1=0):r(r1),t(t1){}
        void display()
        {
            cout<<r<<endl<<t<<endl;
        }
};
class cart{
    private:
        float x; float y;
    public:
        cart(float x1, float y1):x(x1),y(y1){}
        cart():x(0),y(0){}
        operator polar()
        {
            float a = sqrt((x*x)+(y*y));
            float b = atan(y/x);
            return polar(a,b);
        }
};

int main(){
    float x,y;
    cout<<"Enter the polar coordinates";
    cin>>x>>y;
    cart c(x,y);
    polar p;
    p = c;
    p.display();
}