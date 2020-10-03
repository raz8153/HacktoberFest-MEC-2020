//Linear search
//Searches elements in O(n) time
//Better use Binary search which does searching in O(log n) time


#include<iostream>
#include<vector>
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
    int pos=-1;
    for(int i=0;i<n;i++)
    {
        if(A[i]==x){
            pos=i+1;
            break;
        }
    }
    if(pos==-1)cout<<"\nElement not found";
    else cout<<"\nElement found at positon "<<pos;
    return 0;
}
