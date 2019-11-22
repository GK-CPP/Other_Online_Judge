#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,a;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a;
        if(a==1 || a==3)
        {
            cout<<"Case "<<i<<"-> "<<"YES"<<";"<<endl;
        }
        else
            cout<<"Case "<<i<<"-> "<<"NO"<<";"<<endl;
    }
    return 0;
}
