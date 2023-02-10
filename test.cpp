 #include<iostream>
using namespace std;
class example2;
class example{
  private:
  int num = 10;
    public:
    example* display() {//cout<<this->num;
    return this;}
  friend class example2;
};
class example2{
  public:
  void display(example e){
    cout<<e.num<<endl;
  }
};
int main(){
    example e1;example2 e2;
    e2.display(e1);
  //  e1.num=25;
  //  cout<<e1.num<<endl; 
    cout<<e1.display();
    return 0;
}