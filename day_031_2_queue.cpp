#include <iostream>

int Queue[100];
int front = -1;
int rear = -1;

void push(int _data) {
    if(front == -1)     front++;
    Queue[++rear] = _data;
}

void pop() {
    std :: cout << Queue[front++] << " ";
}

int main() {
    int size;
    std :: cin >> size;
    
    int operation;
    for (int i = 0; i < 5; i++) {
        std :: cin >> operation;
        switch (operation)
        {
        case 1:
            int data;
            std :: cin >> data;
            push(data);
            break;
        case 0:
            pop();
        }
    }
    
}