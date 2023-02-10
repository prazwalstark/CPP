#include<iostream>
#include<cstring>
using namespace std;
class concat_string{
    private:
    char* str;
    public:
    concat_string()
    {
        str = new char[1];
        str[0]='\0';
    }
         concat_string(char* string_add)
         {
        str =new char[strlen(string_add)+1];
        strcpy(str,string_add);
        }
    // ~concat_string(){
    //     delete []str;
    // }
    int len()
    {
        int j=0;
        while(str[j] !='\0'){
            j+=1;
        }
        return j;
    }
    
    concat_string join(concat_string cs1,concat_string cs2){
        int len1=cs1.len();
        int len2=cs2.len();
        delete []str;
        str = new char[len1+len2+1];
        strcpy(str,cs1.str);
        strcat(str,cs2.str);
        return *this;
    }
    void display(){
        cout<<str;
    }
};
int main(){
    char input[20],input2[20];
    cin>>input;
    cin>>input2;
    concat_string cs1(input),cs2(input2),cs3;
    cs3 = cs3.join(cs1,cs2);
    cs3.display();
    return 0;
}