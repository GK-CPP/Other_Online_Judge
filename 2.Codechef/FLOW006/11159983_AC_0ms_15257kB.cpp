#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,sum,m,valu;
    cin>>n;
    for(i=0;i<n;i++)
    {
        sum=0;
        cin>>m;
        while(1)
        {
            valu=m%10;
            sum+=valu;
            m=m/10;
            if(m==0)
            {
                break;
            }
        }
        cout<<sum<<endl;
    }
}
