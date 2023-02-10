#include<iostream>
using namespace std;
const int MAX = 25;
class stack{
    private:
    int data[MAX];
    int top;
    public:
    class pus{};
    class pope{};
    stack(){top =(-1);}
    void push(int datum){
        if (top>= MAX-1)
        throw pus();
        else 
        data[++top]=datum;
    }
    int pop(){
        if(top==-1)
        throw pope();
        else 
        return data[--top];
    }
};
int main(){
stack s;
try{
s.push(10);
s.push(19);
cout<<"The poped element is : "<<s.pop();
}
catch(stack::pope){
    cout<<"No Elements left to POP!"<<endl;
}
catch(stack::pus){
    cout<<"STACK is MAXED OUT!"<<endl;
}
return 0;
}