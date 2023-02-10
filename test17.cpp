//registration number,name,program,contact number,address.etc/
#include<iostream>
#include<fstream>
#include<process.h>
using namespace std;
class person{
    private:
    char name[32];
    long int con;
    char pro[32];
    char add[50];
    public:
    long int reg;
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
    void getRecord();
};
void person::getRecord(){
person per;
fstream file;
file.open("student.txt",ios::binary|ios::in| ios::out |ios::app);
cout<<"Enter Data:\n";
per.getdata();
file.write(reinterpret_cast<char*>(&per),sizeof(per));
file.close();
}
int main(){
    int n;
    person per[20];
    cout<<"Enter Data:";
    cin>>n;
    for(int i=0;i<n;++i)
        per[i].getRecord();
    person temp;
    fstream file;
    int i = 0;
    file.open("student.txt",ios::binary|ios::out|ios::in);
    while(!file.eof()){
        file.read(reinterpret_cast<char*>(&per[i]),sizeof(per));
        i++;
    }
    for(int i = 0; i< n;i++){
        for (int j = i+1; j<n;j++)
            if(per[i].reg>per[j].reg)
                {
                    temp=per[i];
                    per[i]=per[j];
                    per[j]=temp;
                }
    }
     for(int i = 0; i< n;i++){
        per[i].data();
        cout<<endl;
    }
    file.close();
return 0;
}