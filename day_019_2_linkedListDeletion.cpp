#include<iostream>
using namespace std;

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    // int size;
    // cin>>size;
    
    // cout<<"Wrong Input.";
    int count = 0;
    // if(size < 3 || size >11 ){
    //     cout<<"Wrong Input.";
    //     return 0;
    // }
    int arr [ 100 ];
    int temp;
    cin>>temp;
    int i=0;
    while(temp!=-1){
        if( temp % 2 != 0 && temp!= -1)
        {
            // cout<<temp<<" ";
            count++;
        }
        arr[i]=temp;
        cin>>temp;
        i++;
    }
    arr[i]=temp;
    if(!count){  cout<<"No odd number present";
    return 0;
    }
    i=0;
    while ( arr[i]!=-1){
        
        if( arr[i] % 2 == 0)
        {
            cout<<arr[i]<<" ";
            // count++;
        }
        // arr[i]=temp;
        i++;
    }
    return 0;
}
