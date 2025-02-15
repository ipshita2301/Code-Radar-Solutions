#include<stdio.h>
void main(){
    int a,b,result;
    char op;
    scanf("%d %d %c",&a,&b,&op);
    switch(op){
        case '+':
            result=a+b;
            printf("%d",result);
            break;
        case '-':
            result=a-b;
            printf("%d",result);
            break;
        case '*':
            result=a*b;
            printf("%d",result);break;
        case '/':
            if(b!=0){
            result=a/b;
            printf("%d",result);}
            else{
                printf("error");
            };break;
        default:
            printf("error");
            break;
    }
}