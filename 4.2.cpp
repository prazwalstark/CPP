#include<iostream>
#include<cstring>
using namespace std;
class concat_string{
    private:
    char* str;
    public:
    concat_string(){
        str = new char[1];
        str[0]='\0';
    }
    //concat_string(const char* string_add){
         concat_string(char* string_add){
        str =new char[strlen(string_add)+1];
       // str = const_cast<char*>(str);
        strcpy(str,string_add);
        }
    ~concat_string(){
        delete []str;
    }
    concat_string join(concat_string cs2){
        concat_string cs3;
        strcpy(cs3.str,str);
        strcat(cs3.str,cs2.str);
        return cs3;
    }
    void display(){
        cout<<str;
    }
};
int main(){
    char input[20],input2[20];
    cin>>input;
   // cout<<endl;
    cin>>input2;
   // concat_string cs1("Engineers are"),cs2(" Creatures of logics");
    concat_string cs1(input),cs2(input);
    concat_string cs3 = cs1.join(cs2);
    cs3.display();
    return 0;
}