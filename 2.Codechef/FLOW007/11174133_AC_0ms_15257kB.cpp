#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    while(n--)
    {
        long long x,s=0,s1;
        cin>>x;
        while(x!=0)
        {
            s1=x%10;
            s=s*10+s1;
            x=x/10;
        }
        cout<<s<<endl;
    }
    return 0;
}
