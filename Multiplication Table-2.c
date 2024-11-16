#include<stdio.h>
int main()
{
    int a,x;
    scanf("%d %d",&a,&x);
    for(int i=1;i<=x;i++)
    {
        int c;
        c=a*i;
        printf("%d x %d = %d\n",a,i,c);
    }
    return 0;
}