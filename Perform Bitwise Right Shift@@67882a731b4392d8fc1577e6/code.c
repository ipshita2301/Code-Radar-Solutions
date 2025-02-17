#include<stdio.h>
void main(){
    int n,shift,result;
    scanf("%d",&n);
    scanf("%d",&shift);
    result=n>>shift;
    printf("%d",result);
}