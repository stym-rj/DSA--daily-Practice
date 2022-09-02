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

        Node* insertNode(int _data){
            Node* temp=new Node(_data);
            if(this==NULL)      return temp;
            Node* curr=this;
            while(curr->next!=NULL){
                curr=curr->next;
            }
            curr->next=temp;
            return this;
        }

        void displayList(){
            // cout<<"f444fldsa"<<endl;
            Node*curr=this;
            while(curr!=NULL){
                cout<<curr->data<<endl;
                curr=curr->next;
            }
        }

        void findOddEven(){
            int odd=0,even=0;
            Node* curr=this;
            // cout<<"fldsa"<<endl;
            while(curr!=NULL){
                // if(curr->data==1)   odd+=1;
                if(curr->data%2==0)     even=even+curr->data;
                else    odd=odd+curr->data;
                // cout<<"fldsa"<<endl;
                curr=curr->next;
            }
            cout<<odd<<" "<<even<<endl;
        }

};

int main(){
    int n;
    cin>>n;
    if(n<0 || n>7)  {
        cout<<"Invalid Range";
        return 0;
    }

    Node* head=NULL;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        head=head->insertNode(temp);
    }

    // head->displayList();
    head->findOddEven();

    return 0;
}