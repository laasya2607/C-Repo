#include<stdio.h>
int main()
{
    float X1,X2,X3,X4,X5,Y;
    scanf("%f %f %f %f %f",&X1,&X2,&X3,&X4,&X5);
    Y=(X1+X2+X3+X4+X5);
    Y=Y/500;
    Y=Y*100;
    if(Y>=90)
    {printf("Grade A");}
    else if(Y>=80&&Y<90)
    {printf("Grade B");}
    else if(Y>=70&&Y<80)
    {printf("Grade C");}
    else if(Y>=60&&Y<70)
    {printf("Grade D");}
    else if(Y>=40&&Y<60)
    {printf("Grade E");}
    else if(Y<40)
    {printf("Grade F");}
    return 0;
}