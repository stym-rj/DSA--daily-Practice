#include<iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;
    int arr[20];
    if (number <2)
    {
        cout << "Invalid Input" << endl;
        return 0;
    }
    for (int i = 0; i < number; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < number; i++)
        if (arr[i] == arr[i + 1])
        {
            for (int j = i + 1; j < number; j++)
            {
                arr[j - 1] = arr[j];
            }
            i--;
            number--;
        }
    for (int i = 0; i < number+1; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}