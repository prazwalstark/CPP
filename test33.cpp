#include<iostream>
#include<fstream>
using namespace std;
class book{
    private:
    char bn[50];
    long bID;
    int nb;
    char date[50];
    public:
    void getdata(){
        cout<<"ENTER DATA:";
        cin>>bn;
        cin>>bID;
        cin>>nb;
        cin>>date;
    }
    void showdata(){
        cout<<bn<<endl;
        cout<<bID<<endl;
        cout<<nb<<endl;
        cout<<date<<endl;
    }
   void getrecord();
   void showrecord();
};
void book::getrecord(){
    book b;
    fstream file;
    file.open("book.txt",ios::binary|ios::in|ios::out|ios::app);
    char x= 'Y';
    while(x == 'Y'){
        b.getdata();
        file.write(reinterpret_cast<char*>(&b),sizeof(b));
        cout<<"Do you want to add more data?"<<endl;
        cin>>x;
    }
    file.close();
}
void book::showrecord(){
    book b;int i=0;
    fstream file;
    file.open("book.txt",ios::binary|ios::in|ios::out);
    while(!file.eof()){
        file.read(reinterpret_cast<char*>(&b),sizeof(b));
        b.showdata();
        i++;
    }
    file.close();
}
int main(){
    book b;
    b.getrecord();
    b.showrecord();
    return 0;
}
