#include<stdio.h>
int main()
{
    int i,a,b,sum=0;
    long long int n;
    scanf("%d%d",&a,&b);
    for(i=0;i<a;i++)
    {
        scanf("%lld",&n);
        if(n%b==0)
        {
            sum=sum+1;
        }
    }
    printf("%d\n",sum);
    return 0;
}
