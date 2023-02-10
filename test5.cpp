#include<iostream>
using namespace std;
class person{
protected:
char name[15];
int age;
int so=10;
public:
void getdata(){
    cin>>name;
    cin>>age;
}
void showdata(){
    cout<<name<<endl;
    cout<<age<<endl;
}
};
class student:public person{
protected:
int roll;
public:
void getdata(){
    person::getdata();
    cin>>roll;
}
void showdata(){
    person::showdata();
    cout<<roll;
}
};
class teacher:protected person{
protected:
char id[10];
public:
void getdata(){
    person::getdata();
    cin>>id;
}
void showdata(){
    person::showdata();
    cout<<id<<endl;
}
};
int main(){
    student s;
    teacher t;
    s.getdata();
    s.person::showdata();
    s.showdata();
    t.getdata();
    t.showdata();
    return 0;
}