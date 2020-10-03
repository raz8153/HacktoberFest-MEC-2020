/*binary search using recursion in C*/
#include <stdio.h>
int bsearch(int a[],int r,int l,int x){
  if (r <= l) {
    int mid = r + (l-r)/2;
    if (a[mid] == x)
      return mid;
    else if (a[mid] < x)
      return bsearch(a,mid+1,l,x);
    else
      return bsearch(a,r,mid-1,x);
  }
  else
   return -1;
}
void main(){
  int i, n, x, a[100],result;
 printf("Enter number of elements: ");
  scanf("%d", &n);
  printf("Enter the values of array: \n");
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  printf("Enter value to find: ");
  scanf("%d", &x);
  result = bsearch(a,0,n-1,x);
  if(result == -1)
   printf("%d isn't present in the array.\n",x);
   else
      printf("%d found at index %d \n",x, result);
}
