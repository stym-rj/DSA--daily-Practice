// You are given two integers representing the size of two different sized arrays. Take the elements of the arrays from the user in the non-decreasing order. If the elements are not in sorted order in any array, display the message "Incorrect Array Elements". Merge the elements of the given arrays in sorted order and display them. The size of the array should be greater than 0 and less than equal to 20. If array will not be in the given range then display the message "Invalid Array".

// Input Format

// Your program should take the 4 types of inputs. The first input will represent the size of the first array (n1). Second input will represent the elements of the first array. Third input will represent the size of second array (n2). And fourth input will represent the elements of the second array.

// Constraints

// Size of the arrays should be 0 < n1 <= 20 and 0 < n2 <= 20. If the size will not be in the range, then it should not take the further inputs and display the message "Invalid Array".
// If the elements of the array will not be in the required order, it should not take the further inputs and display the message "Incorrect Array Elements".
// If the size of two arrays will be same, then do not take further inputs and display the message "Invalid Array".
// Output Format

// Should display the elements of the merged array in non-decreasing order.

// Sample Input 0

// 4
// 10
// 20
// 30
// 40
// 5
// 1
// 5
// 7
// 11
// 15
// Sample Output 0

// 1
// 5
// 7
// 10
// 11
// 15
// 20
// 30
// 40

#include<iostream>
using namespace std;

bool checkArrSize(int size){
    if(size<1 || size>20)   return 0;
    return 1;
}

bool inputArr(int arr[], int size){
    int curr, prev;
    cin>>curr;
    arr[0]=curr;
    prev=curr;
    for(int i=1 ; i<size ; i++){
        cin>>curr;
        if(curr<prev)       return 0;
        arr[i]=curr;
        prev=curr;
    }
    return 1;
}

void merge(int arr1[], int size1, int arr2[], int size2, int ans[]){
    int a=0, b=0;
    for(int i=0; i<size1+size2; i++){
        if(a<size1 && b<size2){
            if(arr1[a]>arr2[b]){
                ans[i]=arr2[b];
                b++;
            }
            else{
                ans[i]=arr1[a];
                a++;
            }
        }
        else if(a<size1){
            ans[i]=arr1[a];
            a++;
        }
        else if(b<size2){
            ans[i]=arr2[b];
            b++;
        }
    }
}

void displayArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int size1;
    cin>>size1;
    if(!checkArrSize(size1)){
        cout<<"Invalid Array"<<endl;
        return 0;
    }

    int arr1[size1];
    if(!inputArr(arr1, size1)){
        cout<<"Incorrect Array Elements"<<endl;
        return 0;
    }

    int size2;
    cin>>size2;
    if(!checkArrSize(size2)){
        cout<<"Invalid Array"<<endl;
        return 0;
    }

    if(size1==size2){
        cout<<"Invalid Array";
        return 0;
    }

    int arr2[size2];
    if(!inputArr(arr2, size2)){
        cout<<"Incorrect Array Elements"<<endl;
        return 0;
    }

    int ans[size1+size2];
    merge(arr1, size1, arr2, size2, ans);
    displayArray(ans, size1+size2);
}