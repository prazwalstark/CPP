#include<iostream>
#include<cstring>
using namespace std;
class counter{
private:
int count;
public:
counter():count(0){}
counter(int n):count(n){}
// void operator ++(int){
//     count+= 1;
// }
void operator ++(){
    count+= 1;
}
counter operator ++(int){
    count+= 1;
    return *this;
}
friend counter operator --(counter &c,int);
void display(){
    cout<<count<<endl;
}
};
counter operator --(counter &c,int){
    c.count-=1;
    return c;
}
int main(){
counter c1;
counter *c3;
c3 = new counter;
c3 = &c1;
c1++;
++c1;
//c3 = c1++;
c1.display();
c1--;
c1.display();
(*c3).display();
delete c3;
return 0;
}
