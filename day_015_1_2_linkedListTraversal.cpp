#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class node
{
public:
    int data;
    node *link;
};

node *first, *temp;

class LinkedList
{
public:
    node *first, *last;
    LinkedList();
    void create();
    int count();
};
LinkedList::LinkedList()
{
    first = NULL;
    last = NULL;
};

void LinkedList::create()
{
    node *temp = new node();
    cin >> temp->data;
    temp->link = NULL;
    if (first == NULL)
    {
        first = temp;
        last = first;
    }
    else
    {
        last->link = temp;
        last = temp;
    }
};

int isprime(int n)
{

    if (n == 1 || n == 0)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }

    for (int j = 2; j < n - 1; j++)
    {
        if (n % j == 0)
            return 0;
    }
    return 1;
}

int LinkedList::count()
{
    node *temp;
    temp = first;

    int count = 0;
    int a;

    while (temp != NULL) 
    {
        a = temp->data;
        temp = temp->link;

        if (isprime(a))
            count++;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;

    if (n < 0)
    {
        cout << "Invalid Number";
        return 0;
    }

    int i;

    LinkedList l1;

    for (i = 0; i < n; i++)
    {
        l1.create();
    }

    cout << l1.count();

    return 0;
}