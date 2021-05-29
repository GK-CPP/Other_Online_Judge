#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j,x;
    cin>>n;
    char st[1000000];
    for(i=0;i<n;i++)
    {
        cin>>st;
        x=strlen(st);
        cout<<(st[0]-48)+(st[x-1]-48)<<endl;
    }
    return 0;
}
