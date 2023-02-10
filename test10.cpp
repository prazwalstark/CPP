#include<iostream>
using namespace std;
class TIME{
    private:
    int hr, min, sec;
    public:
    void get_data(){
        cout<<"Enter Hr, Min, and Sec: ";
        cin>>hr;
        cin>>min;
        cin>>sec;
    }
    bool operator !=(TIME t1){
        int total1  = t1.hr *60*60 + t1.min *60 + t1.sec ;
        int total2  = hr *60*60 + min *60 + sec ;
        return ((total1!=total2)?true:false);
    }
    void show_data(){
        cout<<hr<<":"<<min<<":"<<sec<<endl;
    }
};
int main(){
    TIME t1,t2;
    t1.get_data();
    t2.get_data();
    if (t1!=t2)
    cout<<"They are not equal."<<endl;
    else 
    cout<<"They are equal."<<endl;
    return 0;
}
