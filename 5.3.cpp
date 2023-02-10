#include<iostream>
using namespace std;
class example{
    private:
    int num;
    public:
    example(int num){
        this->num = num;
    }
    example():num(0){}
    void operator ==(example b){
        if(num==b.num)
        cout<<num<<" is equal to "<<b.num<<endl;
        else 
        cout<<num<<" isn't equal to "<<b.num<<endl;
    }
    void operator <(example b){
        if(num<b.num)
        cout<<num<<" is less than "<<b.num<<endl;
        else 
        cout<<b.num<<" is less than "<<num<<endl;
    }
    void operator >(example b){
        if(num>b.num)
        cout<<num<<" is greater than "<<b.num<<endl;
        else 
        cout<<b.num<<" is greater than "<<num<<endl;
    }
    void operator !=(example b){
        if(num!=b.num)
        cout<<num<<" isn't equal to "<<b.num<<endl;
        else 
        cout<<b.num<<" is equal to "<<num<<endl;
    }
    void operator >=(example b){
        if(num>=b.num)
        cout<<num<<" is equal to or greator than "<<b.num<<endl;
        else 
        cout<<b.num<<" is equal to or greator than "<<num<<endl;
    }
    void operator <=(example b){
        if(num<=b.num)
        cout<<num<<" is equal to or less than "<<b.num<<endl;
        else 
        cout<<b.num<<" is equal to or less than "<<num<<endl;
    }
};
int main(){
    example e1={10};
    example e2(20);
    e1 == e2;
    e2 != e1;
    e1 < e2;
    e2 > e1;
    e2 >= e2;
    e1 <= e1;
    return 0;
}