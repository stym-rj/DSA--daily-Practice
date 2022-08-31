#include <iostream>
using namespace std;


void printArray(string arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout<<arr[i]<<" ";
    printf("\n");
}
 


void swap(string *xp, string *yp)
{
    string temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(string arr[], int n)
{
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        // Swap the found minimum element with the first element
        if (min_idx != i)
            swap(&arr[min_idx], &arr[i]);
        printArray(arr,5);
    }
}
int main()
{
    int size;
    cin >> size;
    string arr[5];
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    // for(auto x: arr)    cout<<x<<endl;

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = i + 1; j < 5; j++)
    //     {
    //         if (arr[i] > arr[j])
    //         {
    //             string temp;
    //             temp = arr[j];
    //             arr[i] =
    //         }
    //     }
    // }

    selectionSort(arr, 5);
}