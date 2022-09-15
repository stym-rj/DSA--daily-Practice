#include <stdio.h>

struct Node{
    int data;
    struct Node *next;
};

void insertNode(struct Node *head, int _data){
    struct Node *temp= (struct Node*)malloc(sizeof(struct Node));
    if(head==NULL)      return temp;
}

int main(){
    struct Node *head=NULL;

    int size;
    scanf("%d",&size);
    for ( int i = 0 ; i < size ; i++ ){
        int temp;
        scanf("%d",&temp);
        head=insertNode(head, temp);
    }
}

// struct node *link = (struct node*) malloc(sizeof(struct node));