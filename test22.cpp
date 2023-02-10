#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
class erroMessage{
public:
int num;
char *str;
erroMessage(){}
erroMessage(int n,const char* string){
    str = new char[strlen(string)+1];
    num = n;
    strcpy(str,string);
}
};
class squarert{
private:
int num;
public:
squarert(int n=0):num(n){}
void calc();
};
void squarert::calc(){
    if(num<0)
    throw erroMessage(num,"Negative Number Detected.");
    else 
    cout<<sqrt(num);
}
int main(){
    int num;
    cin>>num;
    squarert s1(num);
    try{
        s1.calc();
    }
    catch(erroMessage e){
        cout<<e.str<<e.num;
    }
    return 0;
}