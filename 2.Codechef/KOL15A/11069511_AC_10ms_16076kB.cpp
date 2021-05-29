#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    char st[10000];
    for(i=0;i<n;i++)
    {
        cin>>st;
        int x=strlen(st);
        int valu=0,j;
        for(j=0;j<x;j++)
        {
            if(st[j]>='0' && st[j]<='9')
            {
                valu+=(st[j]-48);

            }
        }
        cout<<valu<<endl;

    }
}
