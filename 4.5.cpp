#include<iostream>
using namespace std;
class example{
    private :
    int num1;
    //mutable int num2;
    int num2;
    public:
    example(){num1=0;num2=1;}
    example(int n1, int n2){num1=n1;num2 =n2;}
    int display() const{
        return num1;
    }
    void displays() const{
        example* e = const_cast<example*> (this);
        e->num2 += 1;
        //num2+=1; for mutable num2!
        cout<<num2<<endl;
    }
    void show(){
        cout<<num1<<num2<<endl;
    }
    
};
int main(){
    const example e1(10,20);
    //e1.show(); --shows error since constant object can't be linked to non constant function
    cout<<e1.display();
    example e2;
    e2.show();
    e2.displays();
    return 0;
}
