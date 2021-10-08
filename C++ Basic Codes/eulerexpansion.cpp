#include <stdio.h>

int a=1;
int b=1;

float e(int p, int q)
{   
    float r;
    if (q==0)
        return 1;
    r=e(p,q-1);
    a*=p;
    b*=q;
    return r+(float)a/b;
}

int main()
{
    int a=1,b=10;
    printf("%f",e(a,b));

    return 0;
}
