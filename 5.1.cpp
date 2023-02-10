#include<iostream>
using namespace std;
class newcoordinate;
class coordinate{
    private:
    int x;int y;
    public:
    coordinate(){x=0;y=0;}
    coordinate(int x_cord,int y_cord){
        x = x_cord;
        y= y_cord;
    }
    friend void addition(coordinate&,newcoordinate&);
};
class newcoordinate{
    private:
    int x;int y;
    public:
    newcoordinate(){x=0;y=0;}
    newcoordinate(int x_cord,int y_cord){
        x = x_cord;
        y= y_cord;
    }
    friend void addition(coordinate&,newcoordinate&);
};
void addition(coordinate& c1,newcoordinate&c2){
    int x1,y1;
        x1 = c2.x + c1.x;
        y1 = c2.y + c1.y;
        cout<<"( "<<x1<<" , "<<y1<<" )"<<endl;
    }
int main(){
    coordinate c1(10,55);
    newcoordinate c2(25,10);
    addition(c1,c2);
    return 0;
}
//similarly make fucntions of multiplication, division and subtraction!
