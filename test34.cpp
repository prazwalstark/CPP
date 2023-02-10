#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}
void sort(vector<int>&v){
    for(int i =0;i<v.size()-1;i++){
        for(int j =i+1;i<v.size();j++){
             int temp = 0;
            if(v[i]>v[j])
            {
                temp=v[i];
                v[i]=v[j];
                v[j]=temp;
            }
        }
    }
}
int main(){
    vector<int> v;
    cout<<"Size of vector at initial condition:"<<endl<<v.size();
    cout<<"Size of vector at initial condition:"<<endl<<v.capacity();
    v.push_back(5);
    v.push_back(11);
    v.push_back(10);
    v.push_back(1);
    v.push_back(2);
    cout<<"Size of vector at final condition:"<<endl<<v.size();
    cout<<"Size of vector at final condition:"<<endl<<v.capacity();
    display(v);
    sort(v);
    display(v);
    return 0;
}