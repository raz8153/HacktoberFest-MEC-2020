//Simple program to sort an array in Ascending order using Selection Sort//
#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int A[10],sz,temp,i,j,small,pos;
//Inserting elements//
cout<<"Enter size of array";
cin>>sz;
cout<<"Enter the elements of the array";
for(i=0;i<sz;++i)
cin>>A[i];
//sorting//
for(i=0;i<sz;++i)
{small=A[i];
 pos=i;
 for(j=i+1;j<sz;++j)
  {if (A[j]<small)
   {small=A[j];
    pos=j;
   }
  }
 temp=A[i];
 A[i]=A[pos];
 A[pos]=temp;
 }
//Displaying array//
cout<<"Resultant arraay";
for(i=0;i<sz;++i)
cout<<A[i]<<'\t';
getch();
}