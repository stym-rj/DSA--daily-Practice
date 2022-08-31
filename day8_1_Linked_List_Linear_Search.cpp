// A linked list is used to store Roll Numbers of N students. Priyanka want to check that whether data is stored in palindrome format or not. Write a program to help the priyanka which will provide result in 'Yes' or 'No' depending on the data stored in list is in palindrome format.

// Input Format

// First line will contain one integer value reprenting to value of N.
// N lines each contains one integer value which is representing roll number of student.

// Constraints

// N>=5 && N<15

// Output Format

// It will contain Yes if data is stored in palindrome format and No if not.

// Sample Input 0

// 5
// 17
// 18
// 88
// 81
// 71
// Sample Output 0

// Yes
// Sample Input 1

// 3
// Sample Output 1

// Invalid Input


#include <iostream>
// #include <vector>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
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
            Node* curr2=this;
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

            while(i>=0 && curr2->next!=NULL){
                if(curr2->data!=arr[i-1]){
                    cout<<"No"<<endl;
                    return;
                }
                curr2=curr2->next;
                // cout<<arr[i]<<endl;
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
    
    // if()

    if(size<5 || size>15){
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