#include<iostream>
using namespace std;
class vehicle{
    protected:
    char type[50];
    long price;
    public:
    void getdat(){
        cout<<"Enter the type of Vehicle:";
        cin>>type;
        cout<<"Enter the price of vehicle:";
        cin>>price;
    }
};
class car{
    protected:
    char name[50];
    char model[50];
    public:
    void getdata(){
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the model:";
        cin>>model;
    }
};
class electric:public vehicle,public car{
public:
void display(){
    cout<<"Type: "<<type<<endl;
    cout<<"Price: "<<price<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Model: "<<model<<endl;
}
};
int main(){
    electric e;
    e.vehicle::getdat();
    e.car::getdata();
    e.display();
    return 0;
}