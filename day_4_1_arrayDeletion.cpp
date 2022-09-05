// Today is such a beautiful evening after heavy rainfall and kids decided to play in playground, then at the same moment they are deligthed to see the colors of Rainbow in the sky. They observe seven colors like Violet, Indigo,Blue,Green,Yellow,Orange,Red i.e 'V','I','B','G','Y','O','R'.Now your task is to remove a color which is mentioned above as input and display the remaining colors of Rainbow, if the color which you want to delete that is not comes under VIBGYOR then display message as "Color not available".

// Input Format

// User will enter the character which is to be deleted. Example:- V

// Constraints

// Character entered by user must be in uppercase

// Output Format

// It will print remaining colors of VIBGYOR Example:-IBGYOR But if color is Not available then it will print message as shown bellow:- Color not available

// Sample Input 0

// V
// Sample Output 0

// IBGYOR

#include<iostream>
using namespace std;

int main(){
    char arr[]={'V','I','B','G','Y','O','R'};
    char key;
    cin>>key;
    int size=7;
    int count=0;

    for(int i=0; i<size;i++){
        if(arr[i]==key){
            for(int j=i; j<size-1; j++){
                arr[j]=arr[j+1];
            }
            size--;
            count++;
            break;
        }
    }

    if(!count){
        cout<<"Color not available"<<endl;
        return 0;
    }

    for(int i=0; i<size; i++){
        cout<<arr[i];
    }
}