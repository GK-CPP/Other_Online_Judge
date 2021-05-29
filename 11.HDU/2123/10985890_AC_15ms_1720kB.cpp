#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,valu=0,valu2=0,j,k,l=0,a[10000];
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(k=0; k<n; k++)
    {
        valu=0;
        for(i=0; i<a[k]; i++)
        {
            valu=valu+1;
            valu2=0;
            for(j=0; j<a[k]; j++)
            {
                valu2=valu2+valu;
                printf("%d",valu2);
                if(j!=a[k]-1)
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        //printf("\n");
    }
    return 0;
}
