#include<stdio.h>
int main(void)
{
    int X,Y,A,B;
    scanf("%d %d",&X,&Y);
    A=2*Y;
    B=15*X;
    if(B>=A){
        printf("YES");
    }
    else if(B<=A){
        printf("NO");
    }
}