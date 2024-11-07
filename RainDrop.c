#include<stdio.h>
int main(void)
{
    int X;
    scanf("%d",&X);
 if(X%3==0&&X%5==0)
    {printf("PlingPlang");}
    else if(X%3==0&&X%7==0)
    {printf("PlingPlong");}
    else if(X%5==0&&X%7==0)
    {printf("PlangPlong");}
    else if(X%3==0){printf("Pling");}
    else if(X%5==0){printf("Plang");}
    else if(X%7==0){printf("Plong");}
    else{printf("%d",X);}
}
