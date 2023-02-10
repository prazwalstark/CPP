#include<iostream>
using namespace std;
class Department{
private:
char* id = new char[20];
char* name = new char[20];
public:
Department(char* dep_id,char* dep_name):id(dep_id),name(dep_name){cout<<"Constructor called"<<endl;}
~Department(){
    cout<<"Destructor Called";
}
};
int main(){
    char id[20],name[20];
    cin>>id;
    cin>>name;
    Department d1(id,name);
    return 0;
}