#include<bits/stdc++.h>
using namespace std;



int main(){
    int n,key,l,h,mid;
    cin>>n;
    l=0;
    h=n-1;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>key;
    sort(a,a+n); // sort
    for (int i = 0; i < n; i++)
    {
        mid=(l+h)/2;
        while(l<=h){
            if(key<a[mid]){
                h=mid-1;
            }
            else if(key>a[mid]){
                l=mid+1;
            }
            else{
                cout<<"Found at "<<mid;
                return 0;
            }
        }
    }
    cout<<"Not Found";
    return 0;  
}
