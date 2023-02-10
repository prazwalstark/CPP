#include<iostream>
#include<cstring>
using namespace std;
class B;
class A{
    private:
    static char* name;
    int len;
    public:
    A(char* str){
    name= new char[strlen(str)+1];
    strcpy(name,str);
    }
    int length(){
        len=strlen(name);
        return len;
    }
    friend class B;
};
class B{
    private:
    int len;
    public:
    //B(){}
    void display(A a1)
    {
    
    cout<<(A::name)<<endl;
    cout<<(a1.length());
    }
};
char* A::name;
int main(){
    A a1("Prajjwal");
    B b1;
    b1.display(a1);
    return 0;
}