#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;

    if (size < 1 || size > 20)
    {
        cout << "Invalid array size" << endl;
        return 0;
    }

    char arr[size];

    for (int i = 0; i < size; i++)
        cin >> arr[i];

    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 96 && arr[i] < 123)
        {
            count++;
        }
    }

    if (!count)
    {
        cout << -1;
    }
    else
    {
        cout << count;
    }
}