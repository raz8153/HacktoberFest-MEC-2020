//InsertionSort in C.

#include <stdio.h>

void insertionSort(int arr[], int n) 
{ 
    int i, j, temp; 
    for (i = 1; i < n; i++) { 
        temp = arr[i]; 
        j = i - 1; 

        while (j >= 0 && arr[j] > temp) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = temp; 
    } 
} 

void printArray(int arr[], int n) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 

int main() 
{ 
    int arr[] = { 12, 11, 13, 5, 6, 58, 266, 0}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    insertionSort(arr, n); 
    printArray(arr, n); 
  
    return 0; 
} 