// Binary search which does searching in O(log n) time
// Array needs to be sorted 

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    cout<<"Enter number of elements in the array";
    int n;
    cin>>n;
    cout<<"\nEnter the n numbers :";
    vector<int> A(n);
    for(int i=0;i<n;i++)
        cin>>A[i];
    cout<<"\nEnter the number to be searched : ";
    int x;
    cin>>x;
    sort(A.begin(),A.end());
    int l=0,u=n-1,mid;
    while(l<=u){
        mid=(l+u)/2;
        if(A[mid]==x)
        {
            cout<<"\nElement found";
            return 0;
        }
        else if(A[mid]<x)l=mid+1;
        else u=mid-1;
    }
    cout<<"\nElement not found";
    return 0;
}
