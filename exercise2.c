#include<stdio.h>
int main(){
    int a = 10 , b = 11;
    int *p, *q;
    p = &a;
    q = p ;
    printf("a = %d %d %d \n",a,*p,*q);

    q = &b;
    *q = *p;
    printf("a = %d %d %d \n",a,*p,*q);
}