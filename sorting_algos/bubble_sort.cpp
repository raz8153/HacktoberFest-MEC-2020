// C++ Program for implementaion of Bubble sort
// Bubble Sort is the process of sorting adjacent elements

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {12, 45, 8, 5, 16};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp, i, j;

    // Displaying original array
    cout << "\n The array is : \n";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // Bubble sort
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Displaying sorted array
    cout << "\n After sorting : \n";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}