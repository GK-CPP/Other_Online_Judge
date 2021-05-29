#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,sum=0,b[50000],j;
    char a[500000];
    scanf("%d",&t);
    getchar();


    for(j=0; j<t; j++)
    {
        sum = 0;
        scanf("%s",a);
        getchar();
        n = strlen(a);
        for(i=0; i<n; i++)
        {
            if(a[i]=='I')
                b[i] = 1;
            else if(a[i]=='V')
                b[i] = 5;
            else if(a[i]=='X')
                b[i] = 10;
            else if(a[i]=='L')
                b[i] = 50;
            else if(a[i]=='C')
                b[i] = 100;
            else if(a[i]=='D')
                b[i] = 500;
            else if(a[i]=='M')
                b[i] = 1000;
        }

        for(i=0; i<n; i++)
        {
            if((i<n-1) && (b[i]<b[i+1]))
                b[i] = (-1)*b[i];
            sum = (sum+(b[i]));
        }
        printf("Case %d: %d\n",j+1,sum);
    }

}
