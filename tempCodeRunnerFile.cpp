#include<iostream>
using namespace std;
int main(){
    int size;
    cin>>size;
    if(size<1 || size>20){
        cout<<"Invalid size of array";
        return 0;
    }

    char arr[size*2];

    for(int i=0; i<size; i++)   cin>>arr[i];

    for(int i=0; i<size; i++){
        if(arr[i]>64 && arr[i]<91){
            char temp=arr[i+1];
            for(int j=size; j>i; j--){
                arr[j]=arr[j-1];
            }
            arr[i+1]=arr[i]+32; 
            size++;
        }
    }

    for(int i=0; i<size; i++)    cout<<arr[i]<<" ";
}