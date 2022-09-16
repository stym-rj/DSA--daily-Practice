// WAP to accept N Numbers into to an Singly Link list and delete the largest Number from the Link list.

// For Example if 5 numbers are 3 5 8 6 4 then as 8 is largest Number, delete 8 then the output will be 3 5 6 4

// Input Format

// First line will be the number N. Second Line will accect N numbers from the user.

// Sample Input 1: 5
// 4 8 3 6 2

// Sample Output 1: 4 3 6 2

// Sample Input 2: 6
// 7 5 3 9 1 4

// Sample Output 2:

// 7 5 3 1 4

// Constraints

// All the inputs are positive integers and numbers entered in the second line of input are non-duplicate

// Output Format

// Prints all the numbers after removing the number from the Linked List

// Sample Input 0

// 5
// 2 8 7 9 3
// Sample Output 0

// 2 8 7 3



#include <iostream>

class Node{
    public:
        int data;
        Node* next;
        Node(int _data){
            data=_data;
            next=NULL;
        }

        Node* insert(int _data){
            Node* temp=new Node(_data);
            if(this==NULL)      return temp;

            Node* curr=this;
            while(curr->next!=NULL)      curr=curr->next;
            curr->next=temp;

            return this;
        }

    void displayLL(){
        Node* curr=this;
        while(curr!=NULL){
            std:: cout<<curr->data<<" ";
            curr=curr->next;
        }
        std:: cout << std:: endl;
    }

    Node* deleteLargestElement(){
        // std:: cout<<"entered deletion"<<std:: endl;
        Node* curr=this;
        Node* largest=curr;
        curr=curr->next;

        while(curr!=NULL){
            // std:: cout<<"entered deletion selection loop "<<std:: endl;
            if(largest->data < curr->data)      largest=curr;
            curr=curr->next;
        }

        curr=this;
        // std:: cout<<largest->data<<std:: endl;
        if(curr==largest)   return curr->next;
        while( curr->next!=largest ){
            // std:: cout<<"entered deletion traversal loop"<<std:: endl;
            curr=curr->next;
            // std:: cout<<"ended temp deletion traversal loop"<<std:: endl;
        }
        Node* temp=largest;
        curr->next=largest->next;
        delete(temp);

        return this;
    }

};

int main(){
    Node* head=NULL;
    
    int size;
    std:: cin>>size;
    for(int i = 0 ; i<size ; i++ ){
        int data;
        std:: cin>>data;
        head=head->insert(data);
    }

    head = head->deleteLargestElement();

    head->displayLL();
    return 0;
}