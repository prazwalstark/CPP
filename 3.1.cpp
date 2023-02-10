#include<iostream>
using namespace std;
class Celsius{
private:
    float temp;
public:
    float toFahrenheit(float t){
        temp = (((float)9/5)*t)+32;
        //return temp;
     }
    void display_result(){
        cout<<endl<<temp;
    }
    
};
class Fahrenheit{
private:
    float temp;
public:
    float toCelsius(float t){
        temp = ((float)5/9)*(t-32); 
        //return temp;
    }
    void display_result(){
        cout<<endl<<temp;
    }
};
int main(){
    float t;
    cin>>t;
    Celsius c1;
    Fahrenheit f1;
    c1.toFahrenheit(t);
    f1.toCelsius(t);
    c1.display_result();
    f1.display_result();
    return 0;
}