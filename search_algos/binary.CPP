//Simple program to perform Binary search//
#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int A[10],sz,ele,index,i;
int Bsearch(int[],int,int);
//Obtaining the Array in which binary search is to be done//

cout<<"Enter size of the array";
cin>>sz;
cout<<"enter the elements of the array";
for(i=0;i<sz;++i)
cin>>A[i];
cout<<"Enter the element to be searched";
cin>>ele;
//Displaying the element if found//
index=Bsearch(A,sz,ele);
if(index==-1)
cout<<"Element not found";
else
 cout<<"Element present at "<<index+1;
getch();
}
//Performing Binary Search//
int Bsearch(int A[10],int sz,int ele)
{int mid,beg=0,last=sz-1;
while(beg<=last)
{mid=(beg+last)/2;
if(A[mid]==ele)
return mid;
else if (A[mid]>ele)
last=mid-1;
else beg=mid+1;
}
return -1;
}