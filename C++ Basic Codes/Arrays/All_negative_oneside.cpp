#include<iostream>
using namespace std;
void print_array(int a[],int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<a[i]<<" ";
    }
}
void swap(int& x,int& y)
{
    int temp=x;
    x=y;
    y=temp;
}
void sep_negative(int a[],int len)
{
    int j=0;
    for(int i=0;i<len;i++)
    {
        if(a[i]<0)
        {
            if(i!=j)
            {
                swap(a[i],a[j]);
                j++;
            }
        }
    }

}
int main()
{
    int arr[]={ -1, 2, -3, 4, 5, 6, -7, 8, 9 };
     int len=sizeof(arr)/sizeof(arr[0]);
     sep_negative(arr,len);
     print_array(arr,len);
}