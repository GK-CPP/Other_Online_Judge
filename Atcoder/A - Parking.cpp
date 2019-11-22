#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,a,b,ans;
    cin>>n>>a>>b;
    ans=n*a;
    i=ans;
    if(i>b)
    {
        i=b;
    }
    cout<<i<<endl;
    return 0;
}
