#include <iostream>
using namespace std;
int main() {
   int s, c, n=6;
   int a[] = { 12, 35, 69, 74, 165, 54};
   s=165;
   for (c = 0; c < n; c++) {
      if (a[c] == s) {
         printf("%d is present at location %d.\n", s, c+1);
         break;
      }
   }
   if (c == n)
      printf("%d isn't present in the array.\n", s);
   return 0;
}