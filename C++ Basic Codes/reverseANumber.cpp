#include<iostream>
using namespace std;
int reverseANumber(int &n){
    int r;
    int rev=0;
    while(n){
        r=n%10;
        rev=rev*10+r;
        n/=10;
    }
    return rev;
}
int main(){
    int n;
    cin>>n;
    int r=reverseANumber(n);
    cout<<r<<endl;
    return 0;
}