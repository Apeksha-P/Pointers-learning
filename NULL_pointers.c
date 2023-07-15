#include<stdio.h>
int main(){
    int *ptr;
    ptr = (int *)malloc(5*sizeof(int));
    if(ptr==NULL){
        printf("%d",ptr);
    }
    return 0;
}