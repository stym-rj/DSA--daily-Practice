// Akash is found of collecting unique coins. Every coin has a denomination i.e Z. One Afternoon, he has K coins. He wnat to arrange K coins in non-increaasing order as per denomination. Write a programming solution to help akash. - Note: Use Insertion Sort

// Input Format

// 1st line contain K Coins
// 2nd line contain space separated denomination from K coins
// Constraints

// K>0 & K<50
// Z>0 & Z<100
// Output Format

// space separated sorted denomination from K coins

// Sample Input 0

// 5
// 10 4 3 7 8
// Sample Output 0

// 10 8 7 4 3



#include<iostream>
using namespace std;

void swap(int * a, int * b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void insertionSort(int arr[], int size){
    for(int i=0; i<size-1; i++){
        int key=arr[i+1];
        int j=i;

        while(j>=0 && key>arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main(){
    int size;
    cin>>size;

    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    insertionSort(arr, size);
    for(auto x: arr)    cout<<x<<" ";
}