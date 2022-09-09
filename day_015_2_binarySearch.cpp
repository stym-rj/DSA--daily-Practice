// You need to find index (0-based) of a given key in a sorted array. Use only Binary Search.

// Input Format

// The first line contains N.
// Next line contains N integers of the array.
// The next line contains the key to be searched.
// If element is not found print -1.

// Constraints

// N<=1000000

// Output Format

// Single Interger index or -1.

// Sample Input 0

// 5
// 1 2 3 4 5
// 4
// Sample Output 0

// 3

#include<iostream>

int binarySearch(int arr[], int size, int key){
    int mid, high=size-1, low = 0;
    while(low<=high){
        mid=(high+low)/2;
        if(arr[mid]==key)    return mid;
        else if(arr[mid]>key)     high=mid;
        else    low=mid+1;
    }
    return -1;
}

int main(){
    int size;
    std::cin>>size;

    int arr[size];
    for(int i= 0 ;i<size; i++)      std::cin>>arr[i];

    int key;
    std::cin>>key;
    std::cout<<binarySearch(arr, size, key);
}