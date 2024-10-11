#include<stdio.h>
int main()
{
    float A,B,C,D;
    scanf("%d %d",&A,&B);
    C=A-B;
    D=(C/A)*100;
    printf("%.2f",D);
}