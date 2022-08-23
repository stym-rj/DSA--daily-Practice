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
    int size;
    int arr[size];
    cin>>size;
    if(size<2){
        cout<<"Invalid Input";
        return 0;
    }

    for(int i=0; i<size; i++)   cin>>arr[i];

    deletion(arr, size);

}