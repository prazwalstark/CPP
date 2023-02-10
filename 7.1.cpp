#include<iostream>
using namespace std;
const float pi = 3.14;
class Shape{
    //protected:
    //char* name= new char[20];
    //float ar;
    public:
    Shape()
    {
        cout<<"Constructor from base gets called!"<<endl;
    }
    
    virtual float area()
    {
        cout<<"Call from area function of base"<<endl;
        return 0;
    }
    virtual const char* display()
    {
        cout<<"Call from Display function of base"<<endl;
        return 0;
    }

    //Destructor
    virtual ~Shape()
    {
        cout<<"Destructor from base is called"<<endl;
        //delete []name;
    }
};
class Circle : public Shape{
protected:
    char* name;//= new char[20];
    float ar;
    float r;
public:
    Circle():r(0)
    {
        cout<<"Constructor from derived gets called!"<<endl;
    }
    //Constructor for value passed through
    Circle(float radius):r(radius)
    {
        cout<<"Constructor from derived gets called!"<<endl;
    }
    float area()
    {
        ar = pi*r*r;
        return ar;
    }
    const char* display()
    {
        name =const_cast<char*> ("Circle");
        return name;
    }
    ~Circle()
    {
        cout<<"Destructor from derived class is called"<<endl;
        delete []name;
    }
};
// class rectangle : public shape{
// public:
// ~rectangle(){}
// ~rectangle(){}
// void area(){}
// };
// class trapezium : public shape{
// public:
// trapezium(){}
// ~trapezium(){}
// void area(){}
// };
int main(){
    const char* name; //= new char[20];
    float area;
    Shape* s1;
    s1 = new Circle(10);
    name = s1->display();
    area = s1->area();
    cout<<name<<endl;
    cout<<area<<endl;
    delete s1;
    //delete []name;
    return 0;
}