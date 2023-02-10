#include<iostream>
using namespace std;
class Date{
    private:
    int d, m , y;
    public:
    Date(int d, int m ,int y){
        this -> d =d;
        this -> m = m;
        this -> y = y;
    }
    Date operator ++(){
        if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
            {
                if (m % 2 ==0 && d == 30 && m!=2)
                {
                    m+=1;d=1;
                }
                else if(m == 2 && d == 28)
                {
                    m+=1;d=1;
                }
                else if (m % 2 !=0 && d == 31)
                {
                    m+=1;d=1;
                }
                else
                {
                    d+=1;
                }
            }
        else 
            {
                if (m % 2 ==0 && d == 30 && m!=2)
                {
                    m+=1;d=1;
                }
                else if(m == 2 && d == 29)
                {
                    m+=1;d=1;
                }
                else if (m % 2 !=0 && d == 31)
                {
                    m+=1;d=1;
                }
                else
                {
                    d+=1;
                }
            }
        return *this;
    }
void display_date(Date da){
cout<<da.d<<"/"<<da.m<<"/"<<da.y<<endl;
}
};
int main(){
    Date d(28,02,2004);
    d.display_date(++d);
    return 0;
}