#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,x;
    string st;
    cin>>st;
    x=st.size();
    for(i=0; i<x; i++)
    {
        if(st[i]=='A' && st[i+1]!='A')
        {
            cout<<st[i];
        }

        if(st[i]=='B')
        {
            cout<<st[i];
        }
    }
    cout<<endl;
    return 0;

}
