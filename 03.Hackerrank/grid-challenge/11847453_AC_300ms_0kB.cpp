#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,t,c2=0,c,l;
    char a[100][100],temp[1][1];
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        c2 = 0;
        scanf("%d",&n);
        getchar();
        for(j=0; j<n; j++)
        {
            for(k=0; k<n; k++)
            {
                scanf("%c",&a[j][k]);
            }
            getchar();
        }


        for(j=0; j<n; j++)
        {
            for(l=0; l<n-1; l++)
            {
                for(k=0; k<n-1; k++)
                {
                    if(a[j][k]>a[j][k+1])
                    {
                        temp[0][0] = a[j][k];
                        a[j][k] = a[j][k+1];
                        a[j][k+1] = temp[0][0];
                    }
                }
            }
        }
        for(k=0; k<n; k++)
        {
            c = 1;
            for(j=0; j<n-1; j++)
            {
                if(a[j][k]<=a[j+1][k])
                {
                    ++c;
                }
            }
            if(c==n)
                ++c2;
        }
        if(c2==n)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
