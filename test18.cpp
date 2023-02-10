#include<iostream>
#include<cstring>
using namespace std;
template<class T>
void max_cal(T a, T b){
    cout<<a<<"."<<b;
}
template<class T1,class T2>
void max_cal(T1 a, T2 b){
    cout<<a<<"."<<b;
}
char* max_cal(char* str1, char* str2){
   if (strcmp(str1,str2)==1)
   return str1;
   else 
   return str2;
}
int main(){
    // char * str1, * str2;
    // cin>>str1>>str2;
    // cout<<max_call(str1,str2);
    max_cal(5,2.0);
    return 0;
}