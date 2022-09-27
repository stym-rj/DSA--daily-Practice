#include <iostream>

class Node{
    public:
        int data;
        Node* next;
        Node(int _data){
            data=_data;
            next=NULL;
        }

        Node* insert(int _data) {
            Node* temp = new Node(_data);
            if(this == NULL) {
                temp->next = temp;
                return temp;
            }

            Node* curr = this;
            while (curr->next != this)  curr = curr->next;
            temp->next = curr->next;
            curr->next = temp;

            return this;
        }

        Node* deleteElement (int _key) {
            Node * curr = this;
            int count = -1;
            while (curr->next != this) {
                count++;
                if(count == _key - 1) {
                    Node* temp = curr->next;
                    curr->next = temp ->next;
                    delete(temp);
                }
                curr = curr->next;
            }
            return this;
        }

        void display() {
            Node* curr = this;
            do {
                std :: cout << curr->data << " ";
                curr = curr->next;
            } while (curr != this);
        }

};

int main(){
    Node* head = NULL;

    int key;
    std :: cin >> key;

    int size;
    std :: cin >> size;

    for( int i = 0 ; i < size ; i++) {
        int data;
        std :: cin >> data;
        head = head->insert(data);
    }


    head = head->deleteElement(key);

    head->display();
    return 0;
}