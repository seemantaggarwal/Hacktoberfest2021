#include <iostream>
using namespace std;

int main(){
    int t; // No of cases
    cout<<"Number of students in a class: ";
    cin>>t;
    float n,b,c,total;
    cout<<"Maximum marks: ";
    cin>>total;
    c=b*100;
    for (int i=1;i<=t;i++){
        cout<<"Marks obtained by Roll number "<<i<<" = ";
        cin>>n;
        b=n/total;
        c=b*100;
        
        cout<<"percentage of roll number"<<i<<" = "<<c<<"%"<<endl;
    }
    return 0;

}