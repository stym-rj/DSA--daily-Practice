// Surbhi’s birthday is on September 1,2022 and she wants to buy a pair of shoe. As she is very excited for her special day so she decided for early shopping. That’s why, she went to Mall and selected best 5 pair of shoe but there is problem is with financial condition so she selected that pair who is having minimum cost? Example 1. 23 45 67 100 2 2

// Input Format

// In First Line will it will print five data values.

// Constraints

// Only numeric data can enter. You can not enter duplicate values.

// Output Format

// It will display Minimum data value from the remaining set of elements.

// Sample Input 0

// 23 45 67 12 34
// Sample Output 0

// 12


#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int _data){
            data=_data;
            next=NULL;
        }

};

int main(){
    int arr[5];

    for(int i=0; i<5 ;i++){
        cin>>arr[i];

    }

    int min=arr[0];
    for(int i=0; i<5; i++){
        if(arr[i]<min)  min=arr[i];
    }
    
    cout<<min;
    return 0;
}   