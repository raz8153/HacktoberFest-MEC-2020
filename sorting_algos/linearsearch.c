#include <stdio.h> 
  
int search(int a[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (a[i] == x) 
            return i; 
    return -1; 
} 
  
void main ()
{ 

int n,x;
printf("enter the number of elements of the array and the number to be searched");
scanf("%d,%d ",&n,&x);
int a[n];
printf("enter the elements of the array");
for(int i =0;i<n;i++)
     scanf("%d ",&a[i]);
    
    int result = search(a, n, x); 
    (result == -1) ? printf("Element is not present in array") 
                   : printf("Element is present at index %d", 
                            result); 
    return 0; 
} 