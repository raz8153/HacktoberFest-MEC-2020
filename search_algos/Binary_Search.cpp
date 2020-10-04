/*C++ Program to perform Binary Search*/
#include<iostream>
using namespace std;
int main()
{
	int i,n,item,pos=-1,first,last,middle;
	cout<<"How many Elements? ";
	cin>>n;
	int ar[n];
	cout<<"Enter the elements of the array: ";
	for(i=0;i<n;i++)
		cin>>ar[i];
	cout<<"Enter the element to be searched: ";
	cin>>item;
	first=0;
	last=n-1;
	for(i=n-1;i!=-1;i--)
	{
		middle=(first+last)/2;
		if(ar[middle]==item)
		{
			pos=middle;
			break;
		}
		else if(ar[middle]>item)
		{
			first=middle+1;
			continue;
		}
		else
		{
			last=middle-1;
			continue;
		}
	}
	if(pos!=-1)
		cout<<"The item is found at position "<<pos+1;
	else
		cout<<"The item is not found in the array";
	return 0;
}

