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