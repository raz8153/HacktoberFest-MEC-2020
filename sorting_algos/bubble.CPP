//A simple program to sort an array in ascending order using bubble sort//									
#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int A[10],sz,temp,i,j;
cout<<"Enter size of the array";
cin>>sz;
cout<<"Enter elements of array";
for(i=0;i<sz;++i)
cin>>A[i];
//sorting begins//
 for(i=0;i<sz;++i)
 {for(j=0;j<(sz-1)-i;++j)
  {if(A[j]>A[j+1])
   {temp=A[j];
    A[j]=A[j+1];
    A[j+1]=temp;
    }
   }
  }
 //Displaying Sorted array//
  cout<<"Sorted array is  ";
  for(i=0;i<sz;++i)
  cout<<A[i]<<'\t';
  getch();
 }
