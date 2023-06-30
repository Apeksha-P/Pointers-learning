#include<stdio.h>
int main(){
    int a = 10;
    int * p ; //decleare pointer
    p = &a; //initialize pointer
    printf("%d",*p);

    /* float b = 1.1;
       int * q;
       q = &b; Error */
    printf("\n");

    int b = 20 , * q = &b;
    printf("%d",b);
}