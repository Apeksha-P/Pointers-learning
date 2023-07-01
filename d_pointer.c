#include<stdio.h>
int main(){
    int a = 10;
    int *p = &a;
    int **q = &p;
    int ***r = &q;
    printf("a = %d %d %d %d \n",a,*p,**q,***r);

    **q=25;
    printf("a= %d \n",a);
}