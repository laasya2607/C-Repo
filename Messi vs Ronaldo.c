#include<stdio.h>
int main()
{
    int A,B,C,D,E,F;
    scanf("%d %d %d %d",&A,&B,&C,&D);
    E=(2*A)+B;
    F=(2*C)+D;
    if(E<F)
    {printf("Ronaldo");}
    else if(E>F)
    {printf("Messi");}
    else if(E=F)
    {printf("Equal");}
}