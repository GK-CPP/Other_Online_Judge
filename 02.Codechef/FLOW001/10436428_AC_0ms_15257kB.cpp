#include<stdio.h>
int main()
{
    int i,a,b,t,sum;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&a,&b);
        sum=a+b;
        printf("%d\n",sum);
    }
    return 0;
}
