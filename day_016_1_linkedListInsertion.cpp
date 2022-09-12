#include <iostream>
class Node{
    public:
        std:: string name;
        int strength;
        Node* next;

        Node(std:: string _name, int _strength){
            name=_name;
            strength=_strength;
            next=NULL;
        }

        Node* insertAtEnd(std:: string _name, int _strength){
            Node* temp= new Node(_name, _strength);
            if(this==NULL)      return temp;

            Node* curr=this;
            while(curr->next!=NULL)     curr=curr->next;
            curr->next=temp;

            return this;
        }
        

        Node* sortedInsert(std:: string _name, int _strength){
            Node* temp= new Node(_name, _strength);
            if(this==NULL)      return temp;

            Node* curr=this;
            if(curr->strength<temp->strength){
                temp->next=curr;
                return temp;
            }
            while(curr->next!=NULL && curr->next->strength>temp->strength){
                curr=curr->next;
            }
            temp->next=curr->next;
            curr->next=temp;

            return this;
        }

        void displayLL(){
            Node* curr=this;
            while(curr!=NULL){
                std:: cout<<curr->name<<" ";
                curr=curr->next;
            }
            std:: cout<< std:: endl;
        }

};

int main(){
    Node* head=NULL;

    int size;
    std:: cin>> size;
    if(size<5 || size>10){
        std:: cout<<"Invalid Input";
        return 0;
    }

    for (int i=0 ; i< size ; i++){
        std:: string name;
        int strength;
        std:: cin>>name>>strength;
        head=head->insertAtEnd(name, strength);
    }

    head->displayLL();

    std:: string name;
    int strength;
    std:: cin>>name>>strength;

    head=head->sortedInsert(name, strength);
    head->displayLL();

    return 0;
}