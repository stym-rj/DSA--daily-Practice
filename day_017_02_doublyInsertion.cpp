// After an announcement made in a lecture room, it was announced that the students are required to reach auditorium to attend a session. While the auditorium is already almost full and have random free seats, the students of the section decided that each one of them will be holding the address of the next student and the previous student. Means, each student here is aware about the seating of the two other students except the first and the last student to enter the auditorium, who are not aware of the previous and the next student respectively. Write a program to send 10 students to auditorium while each node stores roll number in the data part.

// Input Format

// 23 12 56 67 78 1 2 3 5 4

// Constraints

// -

// Output Format

// 23 12 56 67 78 1 2 3 5 4

// Sample Input 0

// 23 12 56 67 78 1 2 3 5 4
// Sample Output 0

// 23 12 56 67 78 1 2 3 5 4



#include <iostream>

class Node{
    public:
        int data;
        Node* next;
        Node* prev;
        Node(int _data){
            data=_data;
            next=NULL;
            prev=NULL;
        }

        Node* insert(int _data){
            Node* temp=new Node(_data);
            if(this==NULL)      return temp;

            Node* curr= this;
            while(curr->next!=NULL)     curr=curr->next;
            curr->next=temp;
            temp->prev=curr;

            return this;
        }

        void display(){
            Node* curr=this;
            while(curr!=NULL){
                std:: cout<<curr->data<<" ";
                curr=curr->next;
            }
        }

};

int main(){
    Node* head=NULL;
    for ( int  i =0 ; i<10 ; i++){
        int data;
        std:: cin>>data;
        head=head->insert(data);
    }

    head->display();
    return 0;
}