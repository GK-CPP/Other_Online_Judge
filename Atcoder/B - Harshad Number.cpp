#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int main()
{
    ull i,n,x,y,sum=0;
    cin>>n;
    x=n;
    while(n)
    {
        y=n%10;
        sum+=y;
        n=n/10;
    }
    if(x%sum==0)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
