#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int i,n,x,valu,ans,k,l;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        if(x<38)
        {
            k=x;
        }
        else
        {
            ans=x%5;
            valu=x+(5-ans);
            l=valu-x;
            if(l<3)
            {
                k=valu;
            }
            else if(l>=3)
            {
                k=x;
            }
        }
        cout<<k<<endl;
    }
    return 0;
}


