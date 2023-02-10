#include<iostream>
using namespace std;
class carpark{
private:
    int car_id;
    int charge_hr;
    float time,charge;
public:
    void ask_data(){
        cin>>car_id;
        cin>>charge_hr;
        cin>>time;
    }
    void setting(){
        charge=charge_hr*time;
    }
    void display(){
        cout<<endl<<"Car_Id: "<<car_id<<endl;
        setting();
        cout<<"Total Cost: Rs"<<charge;
    }
};
int main(){
    carpark cp1;
    cp1.ask_data();
    cp1.display();
    return 0;
}