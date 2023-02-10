#include<iostream>
using namespace std;
class Time{
    private:
    int hr,min,sec;
    public:
    Time(int,int,int);
    /*void ask(){
        cin>>hr;
        cin>>min;
        cin>>sec;
    }*/
    void add(Time T1, Time T2){
        sec =T1.sec + T2.sec;
        if (sec>=60)
        {
            min += (sec/60);
            sec %= 60;
        }
        min +=(T1.min+T2.min);
        {
            hr += (min/60);
            min %= 60;
        }
        hr += (T1.hr + T2.hr);
        if(hr >= 24){
            hr %= 24;
        }
        
    }
    void display(){
        cout<<hr<<":"<<min<<":"<<sec<<endl;
    }
};
Time::Time(int h=0,int m=0, int s=0){
    hr = h;
    min = m;
    sec = s;
}
int main(){
    Time T1(10,10,10),T2(04,57,55),T3;
    T3.add(T1,T2);
    T3.display();
    return 0;
}