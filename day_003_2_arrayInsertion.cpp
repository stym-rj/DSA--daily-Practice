// A task is assigned to some surveyors to store temparature in an array daily for 8 days.

// An array for storing temperature is used by the surveyor but they forget to insert one element at some positions. Index 0 1 2 3 4 5 6 7 Temp. 30 40 35 25 20 10 23

// If they insert 15 at index 4 then the array looks like:

// Index 0 1 2 3 4 5 6 7
// Temparature 30 40 35 25 15 20 10 23

// So, you decided to create a function to insert the temperature at any given position in an array so, that if insertion is required then they can insert it.

// Input Format

// You have to take three line inputs where
// first line contains an array of temperature separated by space
// second line input contains the position index where we want to insert element(where index position starts from 0)
// Third line input contains the element you want to insert.

// Constraints

// Temparature values must be an integer values. Capacity of an array to store is according to 8 days temparature data only.

// Output Format

// Prints all the temperatures given in an array after inserting the temparature at given index position. Output is comma separated values where there is no comma after last element. If the position given is not in the array index range then display an error message "Invalid Position".

// Sample Input 0

// 30 40 35 25 20 10 23
// 3
// 15
// Sample Output 0

// 30,40,35,15,25,20,10,23
// Sample Input 1

// 5 15 20 23 34 45 45
// -1
// 5
// Sample Output 1

// Invalid Position

#include<iostream>
using namespace std;

int main(){
    int arr[8];

    for(int i=0; i<7; i++)      cin>>arr[i];

    int index,key;
    cin>>index;
    if(index<0 || index>7){
        cout<<"Invalid Position";
        return 0;
    }
    cin>>key;

    for(int i=7; i>index; i--){
        arr[i]=arr[i-1];
    }
    arr[index]=key;

    for(int i=0; i<8; i++){
        if(i==7){
            cout<<arr[i];
            break;
        }
        cout<<arr[i]<<",";
    }
}