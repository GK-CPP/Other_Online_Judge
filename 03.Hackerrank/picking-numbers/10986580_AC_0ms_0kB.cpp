#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,a[110],a2[110],j,q,max,valu;
    cin>>n;
    for(i=0;i<110;i++)
    {
        a2[i]=0;
    }
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        a2[a[i]]++;
    }
    max=0;
    for(i=0;i<=100;i++)
    {
        valu=a2[i]+a2[i+1];
        if(max<valu)
        {
            max=valu;
        }
    }
    cout<<max<<"\n";
    return 0;
}
