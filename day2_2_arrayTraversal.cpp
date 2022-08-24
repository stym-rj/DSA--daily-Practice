#include<iostream>
using namespace std;

int main(){
    // string s;
    // cin>>s;
    int count=0;

    string arr[5+8];
    for(int i=0; i<5+8; i++){
        cin>>arr[i];
        if(arr[i]=="JAVA")  count++;
    }

    // for(int i=5; i<5+8; i++)      cout<<arr[i]<<" ";
    // cout<<endl;

    cout<<"JAVA lecture is repeating "<<count<<" times";

    
}