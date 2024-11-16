#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=2;i<a;i++)
    {
        if(a%2!=0){printf("Prime");
        break;}
        else if(a%2==0){printf("Not Prime");
        break;}
    }
}