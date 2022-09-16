#include <iostream>

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int _data)
    {
        data = _data;
        next = NULL;
        prev = NULL;
    }

    Node *insert(int _data)
    {
        Node *temp = new Node(_data);
        if (this == NULL)
            return temp;

        Node *curr = this;
        while (curr->next != NULL)
            curr = curr->next;
        curr->next = temp;
        temp->prev = curr;

        return this;
    }

    void displayBack()
    {
        // std:: cout<< "entered display back function" <<std:: endl;
        Node *curr = this;
        while (curr->next != NULL)
            curr = curr->next;

        while (curr != NULL)
        {
            std::cout << curr->data << std:: endl;
            curr = curr->prev;
        }
    }

    Node *deleteSecondLastOccurance(int key)
    {
        Node *curr = this;
        Node *last = NULL;
        Node *secondLast = NULL;
        int count = 0;

        while (curr != NULL)
        {
            // std:: cout<<"entered deletion search loop"<<std:: endl;
            if (curr->data == key && count == 0)
            {
                last = curr;
                count++;
            }
            else if (curr->data == key && count > 0)
            {
                secondLast = last;
                last = curr;
                count++;
            }
            curr=curr->next;
        }
        // std:: cout<<"exited deletion search loop"<<std:: endl;
        if (count < 2)
        {
            std::cout << "Deletion not possible" << std::endl;
            return this;
        }
        // std:: cout<<secondLast->data<<std::endl;

        curr = this;
        if(secondLast==curr){
            // std::cout<<"entered condition check "<< std :: endl;
            Node* temp =secondLast;
            curr=curr->next;
            curr->prev=NULL;
            delete (temp);

            return curr;
        }
        else{
            // std:: cout<< "entered else " <<std:: endl;
            while (curr->next != secondLast)    curr = curr->next;
            Node* temp=secondLast;
            curr->next = secondLast->next;
            curr->next->prev = curr;
            delete(temp);
        }

        // std:: cout<< "returning from funciton" <<std :: endl;

        return this;
    }

    int countNodes(){
        // std:: cout<<"entered count nodes function" <<std:: endl;
        Node* curr=this;
        int count=0;
        while(curr->next!=NULL){
            // std:: cout<< " entered count nodes loop " <<std:: endl;
            curr=curr->next;
            count++;
        }

        return count;
    }
};

int main()
{
    Node *head = NULL;
    int size;
    std::cin >> size;
    if (size < 3 || size > 20)
    {
        std::cout << "Invalid list size" << std::endl;
        return 0;
    }
    for (int i = 0; i < size; i++)
    {
        int data;
        std::cin >> data;
        head = head->insert(data);
    }

    // head->displayBack();

    int beforeDeletionNodeCount=head->countNodes();

    int key;
    std::cin >> key;
    head = head->deleteSecondLastOccurance(key);

    int afterDeletionNodeCount=head->countNodes();
    // std:: cout<< " count after deletion done " <<std:: endl;
    if(beforeDeletionNodeCount!=afterDeletionNodeCount)     head->displayBack();
    // else    std:: cout<< "hello "<<std:: endl;

    return 0;
}