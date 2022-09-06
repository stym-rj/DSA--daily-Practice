// You are given two integers representing the size of two different sized arrays. Take the elements of the arrays from the user in the non-increasing order. If the elements are not in sorted order in any array, display the message “Incorrect Array Elements”. Merge the elements of the given arrays in sorted order and display them. The size of the array should be greater than 0 and less than equal to 20. If array will not be in the given range then display the message “Invalid Array”.

// Input Format

// Your program should take the 4 types of inputs. The first input will represent the size of the first array (n1). Second inputs will represent the elements of the first array. Third input will represent the size of second array (n2). And fourth input will represent the elements of the second array.

// Constraints

// Size of the arrays should be 0 < n1 <= 20 and 0 < n2 <= 20. If the size will not be in the range, then it should not take the further inputs and display the message “Invalid Array”.
// If the elements of the array will not be in the required order, it should not take the further inputs and display the message “Incorrect Array Elements”.
// If the size of two arrays will be same, then do not take further inputs and display the message “Invalid Array”.
// Output Format

// Should display the elements of the merged array in non-increasing order.

// Sample Input 0

// 4
// 40
// 30
// 20
// 10
// 5
// 15
// 11
// 6
// 4
// 1
// Sample Output 0

// 40
// 30
// 20
// 15
// 11
// 10
// 6
// 4
// 1



#include<iostream>
using namespace std;

bool arrayLengthCheck(int a){
    if(a<=0 || a>=20)   return 0;
    return 1;
}

bool arrayInputAndCheck(int arr[], int size){
    int prev, curr;
    cin>>curr;
    arr[0]=curr;
    prev=curr;

    for(int i=1;i<size; i++){
        cin>>curr;
        if(curr>prev){
            cout<<"Incorrect Array Elements"<<endl;
            return 0;
        }
        arr[i]=curr;
        prev=curr;
    }
    return 1;
}

void merge(int arr1[], int size1, int arr2[], int size2, int ans[]){
    int a=0, b=0;
    for(int i=0; i<size1+size2; i++){
        if(a<size1 && b<size2){
            if(arr1[a] >= arr2[b]){
                ans[i]=arr1[a];
                a++;
            }
            else if(arr2[b]>=arr1[a]){
                ans[i]=arr2[b];
                b++;
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

void displayArr(int arr[], int size){
    for(int i=0; i<size ; i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int curr, prev, size1, size2;

    cin>>size1;
    int arr1[size1];
    if(!arrayLengthCheck(size1)){
        cout<<"Invalid Array"<<endl;
        return 0;
    }

    if(!arrayInputAndCheck(arr1, size1))    return 0;
    // cout<<"inputted arr1"<<endl;

    cin>>size2;
    int arr2[size2];
    
    if(size1==size2){
        cout<<"Invalid Array"<<endl;
        return 0;
    }


    if(!arrayLengthCheck(size2)){
        cout<<"Invalid Array"<<endl;
        return 0;
    }

    if(!arrayInputAndCheck(arr2, size2))    return 0;
    // cout<<"inputted arr2"<<endl;

    int ans[size1+size2];
    // cout<<"merging"<<endl;
    merge(arr1, size1, arr2, size2, ans);
    // cout<<"merged"<<endl;
    displayArr(ans, size1+size2);
    // cout<<"displayed"<<endl;

    return 0;
}