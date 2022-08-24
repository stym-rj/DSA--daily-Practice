#include<iostream>
using namespace std;

void display(int arr[], int size){
    for(int i=0; i<size; i++)   cout<<arr[i]<<" ";
}

void deletion(int arr[], int size){
    

    int _size=size;
    for(int i=0; i<_size-1; i++){
        if(arr[i]==arr[i+1]){
            for(int j=i; j<_size-1; j++){
                arr[j]=arr[j+1];
            }
            i--;
            _size--;
        }
    }

    // for(int i=0; i<_size; i++){
    //     cout<<arr[i]<<" ";
    // }

    display(arr, _size);
}

int main(){
    string arr[3];
    
    for(int i=0; i<3; i++){
        cin>>arr[i];
    }

    cout<<arr[1];

}