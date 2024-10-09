#include<stdio.h>
int main(void)
{
    int X,Y;
    scanf("%d %d",&X,&Y);
    if(X<=8&&X*Y<=500){
        printf("YES");
    }
    else{
        printf("NO");
    }
}