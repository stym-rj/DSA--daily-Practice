#include<iostream>
using namespace std;

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int size;
    cin>>size;
    
    // cout<<"Wrong Input.";
    int count = 0;
    if(size < 3 || size >11 ){
        cout<<"Wrong Input.";
        return 0;
    }
    int arr [ size ];
    for ( int i =0 ; i<size ; i++){
        int temp;
        cin>>temp;
        if( temp % 2 != 0)
        {
            // cout<<temp<<" ";
            count++;
        }
        arr[i]=temp;
    }
    if(!count){  cout<<"No student is having odd roll number.";
    return 0;
    }
    for ( int i =0 ; i<size ; i++){
        
        if( arr[i] % 2 == 0)
        {
            cout<<arr[i]<<" ";
            // count++;
        }
        // arr[i]=temp;
    }
    return 0;
}
