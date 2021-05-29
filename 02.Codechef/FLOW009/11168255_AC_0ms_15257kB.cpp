#include<bits/stdc++.h>
using namespace std;
int main()
{
    double i,n,a,b,f=0,valu,ans;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a>1000)
        {
            f=1;
        }
        ans=a*b;
        if(f==1)
        {
            ans=(ans*90)/100;
        }
        f=0;
        //cout<<ans<<endl;
        printf("%.6lf\n",ans);
    }
    return 0;
}
