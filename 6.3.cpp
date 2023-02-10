#include<iostream>
#include<cstring>
using namespace std;
class Musicians{
protected:
string s[5],w[5],p[5];
public:
//Musicians(){}
//Musicians(){}
void strings(){
s[0]= "Veena";
s[1]= "Guitar";
s[2]= "Sitar";
s[3]= "Sarod";
s[4]= "Mandolin";
for(int i = 0;i< 5; i++){
    cout<<s[i]<<endl;
}
}
void wind(){
w[0] = "Flute";
w[1] = "Clarinet";
w[2] = "Saxophone";
w[3] = "Nadhaswaram";
w[4] = "Piccolo";
for(int i = 0;i< 5; i++){
    cout<<w[i]<<endl;
}
}
void perc(){
p[0] = "Tabla";
p[1] = "Mridangam";
p[2] = "Bangos";
p[3] = "Drums";
p[4] = "Tambour";
for(int i = 0;i< 5; i++){
    cout<<p[i]<<endl;
}
}
};
class TypeIns: public Musicians{
private:
char inp;
public:
void get(){
cout<<"Menu"<<endl;
cout<<"-String Instruments"<<endl;
cout<<"-Wind Instruments"<<endl;
cout<<"-Percussion Instruments"<<endl;
}
void show(){
char ans = this->input();
if(ans == 'S') Musicians::strings();
else if(ans == 'W') Musicians::wind();
else if(ans == 'P') Musicians::perc();
else cout<<"Error Input!"<<endl;
}
char input(){
    cin>>inp;
    return inp;
}
};
int main(){
    TypeIns T1;
    T1.get();
    T1.show();
    return 0;
}