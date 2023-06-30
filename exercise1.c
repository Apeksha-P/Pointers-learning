#include<stdio.h>
int main(){
    int c,a=10,b=9;
    int *p , *q ;
    p =&a;
    q=&b;
    c = *q;
    *p = 20;
    printf("%d\n",c);
    
    printf("%d\n",p);

    printf("%d\n",*p);
}