#include<iostream>
using namespace std;
const int si = 15;
class A{
    private:
    int a[si];
    public:
    A(int num){
        for(int i=0;i<num;i++)
        cin>>a[i];
    }
    int operator [](int i){
        if (i>si || i<0)
        {
            cout<<"Index out of Bound";
            exit(0);
        }
        return a[i];
    }
};
int main(){
    int index;
    cin>>index;
    A a1(index);
    for(int i;i<index;i++){
        cout<<a1[i]<<endl;
    }
    return 0;
}