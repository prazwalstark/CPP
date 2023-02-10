//registration number,name,program,contact number,address.etc/
#include<iostream>
#include<fstream>
#include<process.h>
using namespace std;
class person{
    private:
    char name[32];
    long int reg;
    long int con;
    char pro[32];
    char add[50];
    public:
    void getdata(){
        cout<<"Enter Name:"<<endl;cin>>name;
        cout<<"Enter Registraion Number:"<<endl;cin>>reg;
        cout<<"Enter contact number:"<<endl;cin>>con;
        cout<<"Enter program:"<<endl;cin>>pro;
        cout<<"Enter address:"<<endl;cin>>add;
    }
    void data(){
        cout<<"Name: "<<name<<endl;
        cout<<"Registration Number: "<<reg<<endl;
        cout<<"Contact: "<<con<<endl;
        cout<<"Program: "<<pro<<endl;
        cout<<"Address: "<<add<<endl;
    }
    bool search(int r){
        if(reg == r)
         return true;
        else 
         return false;
    }
    void getRecord();
    void showRecord();
};
void person::getRecord(){
person per;char ch='Y';
fstream file;
file.open("student.txt",ios::binary|ios::in| ios::out |ios::app);
while(ch == 'Y'){
    cout<<"Enter Data:\n";
    per.getdata();
    file.write(reinterpret_cast<char*>(&per),sizeof(per));
    cout<<"Do you want to add more data: (Y/N)";
    cin>>ch;
}
file.close();
}
void person::showRecord(){
    person per;int r;int flag =0;
    fstream file;
    file.open("student.txt",ios::binary|ios::out|ios::in);
    cout<<"Enter the registration number: ";
    cin>>r;
    do{
        if (per.search(r)){
            per.data();
            flag =1;
            break;
        }
    }while(file.read(reinterpret_cast<char*>(&per),sizeof(per)));
    if (flag == 0){
        cout<<"Invalid Reg. Number"<<endl;
    }
    file.close();
}
int main(){
    int n;
    person per;
    while(1){
        cout<<"1.Input Data\n2.Read Data\n3.Exit\n";
        cin>>n;
        switch (n)
        {
        case 1:
            per.getRecord();
            break;
        case 2:
            per.showRecord();
            break;
        case 3:
            exit(0);
            break;
        default:
             cout<<"Enter number Between 1-3 Only";
    }
}
return 0;
}