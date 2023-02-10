#include<iostream>
#include<cstring>
using namespace std;
class STRING{
    private:
    char* str;
    public:
    STRING(){
    str = new char[1];
    str[0] = '\0';
    }
    STRING(char *p){
        str = new char[strlen(p)+1];
        strcpy(str,p);
    }
    STRING operator =(STRING s){
        int len = strlen(s.str);
        str = new char[len + 1];
        strcpy(str,s.str);
        return str; 
    }
    STRING operator +(STRING s){
        STRING st;
        int len = strlen(str)+ strlen(s.str);
        st.str = new char[len + 1];
        strcpy(st.str, str);
        strcat(st.str,s.str);
        return st;
    }
    void display(){
        cout<<str;
    }
};
int main(){
    char *s1 = new char;char*s2 = new char;
    cin>>s1>>s2;
    STRING S1(s1),S2(s2);
    STRING S3;
    S3 = S1 + S2;
    S3.display();
    return 0;
    delete s1,s2;
}

