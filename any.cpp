#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int number;
    int arr[20];
    cin >> number;
    for (int i = 0; i < number; i++)
    {
        cin >> arr[i];
    }
    if (number == 1)
    {
        cout << "Invalid Input" << endl;
        exit(0);
    }
    for (int i = 0; i < number; i++)
        if (arr[i] == arr[i + 1])
        {
            for (int j = i + 1; j < number; j++)
            {
                arr[j - 1] = arr[j];
            }
            number--;
        }
    for (int i = 0; i < number; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}