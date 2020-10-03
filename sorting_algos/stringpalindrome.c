//this is a program for finding a string palindrome in c
#include <string.h>
#include <stdio.h>
// A function to check if a string str is palindrome 
void isPalindrome(char s[]) 
{ 
    // Start from leftmost and rightmost corners of str 
    int l = 0; 
    int h = strlen(s) - 1; 
  
    // Keep comparing characters while they are same 
    while (h > l) 
    { 
        if (s[l++] != s[h--]) 
        { 
            printf("%s is Not Palindrome", s); 
            return; 
        } 
    } 
    printf("%s is palindrome", s); 
} 
  
// Driver program to test above function 
void main() 
{ 
    char s[100];
    printf("enter a string");
    scanf("%s",s);
    isPalindrome( s); 
    
    
}