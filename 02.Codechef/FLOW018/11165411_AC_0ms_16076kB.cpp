#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll int ab(ll int a)
{
    ll int i,ans=1;
    while(1)
    {
        ans*=a;
        a-=1;
        if(a==0)
        {
            break;
        }
    }
    return ans;
}
int main()
{
    long long int i,k,a,n,x,ar[25];
    ar[0]=1;
    for(i=1;i<=20;i++)
    {
        x=ab(i);
        ar[i]=x;

    }
    cin>>n;
    for(i=0;i<n;i++)
    {
        //cout<<ar[i]<<endl;
       cin>>a;
       cout<<ar[a]<<endl;
    }
    return 0;
}
