#include<iostream>
using namespace std;
class Vehicle{
private:
int num;
float hour;
float rate,t_rate;
public:
/*Vehicle(Vehicle &v){
    num = v.num;
    hour = v.hour;
    rate = v.rate;
}*/
Vehicle(int n, float hr, float rat){num = n;hour = hr; rate = rat;}
void setting(){
    if (num>=10){ 
        t_rate = (num * hour * rate);
        t_rate -= (num * hour * rate)*0.1;
    }
    else 
        t_rate = num * hour * rate;
}
void display(){
    cout<<t_rate;
}
};
int main(){
    int num; float hour;float rate;
    cin>>num;
    cin>>hour;
    cin>>rate;
    Vehicle v1(num,hour,rate);
    Vehicle v2(v1);
    //Vehicle v2 = v1;
    v2.setting();
    v2.display();
    return 0;
}