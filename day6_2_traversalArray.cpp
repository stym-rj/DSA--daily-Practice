#include <iostream>
using namespace std;


int main(){
    int num;
    cin>>num;

    for(int i=0; i<num; i++){
        int arr[7];

        for(int i=0;i <7 ;i++)      cin>>arr[i];

        int sum=0;
        for(int i=0; i<7 ; i++)     sum+=arr[i];

        if(sum==56)     cout<<1;
        else    cout<<0;
    }

    return 0;
}