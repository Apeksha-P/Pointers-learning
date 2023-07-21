#include<stdio.h>
void func();
int main(){
    int x=7,y=5;
    func(&x,&y);
    return 0;
}
void func(int *x,int *y){
    printf("x=%d,y=%d",*x,*y);
}