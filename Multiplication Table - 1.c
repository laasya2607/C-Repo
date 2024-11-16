#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int i=1;i<=12;i++){
    int a;
    a=i*x;
    printf("%d x %d = %d\n",x,i,a);
}
}