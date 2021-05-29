#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,i,j,sum,t;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>a;
        for(i=1; i<a; i++)
        {
            sum+=(2*(i*(i+1)/2))-i;
        }
        for(i=a; i>=1; i--)
        {
            sum+=((2*(i*(i+1)/2)))-i;
        }
        cout<<sum<<endl;
    }
    return 0;
}
