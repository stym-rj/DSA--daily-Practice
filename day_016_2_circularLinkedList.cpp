#include <iostream>
#include <string>

class Node{
    public:
        int data;
        Node* next;
        Node(int _data){
            data=_data;
            next=NULL;
        }

        Node* insert(int _data){
            // std:: cout<<"entered insert function"<<std:: endl;
            Node* temp= new Node( _data);
            if(this==NULL){
                temp->next=temp;
                return temp;
            }
            else{
                Node* curr=this;
                while(curr->next!=this)     curr=curr->next;
                curr->next=temp;
                temp->next=this;
            }
            
            return this;
        }

        void printEven(){
            Node* curr=this;
            std:: string s="";
            do{
                if(curr->data%2==0){
                    s+=std::to_string(curr->data) + " ";
                    std:: cout<<s<<std:: endl;
                }
                curr=curr->next;
            }while(curr!=this);
        }

        void displayLL(){
            if(this==NULL)      return;
            Node* curr=this;
            do{
                std:: cout<<curr->data<<" ";
                curr=curr->next;
            }while(curr!=this);
        }
};

int main(){
    Node *head=NULL;

    int size;
    std:: cin>>size;
    for(int i= 0 ; i< size ; i++){
        int a;
        std:: cin>>a;
        head=head->insert(a);
    }
        // head->displayLL();
        head->printEven();
    return 0;
}