/*This is a radix sort code which makes the use of counting sort. Comments are added wherever it was necessary for the understanding of the user. Critisisms or improvements necessary welcomed*/

#include<stdio.h>
void countsort(int arr[],int n,int place)
{       int range=10;
        int i;
        int freq[range];//range for integers is 10 as decimal 0to9
        for(i=0;i<range;i++)
            freq[i]=0;//frequency array will store the number of occurances
        int output[n];
        for(i=0;i<n;i++)
                freq[(arr[i]/place)%range]++;
        for(i=1;i<range;i++)
                freq[i]+=freq[i-1];
        for(i=n-1;i>=0;i--)
        {
                output[freq[(arr[i]/place)%range]-1]=arr[i];
                freq[(arr[i]/place)%range]--;
        }
        for(i=0;i<n;i++)
                arr[i]=output[i];
}
void radixsort(int arr[],int n,int maxx)//maxx is the max..That num will have the maximum places so required
{//Actually maxx is not required ...The number with the highest number of places will do
        int mul=1;
        while(maxx)
        {
                countsort(arr,n,mul);
                mul*=10;
                maxx/=10;
        }
}
void main()
{   int arr[8]={170,45,75,90,802,24,2,66};
    //To whosoever it may concern...Pls input the array value this way, change n and maxx
    radixsort(arr,8,802);//(array,no. of elements in array,maxx in the array)
    //One Xtra pass required for finding max...Couldn't eliminate it as code became a drag -_-
    /*Max can be found while taking the input from the user
    So that 1 xtra pass won't be required..
    max will be initialized to arr[0] and if any user input is
    greater than max, then max will store that*/
    printf("Sorted arr is : ");
    for(int i=0;i<=7;i++)
    {
        printf("%d  ",arr[i]);
    }
}
