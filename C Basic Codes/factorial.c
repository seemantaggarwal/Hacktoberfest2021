/*C program to find factorial of any number using recursion*/
#include<stdio.h>

int factorial(int n){
    if ((n==0)||(n==1)){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
}
int main()
{
    int n,fac;
    printf("Enter a number: ");
    scanf("%d", &n);
    fac = factorial(n);
    printf("factorial of the number is : %d", fac);
    return 0;
}
