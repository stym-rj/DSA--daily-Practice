// Write a program to display the count of nodes having odd number in a given singly linked list. If no odd number is present in the linked list then display "No odd number present". Linked list will contain only positive number, if you do not want add next number to the linked list then enter -1.

// Input Format

// Enter a list of integers ending with -1.

// Constraints

// Linked lis should not be empty

// Output Format

// Display the count of nodes having odd number in a given singly linked list.

// Sample Input 0

// 5 6 4 3 -1
// Sample Output 0

// 2
// Sample Input 1

// 2 6 4 8 -1
// Sample Output 1

// No odd number present



#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int _data){
            data=_data;
            next=NULL;
        }

        Node* insertAtEnd(int _data){
            // cout<<"inserted"<<endl;
            Node* temp=new Node(_data);
            if(this==NULL)  return temp;

            Node* curr=this;
            while(curr->next!=NULL){
                curr=curr->next;
            }
            curr->next=temp;
            return this;
        }

        void findOdd(){
            Node* curr=this;
            if(curr==NULL){
                cout<<"No odd number present"<<endl;
                return;
            }
            // cout<<"entered"<<endl;
            int count=0;
            while(curr!=NULL){
                // cout<<"iterated"<<endl;
                if(curr->data%2!=0){
                    count++;
                }
                curr=curr->next;
            }
            if(count)   cout<<count<<endl;
            else    cout<<"No odd number present";
        }

        void displayList(){
            Node* curr=this;
            while(curr!=NULL){
                cout<<curr->data<<endl;
                curr=curr->next;
            }
        }

};

int main(){
    Node* head=NULL;

    int n;
    cin>>n;
    while(n!=-1){
        head=head->insertAtEnd(n);
        cin>>n;
    }
    
    // head->displayList();
    head->findOdd();
    
    return 0;
}