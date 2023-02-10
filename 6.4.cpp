//assign, change and delete records of student and employee
#include<iostream>
using namespace std;
class person{
protected:
char *name;
int age;
public:
person():name(new char[32]){}
void ask_data(){
    cin>>this->name;
    cin>>this->age;
}
};
class student: public person{
private:
int id;
char ans;
public:
char menu(){
    cout<<"a.Assign"<<endl;
    cout<<"b.Show"<<endl;
    //cout<<"c.Change"<<endl;
    cin>>ans;
    return ans; 
}
void ask_data(){
    cout<<"Enter Name,Age and School Id:"<<endl;
    person::ask_data();
    cin>>this->id;
}
void show_data(){
    cout<<"Data:"<<endl;
    cout<<this->id;
    cout<<this->name;
    cout<<this->age;
}
};
class employee: public person{
private:
int id;char ans;
public:
void ask_data(){
    cout<<"Enter Name,Age and Employee Id:"<<endl;
    person::ask_data();
    cin>>id;
}
char menu(){
    cout<<"a.Assign"<<endl;
    cout<<"b.Delete"<<endl;
    //cout<<"c.Change"<<endl;
    cin>>ans;
    return ans; 
}
};
int main(){
    char ans;char a1;int n;
    cout<<"Employee or Student->e/s"<<endl;
    cin>>ans;
    if (ans == 'e'){

    }
    else if (ans == 's'){
        student s;
        a1=s.menu();
        if (a1 == 'a'){
            cout<<"How many data do you want to add?"<<endl;
            cin>>n;
            for (int i = 0; i<n; i++){
                student s[i];
                s[i].ask_data();
            }
            for (int i = 0; i<n; i++){
                student s[i];
                s[i].show_data();
            }
        }

    }
    else {
        cout<<"Error Entry";
    }
    return 0;
}