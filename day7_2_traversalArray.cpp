#include<iostream>
using namespace std;

void findSum(int arr[])
{
    int max=arr[0];
    for(int i=0; i<6; i++){
        if(arr[i]>max)      max=arr[i];
    }

    cout<<max<<endl;
}

int main(){
    int n;
    cin>>n ;
    int arr[6];

    for(int i=0;i<n; i++){
        for(int i=0; i<6; i++)      cin>>arr[i];

        findSum(arr);
    }
}