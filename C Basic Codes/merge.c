#include<stdio.h>

void merge(int *a, int n, int *b, int m, int *c){
	int i=n-1;
	int j=m-1;
	int k =0;
	while(i>=0 && j>=0){
		if(a[i]>b[j]){
			c[k++]=a[i--];
		}
		else if(b[j]>a[i]){
			c[k++]=b[j--];	
		}
		else{
		
			c[k++]=a[i--];
			c[k++]=b[j--];
		}
	}
	
	while(i>=0){
		c[k++]=a[i--];
	}
	
	while(j>=0){
		c[k++]=b[j--];
	}
}

void printReverse(int * a , int startIndex, int endIndex){
	if(endIndex<startIndex){
		return;
	}
	printf("%d ",a[endIndex]);
	printReverse(a,startIndex,endIndex-1);
}

int isuppertriangular(struct sparse s[]){
    int i=1;
    for(i=1;i<=s[0].value;i++){
        if(s[i].row>s[i].col){
            return 0;
        }
    }
    return 1;
}

int main(){
	int n;
	int a[100];
	printf("Enter number of elements in array 1:\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(int i =0; i<n; i++){
		scanf("%d",&a[i]);
	}
	printReverse(a,0,n-1);//call from Main Program
}