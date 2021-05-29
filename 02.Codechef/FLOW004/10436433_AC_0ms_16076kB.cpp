#include<stdio.h>
int main()
{
    int i,a,b,n,x,y,z,f,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        x=a%10;
        while(1)
        {
            y=a%10;
            z=a/10;
            a=z;
            if(10>a)
            {
                f=a;
                break;
            }
        }
        sum=x+f;
        printf("%d\n",sum);
    }
    return 0;
}
