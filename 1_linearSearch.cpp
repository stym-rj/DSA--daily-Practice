#include<iostream>
using namespace std;

void linearSearch(char *arr, int size){
    int count=0;
    for(int i=0; i<size; i++){
        if(*(arr+i)=='W'){
            cout<<i<<" ";
            count++;
        }
        // arr++;
    }
    if(count==0){
        cout<<-1;
    }
    else{
        cout<<endl<<count;
    }
}

int main(){
    int size;
    char arr[size];

    cin>>size;

    for(int i=0; i<size; i++)   cin>>arr[i];

    linearSearch(arr, size);
}