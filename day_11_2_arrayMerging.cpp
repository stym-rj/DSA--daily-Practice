// Consider there are N number of employees in Programming domain sitting in one room and have their unique emp_id and M number of employees of Automata domain sitting in an another room with their unique emp_id. As per new guidelines, sitting arrangements have been updated and now all members of Automata domain are shifted in Programming domain. Now as per new sitting arrangement firstly programming domain employees will occupy the cubicle and then automata domain employee will occupy the cubicle(index begins from 0) .Also find the cubicle of employees having even emp_id.If there is no employee with even emp_id then print -1.

// Input Format

// First line consists of total number of employees in N array
// Values inside N arrays
// Second line consists of total number of employees in M array
// Values inside M arrays

// Constraints

// -

// Output Format

// Merged Array
// Cubicle of employees after merging who have even emp_ids

// Sample Input 0

// 3
// 1 3 2
// 4
// 6 8 1 3
// Sample Output 0

// 1 3 2 6 8 1 3
// 2 3 4

#include<iostream>
using namespace std;

void insertArr(int arr[], int size){
    for(int i=0; i<size ; i++)  cin>>arr[i];
}

void mergeArr(int n[], int sizeOf_n, int m[], int sizeOf_m, int final[]){
    int size=sizeOf_n+sizeOf_m;
    for(int i=0; i<size; i++){
        if(i<sizeOf_n)      final[i]=n[i];
        else    final[i]=m[i-sizeOf_n];
    }
}

void findEven(int arr[], int size){
    int count=0;
    for(int i=0; i<size;i++){
        if(arr[i]%2==0){
            cout<<i<<" ";
            count++;
        }
    }
    if(!count)  cout<<-1;
}

int main(){
    int sizeOf_n;
    cin>>sizeOf_n;
    int n[sizeOf_n];
    insertArr(n, sizeOf_n);

    int sizeOf_m;
    cin>>sizeOf_m;
    int m[sizeOf_m];
    insertArr(m, sizeOf_m);

    int merged[sizeOf_n + sizeOf_m];
    mergeArr(n,sizeOf_n,  m,sizeOf_m, merged);
    for(auto x: merged)    cout<<x<<" ";
    cout<<endl;
    // cout<<"hdhd";

    findEven(merged, sizeOf_n+sizeOf_m);
}