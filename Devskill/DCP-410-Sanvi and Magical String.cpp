#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j,k,x,ma,ans;
    cin>>n;
    char st[10000];
    for(i=0; i<n; i++)
    {
        cin>>x;
        int arr[100000]= {};
        getchar();
        for(j=0; j<x; j++)
        {
            scanf("%c",&st[j]);
            arr[st[j]]++;
            if(j==x-1)
            {
                getchar();
            }
        }
        ma=0;
        for(j=0; j<x; j++)
        {
            if(ma<arr[st[j]])
                ma=arr[st[j]];
        }
        ans=x-ma;
        cout<<ans<<endl;
    }
    return 0;
}
