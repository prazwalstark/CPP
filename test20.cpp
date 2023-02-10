#include<iostream>
#include<cmath>
using namespace std;
class sqrts{
    private:
    int num;
    int sqr;
    public:
    class error{};//exception class
    float display();
    void getnum();
};
void sqrts::getnum(){
    cout<<"Enter a number:";
    cin>>num;
}
float sqrts::display(){
    if (num<0)
        throw error();
    else
        return sqrt(num);
}
int main(){
    sqrts num1;
    float result;
    num1.getnum();
    try{
        result=num1.display();
        cout<<"The square root is:"<<result;
    }
    catch(sqrts::error){
        cout<<"Square root of negative number not possible.";
    }
    return 0;
}