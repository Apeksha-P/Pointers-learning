#include<stdio.h>
int main(){
    int a[]={3,2,67,0,56};
    int *p ;
    p=a;

    /*p++;
    printf("%d",*p); -  2*/

    /*printf("%d",*p++);  - 3 */

    /*printf("%d",*++p);  - 2 */

    /*printf("%d",++*p);  - 4 */

    /*printf("%d %d",*p++,*p++);  - 2 3 */

    int *q;
    q=&a[3];

    /*printf("%d",*q--);  - 0 */

    /*printf("%d",*--q);  -67 */

    printf("%d %d %d",*--q,*--q,*--q);
    return 0;
}