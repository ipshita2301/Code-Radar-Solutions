#include<Stdio.h>
void main(){
    int N;
    scanf("%d",&N);
    for(int i=1;i<=10;i++)
    {
        printf("%d X %d\n",N,i,N*i);
    }
}