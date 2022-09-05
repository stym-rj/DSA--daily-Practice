#include<iostream>
using namespace std;

int sumOfDigits(int a, int size){
    int sum=0;

    while(a!=0){
        sum += a%10;

        a/=10;
    }
    // cout<<sum<<endl;
    if(sum>size){
        sum=sumOfDigits(sum, size);
    }


    return sum;
}

void insertElement(int arr[], int size, int pos, int element){
    for(int i=size-1; i>pos; i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=element;
}

void display(int arr[],int size){
    for(int i=0; i<size; i++)   
    {
        if(i==size-1){
            // s=s+to_string(arr[i]);
            cout<<arr[i];
            continue;
        }

        cout<<arr[i];
        int spaces;
        spaces=8-to_string(arr[i]).length();

        for(int i=0; i<spaces; i++){

            cout<<" ";
        }

        // s=s+to_string(arr[i]);
    }
}

int main(){
    int size;
    cin>>size;

    int arr[size]={0};

    int ins;
    cin>>ins;
    if ( size<0 || size>99)     return 0;

    for(int i=0;i<ins; i++)     cin>>arr[i];

    int element;

    cin>>element;

    int pos=sumOfDigits(element, size);

    // pos=locCheck(pos, size);
    // cout<<pos;



    

    insertElement(arr, size, pos-1, element);

    display(arr, size);
    
    // for(int i=0; i<size; i++)   
    // {
    //     if(i==size-1){
    //         // s=s+to_string(arr[i]);
    //         cout<<arr[i];
    //         continue;
    //     }

    //     cout<<arr[i];
    //     int spaces;
    //     spaces=8-to_string(arr[i]).length();

    //     for(int i=0; i<spaces; i++){

    //         cout<<" ";
    //     }

    //     // s=s+to_string(arr[i]);
    // }

}