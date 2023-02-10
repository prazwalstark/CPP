#include<iostream>
using namespace std;
class celcius{
    private:
        float data;
    public:
        celcius():data(0){}
        celcius(float c):data(c){}
        float valu(){
            return data;
        }
};
class fahrenheit{
private:
float data;
public:
fahrenheit():data(0){}
fahrenheit(celcius c){
    data = ((c.valu())*(9.0/5))+32;
}
void display(){
    cout<<"In Fahrenheit:"<<data;
}
};
int main(){
    float celsius;
    cout<<"Enter temperature in celsius:";
    cin>>celsius;
    celcius c1(celsius);
    fahrenheit f1;
    f1 = c1;
    f1.display();
    return 0;
}