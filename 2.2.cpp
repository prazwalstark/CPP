#include<iostream>
using namespace std;
namespace Square{
    int num;
    int fun(int n){
        return n*n;
    }
}
namespace sq = Square;
namespace Cube{
    int fun(int num){
        return num*num*num;
    }
}
namespace cb = Cube;

int main(){
    int num1,num2;
    sq::num = 5;
    num1=sq::fun(sq::num);
    num2=cb::fun(4);
    cout<<sq::fun(num2)<<endl;
    cout<<cb::fun(num1)<<endl;
    return 0;
}