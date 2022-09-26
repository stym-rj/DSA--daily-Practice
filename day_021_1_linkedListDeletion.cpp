// Rahul asked his friend to write a program to delete all nodes having vowels (a, e, i, o, u) character in a given singly linked list. Where each node store a character. If no vowels found in linked list then display "No vowel in linked list". In Linked list each node contain one character. The node will be defined :

// class Node { public: char data; Node* next; }

// Input Format

// Enter a list of charater ending with '\0'(NULL).

// Constraints

// Linked list should not be empty

// Output Format

// Display resultant singly linked list after deletion of all nodes having vowel character in a given singly linked list.

// Sample Input 0

// c
// o
// m
// p
// u
// t
// e
// r
// Sample Output 0

// c-->m-->p-->t-->r
// Explanation 0

// Input: c o m p u t e r Output: c-->m-->p-->t-->r

// Sample Input 1

// s
// c
// i
// e
// n
// c
// e
// Sample Output 1

// s-->c-->n-->c
// Explanation 1

// INPUT: s c i e n c e OUTPUT: s-->c-->n-->c



#include <iostream>

class Node{
    public:
        char data;
        Node* next;
        Node(char _data){
            data=_data;
            next=NULL;
        }

        Node* insert (char _data) {
            Node* temp = new Node(_data);
            if (this == NULL)   return temp;

            Node* curr = this;
            while (curr->next != NULL)  curr=curr->next;
            curr->next = temp;

            return this;
        }

        Node* deleteLL() {
            // std :: cout << "entered deletion" << std :: endl;
            Node* ans = this;
            Node* curr = ans;
            while(curr->next != NULL && curr->next->next != NULL) {
                if(curr->data == 'a' || curr->data == 'e' || curr->data == 'i' || curr->data == 'o' || curr->data == 'u') {
                    Node* temp = curr;
                    ans = curr->next;
                    curr=curr->next;
                    delete(temp);
                }
                // std :: cout << "entered deletion loop" << std :: endl;
                if(curr->next->data == 'a' || curr->next->data == 'e' || curr->next->data == 'i' || curr->next->data == 'o' || curr->next->data == 'u') {
                    Node* temp = curr->next;

                    curr->next = temp->next;
                    // std :: cout << "deleted an element" << std :: endl;
                    delete(temp);
                }
                else    curr=curr->next;
                // std :: cout << "iterate to next" << std :: endl;
            }
            if (curr->next->data == 'a' || curr->next->data == 'e' || curr->next->data == 'i' || curr->next->data == 'o' || curr->next->data == 'u') {
                Node* temp = curr->next;
                curr->next = temp->next;
                delete(temp);
            }
            // std :: cout << "returning from delete" << std :: endl;
            return ans;
        }

        void display() {
            // std :: cout << "entered display" << std :: endl;
            Node* curr = this;
            while (curr != NULL) {
                if (curr->next == NULL)     std :: cout << curr->data;
                else    std :: cout << curr->data << "-->";
                curr=curr->next;
            }
        }

        int sizeOfLL(){
            Node* curr = this; 
            int count = 0;
            while (curr->next != NULL){
                count++;
                curr=curr->next;
            }

            return count;
        }

};

int main(){
    Node* head = NULL;

    // head=head->insert('i');
    // head=head->insert('i');
    // head=head->insert('i');
    // head=head->insert('i');
    // head=head->insert('p');
    // head=head->insert('i');
    // head=head->insert('i');


    char ch[10];
    for(int i =0; i< 10; i++ ) {
        std :: cin >> ch[i];
    }
    int i = 0;
    while (ch[i] != '\0') {
        head = head->insert(ch[i]);
        i++;
    }

    int sizeBefore = head->sizeOfLL();
    head = head->deleteLL();
    // std :: cout << "returned after deletion " << std :: endl;
    int sizeAfter = head->sizeOfLL();
    if(sizeBefore == sizeAfter) {
        std :: cout << "No vowel in linked list" << std :: endl;
        return 0;
    }
    head->display();
    return 0;
}