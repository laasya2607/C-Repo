#include<stdio.h>
int main()
{
    float BS,HRA,DA,PF,GS;
    scanf("%f %f %f",&BS,&HRA,&DA);
    PF=(BS*0.12);
    GS=(BS+HRA+DA+PF);
    printf("%.2f\n%.2f",PF,GS);
}