#include<iostream>
using namespace std;
int main(){
    int size;
    cin>>size;

    int arr[size];
    for(int i=0;i<size; i++)    cin>>arr[i];

    int key;
    cin>>key;

    int temp=-1;


    for(int i=0;i < size ; i++){
        if(arr[i]==key){
            for(int j=i; j<size-1;j++){
                arr[j]=arr[j+1];
            }
            size--;
        }
    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}