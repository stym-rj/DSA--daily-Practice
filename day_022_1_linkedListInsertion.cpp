#include <iostream>

class Node{
    public:
        char data;
        Node* next;
        Node(char _data){
            data=_data;
            next=NULL;
        }

        Node* insert(char _data) {
            Node* temp = new Node(_data);
            if (this == NULL)   return temp;

            Node* curr = this;
            while (curr->next != NULL)  curr = curr->next;
            curr->next = temp;

            return this;
        }

        void display() {
            Node* curr = this;
            while(curr!=NULL) {
                std :: cout << curr->data << " ";
                curr = curr->next;
            }
        }

};

int main(){
    Node* head = NULL;
    
    int size;
    std :: cin >> size;

    for (int i = 0; i < size; i++) {
        char data;
        std :: cin >> data;
        head = head->insert(data);
    }

    head->display();

    // int 

    return 0;
}