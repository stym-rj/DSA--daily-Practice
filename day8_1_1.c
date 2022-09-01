// #include <iostream>
#include<stdio.h>
// #include <vector>
// using namespace std;
#include <stdlib.h>
 
struct Node {
    int data;
    struct Node* next;
};
struct Node{
    // public:
        int data;
        struct Node* next;
        Node(int _data){
            data=_data;
            next=NULL;
        }

        Node* insertAtEnd(int _data){
            Node* temp=new Node(_data);
            Node* curr=this;
            while(curr->next!=NULL){
                curr=curr->next;
            }
            curr->next=temp;
            return this;
        }


        // 17 18 88 81 71
        void isPalindrome(int _size){
            Node* curr=this;
            int arr[_size];
            int i=0;
            while(curr!=NULL){
                // arr[i]=curr->data;

                int temp=curr->data, temp2=curr->data, digit,rev=0;
                
                do
                {
                    digit = temp2 % 10;
                    rev = (rev * 10) + digit;
                    temp2 = temp2 / 10;
                } while (temp2 != 0);


                arr[i]=rev;
                i++;

                curr=curr->next;
            }

            // for(auto x: arr)    cout<<x<<" ";

            Node* curr2=this;
            while(i>=0 && curr!=NULL){
                if(curr->data!=arr[i-1]){
                    cout<<"No"<<endl;
                    return;
                }
                curr=curr->next;
                i--;
            }
            cout<<"Yes";
        }

        void traverse(){
        Node *curr=this;
        while(curr!=NULL){
            cout<<curr->data<<endl;
            curr=curr->next;
        }
    }

};

int main(){
    int size;
    cin>>size;

    if(size<=3){
        cout<<"Invalid Input"<<endl;
        return 0;
    }
    
    int temp;
    cin>>temp;

    Node * head=new Node(temp);

    for(int i=0 ; i< size-1; i++){
        int roll;
        cin>>roll;
        head=head->insertAtEnd(roll);
    }

    // head->traverse();


    head->isPalindrome(size);

    return 0;
}