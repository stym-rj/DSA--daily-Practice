// On September 1,2022 Data Structure exam was taken and it was written by 5 students, and accordingly concerned faculty member uploaded the marks of those 5 students .But one of the student was not able to attempt exam so with the request , his exam was re-conducted and later on faculty is going to upload marks ,but before this faculty must needs to enter rollno and then after his marks.

// Input Format

// First line consist with 5 numbers needs to be inserted Second Line consist with the position, that where to insert Third line consist with the data which is to be inserted.

// Constraints

// Only numeric data can be entered

// Output Format

// Displayed final inserted element on its actual position which is given as input.

// Sample Input 0

// 23 45 67 12 5
// 2
// 15
// Sample Output 0

// 23 15 45 67 12 5




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
            while(curr->next!=NULL)     curr=curr->next;
            curr->next=temp;

            return this;
        }

        Node* sortedInsert(int _data, int roll){
            Node* temp=new Node(_data);
            if(this==NULL)      return temp;
            Node* curr=this;
            if(roll==1){
                temp->next=this;
                return temp;
            }
            int count=2;
            while(curr->next!=NULL && count<roll){
                curr=curr->next;
                count++;
            }
            temp->next=curr->next;
            curr->next=temp;

            return this;
        }

        void displayLL(){
            Node* curr=this;
            while(curr!=NULL){
                std:: cout<<curr->data<<" ";
                curr=curr->next;
            }
        }

};

int main(){
    Node* head=NULL;
    for ( int i = 0; i<5; i++){
        int data;
        std:: cin>>data;
        head=head->insert(data);
    }

    int data, roll;
    std:: cin>>roll>>data;
    head=head->sortedInsert(data, roll);

    head->displayLL();

    return 0;
}