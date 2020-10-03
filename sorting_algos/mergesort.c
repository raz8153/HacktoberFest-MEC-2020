/* C program for implementing Merge Sort */

#include <stdio.h>

void merge(int a[],int first, int mid, int last)
{
	int n,lpt,upt,j=0;
	n=last-first+1;
	int b[n];
	lpt=first;
	upt=mid+1;
	while(lpt<mid+1 && upt< last+1)
	{
		if (a[lpt]<a[upt])
		{
			b[j]=a[lpt];
			j=j+1;
			lpt+=1;
		}
		else
		{
			b[j]=a[upt];
			j+=1;
			upt+=1;
		}
	}
	while(lpt<mid+1)
	{
		b[j]=a[lpt];
		j+=1;
		lpt+=1;
	}
	while(upt<last+1)
	{
		b[j]=a[upt];
		j+=1;
		upt+=1;
	}
	lpt=first;
	for(j=0;j<n;j++)
	{
		a[lpt]=b[j];
		lpt+=1;
	}
}

void mergesort(int a[],int first, int last)
{
	int mid;
	if (first==last)
		return;
	else
	{
		mid = (first+last)/2;
		mergesort(a,first,mid);
		mergesort(a,mid+1,last);
		merge(a,first,mid,last);
	}
}
int main()
{
	int n,i;
	printf("Enter no: of elements: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements:\n");
	//input
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	mergesort(a,0,n-1);

	//output
	printf("Sorted array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	return 0;
}

