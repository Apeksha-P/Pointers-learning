#include<stdio.h>
int main(){
    int a = 10;
    int * p ; //decleare pointer
    p = &a; //initialize pointer
    printf("%d",*p);
}