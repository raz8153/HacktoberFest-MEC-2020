//Simple program to perform linear search//
#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int A[10],sz,ele,index,i;
int Lsearch(int[],int,int);
//Initial process of obtaining the array and asking the user to input the data, in this case number to be searched//

cout<<"Enter size of the array";
cin>>sz;
cout<<"enter the elements of the array";
for(i=0;i<sz;++i)
cin>>A[i];
cout<<"Enter the element to be searched";
cin>>ele;
//Displaying the element if found//
index=Lsearch(A,sz,ele);
if(index==-1)
cout<<"Element not found";
else cout<<"Element present at position : "<<index+1;
getch();
}
//Performing Linear Search//
int Lsearch(int A[10],int sz,int ele)
{for(int i=0;i<sz;++i)
if(A[i]==ele)
return i;
return -1;
}
