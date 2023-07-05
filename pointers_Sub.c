#include<stdio.h>
int main(){
    int a[]={0,1,-1,10,11};
    int *p = &a[0];
    int *q = &a[4];
    int d;

    d = p - q;
    printf("%d\n",d);

    *q = 25;
    printf("%d\n",*q);

    d = q - p;
    printf("%d\n",d);

    *p = 27;
    printf("%d\n",*p);

    q = q - 3;
    printf("%d\n",*q);

    p = p + 3;
    printf("%d\n",*p);

    d = p - q;
    printf("%d\n",d);

    return 0;
}