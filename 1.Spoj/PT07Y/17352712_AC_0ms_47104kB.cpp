#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
vector<ll>v[1000000];
ll vis[1000000];
ll c=0;
ll bfs(ll s,ll n)
{
    ll i,j,u,vn,siz;
    queue<ll>q;
    q.push(s);
    vis[s]=1;
    while(q.size())
    {
        u=q.front();
        q.pop();
        siz=v[u].size();
        for(i=0; i<siz; i++)
        {
            vn=v[u][i];
            if(vis[vn])return 0;
            else
            {
                vis[vn]=1;
                q.push(vn);
            }
        }
        c++;
    }
    //cout<<c<<endl;
    if(c!=n)return 0;
    else return 1;
}

int main()
{
    ll i,j,k,l,n,m,a,b;
    cin>>n>>m;
    for(i=0; i<m; i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
        //v[b].push_back(a);
    }
    if(bfs(1,n))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
