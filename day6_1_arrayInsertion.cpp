#include <iostream>
using namespace std;

int main(){
    
    int size;
    cin>>size;

    int arr[size+1];

    for(int i=0; i<size;i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;

    int pos;

    for(int i=0; i<size; i++){
        if(arr[i]>=key){
            pos=i;
            break;
        }
    }

    for(int i=size; i>pos; i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=key;

    for(int i=0; i<size+1; i++)     cout<<arr[i]<<" ";

    return 0;
}