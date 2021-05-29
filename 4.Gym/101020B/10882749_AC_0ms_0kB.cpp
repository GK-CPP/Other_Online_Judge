#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,x,a,sum,b;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        sum=a*b;
        if(sum%2==0)
        {
            cout<<"Hasan"<<"\n";
        }
        else
        {
            cout<<"Hussain"<<"\n";
        }
    }
    return 0;
}
