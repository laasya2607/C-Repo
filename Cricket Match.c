#include<stdio.h>
int main(void)
{
    int N,M,A;
    scanf("%d %d",&N,&M);
    A=36*M;
    if(N<=A){
        printf("YES");
    }
    else if(N>=A){
        printf("NO");
    }
}