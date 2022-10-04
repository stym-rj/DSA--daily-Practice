#include<iostream>

int Stack[20];
int top = 0;

void push(int x) {
    if(top > 19) {
        std :: cout << "Overflow" << std :: endl;
        return;
    }
    Stack[top++] = x;
}

void pop() {
    if(top == -1) {
        std :: cout << "Underflow" << std :: endl;
        return;
    }
    top--;
}

void display() {
    if(top <= 0) {
        std :: cout << -1 << std :: endl;
        return;
    }
    for (int i = 0; i < top; i++) {
        std :: cout << Stack[i] << " ";
    }
    std :: cout << std :: endl;
}

int main() {

    int operation;
    do {
        std :: cin >> operation;
        switch(operation) {
            case 1:
                int data;
                std :: cin >> data;
                push(data);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
        }
    } while (operation != 3);
}