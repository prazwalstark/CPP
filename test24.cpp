#include<iostream>
using namespace std;
template<class T>
T power(T base,int ex){
    T result;
    result = base;
for (int i=0;i<(ex-1);i++){
    result *= base;
}
return result;
}
int main(){
    float b;int ex;float result;
    cin>>b>>ex;
    if(ex<0) (ex*=(-1));
    result = power<float>(b,ex);
    cout<<result;
    return 0;
}