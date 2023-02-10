#include<iostream>
using namespace std;
void uhandler(void){
    cout<<"Caught a throw."<<endl;
}
void error_check(int n){
    try{
        if (n==1) throw n;
        if (n==-2) throw 1.0;
        if (n==0) throw 'a';
        cout<<10/0;
    }
    catch(int){
        cout<<"Caught an integer."<<endl;
    }
    catch(double){
        cout<<"Caught negative integer."<<endl;
    }
    // catch(char)
    // {
    //     cout<<"Caught a character."<<endl;
    // }
}
void handler(void){
    cout<<"Caught a character."<<endl;
}
int main(){
    set_unexpected(uhandler);
    set_terminate(handler);
    int n;
    cin>>n;
    error_check(n);
    return 0;
}
