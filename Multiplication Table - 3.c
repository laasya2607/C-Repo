#include<stdio.h>
int main()
{
    int a,x,z;
    scanf("%d %d %d",&a,&x,&z);
    for(int i=x;i<=z;i++)
    {
        int b;
        b=a*i;
        printf("%d x %d = %d\n",a,i,b);
    }
    return 0;
}