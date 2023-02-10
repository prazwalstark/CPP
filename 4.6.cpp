#include<iostream>
using namespace std;
class example{
    private:
    static int count;
    int snum;
    public:
    example(){
        count++;
        snum = count;
    }
    void show_id(){
        cout<<endl<<snum<<endl;
    }
    static void display(){
        cout<<"Count:"<<count<<endl;
    }
};
int example::count=0;
int main (){
    example::display();
    example e1;
    e1.display();
    e1.show_id();
    example e2;
    e2.display();
    e2.show_id();
    e1.display();
    e1.show_id();
    return 0;
}