#include<stdio.h>
int main(){
    int a;
    scanf("%d",a);
    if (90<=a<100){
        printf("A");
    }
    else if(80<=a<90){
        printf("B");
    }
    else if(70<=a<80){
        printf("C");

    }
    else if(60<=a<70){
    printf("D");
    }
    else {
        printf("E");
    }
    return 0;
}