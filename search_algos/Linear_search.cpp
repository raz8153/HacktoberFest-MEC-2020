/* C++ program for implementation of Linear Search */
#include <iostream> 
using namespace std; 
  
int search(int arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (arr[i] == x) 
            return i; 
    return -1; 
} 
  
int main(void) 
{ 
    cout<<"Enter size of array";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter Elements of array";
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
cout<<"Enter the number u want to search";
int x;
cin>>x;
    int result = search(arr, n, x); 
   (result == -1)? cout<<"Element is not present in array" 
                 : cout<<"Element is present at index " <<result; 
   return 0; 
} 