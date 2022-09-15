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
            if ( this== NULL)   return temp;

            Node* curr=this;
            while(curr->next!=NULL) curr= curr->next;
            temp->prev=curr;
            curr->next=temp;

            return this;
        }

        Node* removeOdds(){
            Node* curr=this;
            while(curr!=NULL && curr->next!=NULL){
                if(curr->data%2!=0){
                    curr->prev->next=curr->next;
                    curr->next->prev=curr->prev;
                }
                curr=curr->next;
            }

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
    int size;
    std:: cin>>size;

    for(int i=0 ; i<size; i++){
        int data;
        std:: cin>>data;
        head=head->insert(data);
    }

    head=head->removeOdds();
    head->displayLL();

    return 0;
}