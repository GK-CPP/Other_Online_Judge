#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,b,c;
    cin>>a>>b>>c;
    if((a==5 && b==5 && c==7) || (a==7 && b==5 && c==5) || (a==5 && b==7 && c==5))
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}
