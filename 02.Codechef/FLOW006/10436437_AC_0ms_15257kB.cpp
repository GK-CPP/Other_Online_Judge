#include<stdio.h>
int main()
{
    int i,a,b,n,x,y,z,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        while(1)
        {
            y=a%10;
            sum=sum+y;
            z=a/10;
            a=z;
            if(a==0)
            {
                break;
            }
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}

