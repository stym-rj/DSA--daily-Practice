// Given an array a[] of M elements, the task is to write a program to search a given element X in a[].

// Input Format

// you have to take two input lines: first line takes the array element second line takes the value of x

// Sample Input 1 10 20 80 30 60 50 110 100 130 170 110

// Sample Output 1 7

// Sample Input 2 10 20 80 30 60 50 110 100 130 170 175

// Sample Output 1 -1

// Constraints

// Array size should be between 10-50 elements

// Output Format

// The program prints the position of the element found else it prints -1

// Sample Input 0

// 10 20 80 30 60 50 110 100 130 170
// 110
// Sample Output 0

// 7

#include<iostream>
using namespace std;
int main(){
    int size;
    size=10;
    int count=0;
    int arr[size];

    for(int i=0; i<size; i++)   cin>>arr[i];

    int key;
    cin>>key;

    for(int i=0; i<size; i++){
        if(arr[i]==key){
            cout<<i+1<<endl;
            count++;
            break;
        }
    }

    if(!count)  cout<<-1;
}