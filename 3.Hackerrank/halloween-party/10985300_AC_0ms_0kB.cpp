#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,x,y,a[100],valu;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];

    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            x=a[i]/2;
            y=x;
        }
        
        else if(a[i]%2==1)
        {
            x=(int)a[i]/2+1;
            y=x-1;
        }
        valu=x*y;
        cout<<valu<<"\n";
    }
    return 0;
}
