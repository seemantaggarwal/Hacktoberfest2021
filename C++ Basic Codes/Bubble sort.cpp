//Bubble sort

#include<iostream>
using namespace std;
int main ()
{
   int i, j,temp,pass=0,n;
   cout<<"Enter the size of array: ";
   cin>>n;
   int a[n];
   cout<<"Enter the elements: \n";
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   cout <<"Input list ...\n";
   for(i = 0; i<n; i++) {
      cout <<a[i]<<"\t";
   }
cout<<endl;
for(i = 0; i<n; i++) {
   for(j = i+1; j<n; j++)
   {
      if(a[j] < a[i]) {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }
pass++;
}
cout <<"\nSorted Element List in ascending order is ...\n";
for(i = 0; i<n; i++) {
   cout <<a[i]<<"\t";
}
cout <<"\n\nSorted Element List in descending order is ...\n";
for(i = n-1; i>=0; i--) {
   cout <<a[i]<<"\t";
}
return 0;
}
