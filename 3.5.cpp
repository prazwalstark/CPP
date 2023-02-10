#include<iostream>
using namespace std;
class employee{
    private:
    char* id = new char[50];
    int total_bonus,year;
    float total_overtime;
    public:
    void setpara(){
        cin>>id;
        cin>>total_bonus;
        cin>>total_overtime;
        cin>>year;
        cout<<"ThankYou"<<endl;
    }
    void displayreport(){
        cout<<"An employee with "<<id<<" has received Rs."<<total_bonus<<" and had worked "<<total_overtime<<"hours as overtime in the year "<<year<<"."<<endl;
    }
};
int main(){
    int n;
    employee e[10];
    cin>>n;
    for (int i= 0; i<n;i++){
        e[i].setpara();
    }
    for (int i= 0; i<n;i++){
        e[i].displayreport();
    }
    return 0;
}