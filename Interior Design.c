#include<stdio.h>
int main()
{
    int X1,Y1,X2,Y2,X,Y;
    scanf("%d %d %d %d",&X1,&Y1,&X2,&Y2);
    X=(X1+Y1);
    Y=(X2+Y2);
    if(X<Y)
    {printf("%d",X);}
    else if(Y<X)
    {printf("%d",Y);}
    else if(X=Y)
    {printf("%d",X);}
    return 0;
}