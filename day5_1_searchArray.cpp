// Count the number of lower case characters from the array of characters having alphanumeric symbol. The size of array should be greater than 0 and less than equal to 20. If size is not in the mention range than program should display “Invalid array size” without asking for the second input. And if no lower case character is present then display -1.

// Input Format

// Your program should take two types of inputs. First will represent size of array and second will represent elements of array. Sample Input: 6 H e L L O 2

// Constraints

// The length of array (L) should be 0 < L <=20

// Output Format

// Should display the number of lower case characters in ‘int’ form. If no such character is present then display -1. Sample Output: 1

// Sample Input 0

// 6
// H
// e
// L
// L
// O
// 2
// Sample Output 0

// 1

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