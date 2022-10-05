#include <iostream>

int top = 0;
int Stack[100];

void push(int _data) {
    Stack[top++] = _data;
}

void pop() {
    top--;
}

void displayMid() {
    std :: cout << Stack[(top-1)/2] << std :: endl;
}

int main() {
    int size;
    std :: cin >> size;
    if(size < 3) {
        return 0;
    }

    for (int i = 0; i < size; i++) {
        int data;
        std :: cin >> data;
        push(data);
    }

    displayMid();
    pop();
    displayMid();


}