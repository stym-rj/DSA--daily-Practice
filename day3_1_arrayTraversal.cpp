//Alice went for shopping and bought 8 goods costing different prices. At the time of billing she realises that she did not have enough money. Now, she have decided to remove the item costing maximum amount and replace it with another item whose price is same as the item costing minimum amount. Help Alice and display final prices on the screen.

// Note: if more than one element cost maximum price, replace the first item.

// Example 1: Input: 250 1000 50 20 10 100 200 25 Output: 250 10 50 20 10 100 200 25

// Example 2: Input: 2500 2500 50 20 10 100 200 25 Output: 10 2500 50 20 10 100 200 25

// Input Format

// Input Format:

// Sample Input: 250 1000 50 20 10 100 200 25

// Constraints

// 8 items prices are required

// Output Format

// Prints the final prices of different items after replacing

// Sample Output: 10 2500 50 20 10 100 200 25

// Sample Input 0

// 250 250 250 250 250 250 250 250
// Sample Output 0

// 250 250 250 250 250 250 250 250

#include<iostream>
using namespace std;

int main(){
    int arr[8];

    for(int i=0; i<8; i++)      cin>>arr[i];

    int min=arr[0],max=arr[0], max_key=0, min_key=0;
    for(int i=0; i<8; i++){
        if(min>arr[i]){
            min=arr[i];
            min_key=i;
        }
        else if(max<arr[i]){
            max=arr[i];
            max_key=i;
        }
    }

    // cout<<"---------"<<min<<"   "<<max<<endl;
    // cout<<"---------"<<min_key<<"   "<<max_key<<endl;
    for(int i=0; i<8; i++){
        if(i==max_key){
            arr[i]=min;
        }
        // else if(i==max_key)     arr[i]=max;
    }

    for(auto x: arr)    cout<<x<<" ";
}