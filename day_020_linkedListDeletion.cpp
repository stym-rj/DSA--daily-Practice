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