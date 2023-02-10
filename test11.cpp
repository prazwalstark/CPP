#include<iostream>
using namespace std;
const int MAX = 50;
char str1[MAX];
char str2[MAX];
int main(){
    // cin.getline(str2,MAX,'!');
    cin.get(str1,10,'#');
    //cin.ignore();
    cin.get(str2,10);
    cout.write(str1,MAX);
    cout<<endl;
    cout.write(str2,MAX);
    return 0;
}