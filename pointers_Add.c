#include<stdio.h>
int main(){
    int a[5]={5,-1,7,0,4};
    int *p = &a[0];
    p= p + 2;
    printf("%d\n",*p);

    int *q = &a[2];
    q=q+2;
    printf("%d\n",*q);

    p++;
    printf("%d\n",*p);

    *p = 3 ;
    printf("%d\n",*p);
    return 0;
}