#include<stdio.h>
int main(){
    int a=10;
    int *p = &a;
    *p=11;
    printf("%d\n",a);

    const int b = 20;
    const int *q =&b;
    /* *q=25; error */
    printf("%d\n",b);

    int c = 30;
    const *r = &c;
    printf("%d\n",c);
    return 0;
}