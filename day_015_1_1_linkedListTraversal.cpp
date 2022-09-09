// Write a program to find the count of prime numbers in the linked list.

// Input Format

// Line 1: it contains number of nodes in the linked list
// Line 2: It contains space separated values in the linked list.

// Constraints

// n must be more than zero

// Output Format

// Output contains the count of prime numbers in the linked list.

// Sample Input 0

// 5
// 1 2 3 4 5
// Sample Output 0

// 3
// Explanation 0

// In the above sample input data 2,3, and 5 are prime numbers so the count of prime number in the linked list is 3

// Sample Input 1

// -1
// 4
// Sample Output 1

// Invalid Number

#include <iostream>
using namespace std;

bool checkPrimeNo(int);

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
            if(this==NULL)  return temp;

            Node* curr=this;
            while(curr->next!=NULL){
                curr=curr->next;
            }
            curr->next=temp;
            // cout<<"entered insertion"<<endl;

            return this;
        }

        void printPrime(){
            // cout<<"entered primeCheck"<<endl;
            Node* curr=this;

            int primeCount=0;
            while(curr!=NULL){
                if(checkPrimeNo(curr->data))    primeCount++;
                curr=curr->next;
            }
            cout<<primeCount<<endl;
        }

};

bool checkPrimeNo(int a){
    int count=0;
    if(a<2)     return 0;
    for(int i=2; i*i<=a; i++){
        if(a%i==0)  return 0;
    }
    return 1;
}

int main(){
    int size;
    cin>>size;
    if(size<1){
        cout<<"Invalid Number"<<endl;
        return 0;
    }

    Node* head=NULL;
    for (int i=0; i<size; i++){
        int data;
        cin>>data;
        head=head->insertAtEnd(data);
    }

    head->printPrime();
    return 0; 
}