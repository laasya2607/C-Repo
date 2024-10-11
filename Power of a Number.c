#include<stdio.h>
#include<math.h>
int main()
{
    int X,Y,M,N;
    scanf("%d %d %d",&X,&Y,&M);
    N=pow(X,Y);
    N=N%M;
    printf("%d",N);
}