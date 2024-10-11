#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d %d",&X,&Y);
    if(Y>=3*X){
        printf("YES");
    }
    else{
        printf("NO");
    }
}