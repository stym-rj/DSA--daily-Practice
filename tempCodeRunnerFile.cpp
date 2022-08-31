#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int digitSum(int ins)
{
    int s = 0;
    while (ins > 0)
    {
        int rem = 0;
        rem = ins % 10;
        s += rem;
        ins /= 10;
    }
    return s;
}

void display(int a[],int size)
{
    for (int i = 0; i < size; i++)
        {
            cout << a[i];
            if (i == size - 1)
            {
                continue;
            }
            int sCount = 8 - to_string(a[i]).length();
            for (int k = 0; k < sCount; k++)
            {
                cout << " ";
            }
        }
}

int insertion(int size, int n)
{
    int a[size], pos;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (n == size)
    {
        cout << "Insertion is not possible becouse Array Overflow.. !!" << endl;
        display(a,size);
        return 0;
    }

    for (int i = n; i < size; i++)
    {
        a[i] = 0;
    }

    int ins;
    cin >> ins;
    int sum = digitSum(ins);

    // if (sum < size)  //not recommended method
    // {
    //     pos = sum;
    // }
    // else
    // {
    //     sum = digitSum(sum);
    //     pos = sum;
    // }

    while(sum > size)
    {
        sum = digitSum(sum);
    }
    pos = sum;

    for (int j = size; j >= (pos - 1); j--)
    {
        a[j + 1] = a[j];
    }
    a[pos - 1] = ins;
    n++;
    display(a,size);
    return 0;
}

int main()
{
    int size, n;
    cin >> size >> n;
    if (size >= 0 && size < 100)
    {
        insertion(size, n);
    }
    return 0;
}