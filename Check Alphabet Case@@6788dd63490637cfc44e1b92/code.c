#include<stdio.h>
#include<ctype.h>
int main(){
    char c;
    scanf("%c",&c);
    if (isupper(c)){
        printf("Uppercase");
    }
    else if(islower){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}