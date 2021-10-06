#include <stdio.h>

void merge(int*a,int lo,int mid,int hi){
    
    int b[hi+1];
    int i=lo,j=mid+1,k=lo;
    while(i<=mid && j<=hi)
    {
        if(a[i]<a[j])
            b[k++]=a[i++];
        else
            b[k++]=a[j++];
    }
    while(i<=mid)
        b[k++]=a[i++];
    while(j<=hi)
        b[k++]=a[j++];
    for(int q=lo;q<=hi;q++)
        a[q]=b[q];
}

void mergesort(int *a, int hi, int low)
{
    if(low<hi){
        int m= (low + hi)/2;
        mergesort(a,hi,m+1);
        mergesort(a,m,low);
        merge(a,low,m,hi);       
    }
}


int main()
{
    int n;
    int a[1000];
    printf("Enter number of elements in array:\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(int i =0; i<n; i++){
		scanf("%d",&a[i]);
	}
    mergesort(a,n-1,0);
    printf("Sorted array is:");
    for(int k=0;k<n;k++)
        printf("%d ",a[k]);
    return 0;
}