#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,ma,j,ma2,ans,x,y;
    string st,st2;
    cin>>n;

    for(j=0; j<n; j++)
    {
        ans=0;
        ma=0;
        ma2=0;
        cin>>st>>st2;
        x=st.size();
        for(i=0; i<x; i++)
        {
            if(ma<(st[i]-'0'))
                ma=st[i]-48;
        }
        ma=ma+1;
        y=st2.size();
        for(i=0; i<y; i++)
        {
            if(ma2<(st2[i]-'0'))
                ma2=st2[i]-48;
        }
        ma2=ma2+1;
        for(i=0;i<x;i++)
            ans+=(st[x-i-1]-48)*powl(ma,i);
        for(i=0;i<y;i++)
           ans+=(st2[y-i-1]-48)*powl(ma2,i);
        cout<<ans<<endl;
    }
    return 0;
}
