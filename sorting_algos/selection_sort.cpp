/* C++ Program for implementation of selection sort

Selection sort - find smallest element and put it in its proper place. At each pass, next smallest
element is placed in its proper position */

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {12, 45, 8, 5, 16};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, temp;

    // Displaying original array
    cout << "\n The array is : \n";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // Selection sort
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Diplaying sorted array
    cout << "\n After sorting : \n";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
