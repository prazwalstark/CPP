#include<iostream>
using namespace std;
class Temp{
    public:
    int& com(int& t1,int& t2){
        if(t1>t2) 
        return t1;
        else
        return t2;
    }
};
int main(){
    int t1,t2;
    cin>>t1;
    cin>>t2;
    Temp T1;
    cout<<endl<<T1.com(t1,t2);
    return 0;
}