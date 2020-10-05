// Opperation on strings
// checks whether a string is palindrome or not means, which is same in reading from forward or backword.
// Prints YES if the string is equal to its reverse either prints NO.  

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	// your code goes here
    int n, i , j,flag;
    cin>>n;
    for(i=0;i<n;i++){
        string s, s1, s2;
        cin>>s;
        int l = s.size();
        if(l%2==0){
            s1 = s.substr(0,l/2);
            s2 = s.substr(l/2,l);
        }else{
            s1 = s.substr(0,l/2);
            s2 = s.substr((l/2)+1,l);
        }
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        for(j=0;j<l/2;j++){
            flag=1;
            if(s1[j]!=s2[j])
            {
                flag=0;
                break;
            }
        }
        if(flag==0){
            cout<<"NO"<<"\n";
        }else{
            cout<<"YES\n";
        }
    }
    
	return 0;
}
