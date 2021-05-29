#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i,t,a,n,j,c=0,sum=0,l,k;
    cin>>n;
    for(j=1;j<=n;j++)
    {
        cin>>a;
        t=sqrt(a);
        for(i=1;i<=t;i++)
        {
            if(a%i==0)
            {
               sum=sum+i;
               k=i;
            }
        }
        for(i=1;i<=t;i++)
        {
            if(a%i==0)
            {
               sum=sum+(a/i);
               l=a/i;
            }
        }
        if(l==k)
        {
            sum=sum-l;
        }
        cout<<sum<<endl;
        sum=0;
    }
    return 0;
}
