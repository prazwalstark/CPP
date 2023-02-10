#include<iostream>
using namespace std;
class student{
    protected:
    long n;
    public:
    virtual void getdata()=0;
    virtual void showdata()=0;
};
class eng:public student{
    public:
    void getdata(){
        cout<<"Enter the number of students in ENGINEERING:";
        cin>>n;
    }
    void showdata(){
        cout<<"The number of students in ENGINEERING is : "<<n<<endl;
    }
};
class med:public student{
    public:
    void getdata(){
        cout<<"Enter the number of students in MEDICAL:";
        cin>>n;
    }
    void showdata(){
        cout<<"The number of students in MEDICAL is : "<<n<<endl;
    }
};
class sci:public student{
    public:
    void getdata(){
        cout<<"Enter the number of students in SCIENCE:";
        cin>>n;
    }
    void showdata(){
        cout<<"The number of students in SCIENCE is : "<<n<<endl;
    }
};
int main(){
    student *s[3];
    eng e;
    med m;
    sci si;
    s[0]= &e;
    s[1]= &m;
    s[2]= &si;
    for(int i = 0; i<3;i++)
    {
        s[i]->getdata();
    }
    for(int i = 0; i<3;i++)
    {
        s[i]->showdata();
    }
    return 0;
}