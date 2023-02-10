#include<iostream>
using namespace std;
class check_num{
    private:
        int n,c=0;
        //char result[20]; shows error
        char* result = new char[50];
        //char* result = new char[50]; this is also correct!
    public:
    void ask_num(){
        cin>>n;
    }
    void check_nu(){
        for (int i = 2;i<n;i++)
            {

                if(n%i==0) 
                    c+=1;
                if(c== 0) 
                    result ="prime";
                else 
                    result ="not prime";
            }
    }
    void displaY_result(){ 
        cout<<result<<endl;
    }
    void ask(char &ans){
        cout<<"want to check more numbers?"<<endl;
        cin>>ans;
        //return ans;
    }
};
int main(){
    check_num c1;
    char ans = 'y';
    while(ans == 'y'){
        c1.ask_num();
        c1.check_nu();
        c1.displaY_result();
        c1.ask(ans);
    }
    return 0;
}