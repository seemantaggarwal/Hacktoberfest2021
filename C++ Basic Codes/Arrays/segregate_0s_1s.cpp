#include<iostream>
using namespace std;
void print_array(int a[],int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int arr[]={0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
    int count_zero=0;
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++)
    {
         if(arr[i]==0)
         {
             count_zero++;
         }
    }
    for(int i=0;i<count_zero;i++)
    {
        arr[i]=0;
    }
    for(int i=count_zero;i<len;i++)
    {
        arr[i]=1;
    }
    print_array(arr,len);
}

/// also 0 1 2 
void sort012(int a[], int n)
{
    int co,cl;
    co=cl=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
         {   co++;}
        else if(a[i]==1)
            {cl++;}
            else{
                
            }
    }
    for(int i=0;i<co;i++)
    {
        a[i]=0;
    }
    for(int i=co;i<(co+cl);i++)
    {
        a[i]=1;
    }
    for(int i=(co+cl);i<n;i++)
    {
        a[i]=2;
    }
}