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