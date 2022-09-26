#include <iostream>

class Node
{
public:
    int data;
    Node *next;
    Node(int _data)
    {
        data = _data;
        next = NULL;
    }

    Node *insert(int _data)
    {
        // std:: cout<<"entered insert function"<<std:: endl;
        Node *temp = new Node(_data);
        if (this == NULL)
        {
            temp->next = temp;
            return temp;
        }
        else
        {
            Node *curr = this;
            while (curr->next != this)
                curr = curr->next;
            curr->next = temp;
            temp->next = this;
        }

        return this;
    }

    Node* deleteHead() {
        Node* ans = this;
        Node* curr = this;

        while (curr->next != ans)  curr = curr->next;
        
        if (curr == ans) {
            return NULL;
        }
        Node* temp = ans;
        ans = ans->next;
        curr->next = ans;
        delete(temp);

        return ans;
    }

    void displayLL()
    {
    Node *curr = this;
    do
    {
        std::cout << curr->data << " ";
        curr = curr->next;
    } while (curr != this);
    }
};

int main()
{
    Node *head = NULL;

    int size;
    std::cin >> size;
    if(size < 0 || size > 1000) {
        std :: cout << "Invalid Number" << std :: endl;
        return 0;
    }
    for (int i = 0; i < size; i++)
    {
        int a;
        std::cin >> a;
        head = head->insert(a);
    }

    if (head == NULL) {
        std :: cout << "Underflow" << std :: endl;
        return 0;
    }

    head = head->deleteHead();

    if(head == NULL) {
        std :: cout << "CLL is Empty" << std :: endl;
        return 0;
    }

    head->displayLL();

    return 0;
}