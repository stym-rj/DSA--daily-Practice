// Create a two-way linked list of N integer elements. Delete all the occurrences of the elements from the first occurrence till second last occurrence of the entered specific value. The number of elements should be greater than 2 and less than equal to 20 in the list. If size is not in the mention range than program should display "Invalid list size" without asking for the second input. If the number to be deleted is not present or present only one time, display the message "Deletion not possible".

// Input Format

// Your program should take three types of inputs. First input will represent the number of elements in the two-way linked list. Second type input will be the elements of the linked list from the first elements till last element. And the third input should be the value to be deleted.

// Constraints

// The number of elements (N) in the list should be 2 < N <=20

// Output Format

// Your program should display the elements of the linked list in backward direction after deleted elements. If any condition fails, it should display the corresponding mentioned messages.

// Sample Input 0

// 4
// 1
// 2
// 3
// 2
// 2
// Sample Output 0

// 2
// 3
// 1
// Sample Input 1

// 3
// 1
// 2
// 3
// 2
// Sample Output 1

// Deletion not possible



#include <iostream>

class Node {
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int _data) {
        data = _data;
        next = NULL;
        prev = NULL;
    }

    Node* insert(int _data) {
        Node* temp = new Node(_data);
        if(this == NULL)    return temp;
        
        Node* curr = this;
        while(curr->next != NULL)   curr = curr->next;
        curr->next = temp;
        temp->prev = curr;

        return this;
    }

    Node* deleteKey(int _key) {
        if (this == NULL)   return NULL;
        Node* curr = this;
        int count = 0;
        while (curr != NULL) {
            if(curr->data == _key)  count++;
            curr=curr->next;
        }

        if (count > 1) {
            curr = this;
            
            while(curr != NULL &&  count > 1) {
                if(curr->data == _key) {
                    if (curr->prev == NULL) {
                        Node* temp = curr;
                        curr->next->prev = NULL;
                        curr = curr->next;
                        delete(temp);
                    }
                    else if (curr->next == NULL) {
                        Node* temp = curr;
                        curr->prev->next = NULL;
                        delete(temp);
                        count--;
                    }
                    else {
                        Node* temp = curr;
                        curr->prev->next = curr->next;
                        curr->next->prev = curr->prev;
                        curr = curr->next;
                        delete(temp);
                        count--;
                    }
                }
                else    curr=curr->next;
            }
            
        }
        else    return this;
        
        return this;
    }

    int sizeOfLL() {
        Node* curr = this;
        int count = 0;
        while(curr->next != NULL) {
            count++;
            curr = curr->next;
        }
        return count;
    }

    void display() {
        if (this == NULL)    return;
        Node* curr = this;
        while(curr->next != NULL)   curr=curr->next;
        Node* lastNode = curr;

        while(lastNode != NULL) {
            std :: cout << lastNode->data << std :: endl;
            lastNode = lastNode->prev;
        }
    }

};
int main() {
    Node* head = NULL;

    int size;
    std :: cin >> size;
    if(size < 3 || size > 20) {
        std :: cout << "Invalid list size" << std :: endl;
        return 0;
    }

    for (int i = 0; i < size; i++) {
        int data;
        std :: cin >> data;
        head = head->insert(data);
    }

    int sizeBefore = head->sizeOfLL();
    // std :: cout <<  "---" << sizeBefore << std :: endl;

    int key;
    std :: cin >> key;
    head = head->deleteKey(key);
    int sizeAfter = head->sizeOfLL();
    // std :: cout << "---" << sizeAfter << std :: endl;
    if (sizeBefore == sizeAfter) {
        std :: cout << "Deletion not possible" << std :: endl;
        return 0;
    }

    // std :: cout << " ----" << std :: endl;
    head->display();
}