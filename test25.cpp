#include<iostream>
using namespace std;
class midpoint{
    private:
    float co;
    public:
    midpoint(int num=0):co(num){

    }
    midpoint cal(midpoint m2, midpoint m1){
        co=(m2.co+m1.co)/2;
        return *this;
    }
    void display(){
        cout<<co;
    }
};
int main(){
    float co1, co2;
    cin>>co1>>co2;
midpoint m1(co1), m2(co2),m3;
m3=m3.cal(m2,m1);
m3.display();
return 0;
}