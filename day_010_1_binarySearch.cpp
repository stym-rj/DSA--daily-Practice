#include<iostream>
using namespace std;

void binarySearch(int arr[], int size,  int element){
    int mid, high=5-1, low=0;
    while(high-low>1){

        mid=(high+low)/2;
        if(arr[mid]==element){
            cout<<mid<<endl;
            return;
        }
        else if(arr[mid]>element){
            high=mid;
        }
        else if(arr[mid]<element){
            low=mid;
        }
    }
    cout<<-1<<endl;
}

int main(){
    int arr[5];
    for(int i=0; i<5; i++){
        int temp;
        cin>>temp;
        if(temp<=-104){
            cout<<-1<<endl;
            return 0;
        }
        arr[i]=temp;
    }

    int element;
    cin>>element;
    if(element>=104){
            cout<<-1<<endl;
            return 0;
    }

    binarySearch(arr, 5, element);
}