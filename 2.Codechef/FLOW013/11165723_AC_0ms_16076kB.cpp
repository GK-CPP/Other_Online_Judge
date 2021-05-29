#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,a,b,c,sum;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a>>b>>c;
        sum=a+b+c;
        if(sum==180)
        {
            if(a==0 || b==0 || c==0)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
