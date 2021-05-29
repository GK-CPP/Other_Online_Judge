#include<bits/stdc++.h>
using namespace std;

#define ll long long
vector<ll>v[1000000];
ll satus[1000000];
ll per[1000000];
#define pb push_back
int wh=0;
int gr=1;
int bl=-1;
stack<ll>st;
ll f=0;
void dfs(ll s)
{
    ll i,j,k,u,vn;

    satus[s]=gr;
    ll siz=v[s].size();
    for(i=0; i<siz; i++)
    {
        if(satus[v[s][i]]==gr)f=1;
        if(satus[v[s][i]]==wh)
        {
            dfs(v[s][i]);
        }
    }

    satus[s]=bl;
}

int main()
{
    ll i,j,k,l,n,m,a,b,s,d;
    cin>>n>>m;
    for(i=0; i<m; i++)
    {
        cin>>a>>b;
        v[a].pb(b);
    }
    dfs(1);
    if(f==1)
    {
        cout<<"NO"<<endl;
    }

    else
    {
        for(i=1; i<=n; i++)
        {
            if(satus[i]==wh)
            {
                cout<<"NO"<<"\n";
                return 0;
            }
        }
        cout<<"YES"<<endl;
    }
}
/*************
5 5
5 1
1 2
2 3
3 4
1 4
*************/


