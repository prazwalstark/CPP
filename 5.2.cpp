#include<iostream>
using namespace std;
class coordinates{
    private:
    int x,y,z;
    public:
    coordinates():x(0),y(0),z(0){}
    coordinates(int x_coord,int y_coord,int z_coord){
    x = x_coord;
    y= y_coord;
    z = z_coord; }
    friend coordinates operator +(coordinates, coordinates);
    friend void display(coordinates);
};
coordinates operator +(coordinates c1,coordinates c2){
    coordinates c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;
    c3.z = c1.z + c2.z;
    return c3;
}
void display(coordinates c){
    cout<<"( "<<c.x<<" , "<<c.y<<" , "<<c.z<<" )"<<endl;
}
int main(){
    coordinates c1(10,10,10),c2(25,25,25),c3;
    c3 = c1 + c2;
    display(c3);
    return 0;
}