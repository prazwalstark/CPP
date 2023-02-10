#include<iostream>
using namespace std;
template<class T1, class T2>
class test{
private:
T1 a;
T2 b;
public:
test(T1,T2);
void display();
};
template<class T1, class T2>
test<T1,T2>::test(T1 as, T2 bs){
a =as ;
b= bs;
}
template<class T1, class T2>
void test<T1,T2>::display(){
    cout<<a<<"."<<b;
}
int main(){
    test<int,float> t1(5,2.666);
    t1.display();
    return 0;
}