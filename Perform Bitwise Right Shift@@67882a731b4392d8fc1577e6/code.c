#include<stdio.h>
void main(){
    int n,shift;
    scanf("%d",&n);
    scanf("%d",&shift);
    result=n>>shift;
    printf("%d",result);
}