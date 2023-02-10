#include<iostream>
#include<fstream>
using namespace std;
const int MAX = 50;
int main(){
     char *st = new char;
     char *ch = new char;
    fstream outf;
    outf.open("text.txt",ios::in | ios::binary|ios::out|ios::app);
    if(!outf)
    cout<<"File Doesn't Exist";
    cout<<"Enter the data you want to store"<<endl;
    cin.getline(ch,MAX);
    outf.write(reinterpret_cast<char*>(&ch),sizeof(ch));
    outf.close();
    ifstream inf;
    inf.open("text.txt");
    inf.seekg(ios::beg);
    inf.read(reinterpret_cast<char*>(&st),sizeof(st));
    cout<<st;
    inf.close();
    return 0;
}