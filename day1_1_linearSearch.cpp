#include<iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int count=0;
    int size;
    cin>>size;
    char arr[size];


    for(int i=0; i<size; i++)   cin>>arr[i];

    for(int i=0; i<size; i++){
        if(arr[i]=='W'){
            cout<<i<<" ";
            count++;
        }
    }
    if(count==0){
        cout<<-1;
    }
        cout<<endl;
        cout<<count;
    
}