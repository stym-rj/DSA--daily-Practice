// WAP to add all the even Numbers Present in the Singly Linked List. if no even numbers Present in the link list then display "No Even numbers Present".

// Input Format

// First line must be number of elements N Next N lines will accept N numbers.

// Sample input
// 4
// 2 6 7 8

// Sample output
// 16

// Constraints

// Value of N Must be Positive and Greater than 0

// Output Format

// After adding all the even nos present in the singly Linked list dispaly the sum.

// Sample Input 0

// 5
// 3 4 6 7 9
// Sample Output 0

// 10
// Explanation 0

// To Add All the Even Numbers Present in the Singly link list

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int _data){
        data=_data;
        next=NULL;
    }

    Node* insertAtEnd(int _data){
        Node* temp=new Node(_data);
        if(this==NULL)  return temp;

        Node* curr=this;
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->next=temp;

        return this;
    }

    void sumOfEvens(){
        Node* curr=this;
        int even=0;
        while(curr!=NULL){
            if(curr->data%2==0)     even+=curr->data;
            curr=curr->next;
        }

        if(even)    cout<<even<<endl;
        else    cout<<"No Even numbers Present"<<endl;
    }


};
int main(){
    int size;
    cin>>size;
    if(size<=0) return 0;

    Node* head=NULL;
    for(int i=0; i<size; i++){
        int temp;
        cin>>temp;
        head=head->insertAtEnd(temp);
    }

    head->sumOfEvens();
}