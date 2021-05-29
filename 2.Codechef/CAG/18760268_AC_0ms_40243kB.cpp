#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
vector<ll>v[1000000];
ll vis[100000];
ll dis[100000];
map<ll,ll>mm;
ll dis2=1,dis3=99999999,ff=0;

void bfs(ll s)
{
    ll i,j,k,vn,u;
    queue<ll>q;
    q.push(s);
    vis[s]=1;
    //dis[s]=1;
    while(q.size()){
        u=q.front();
        q.pop();
        ll siz=v[u].size();
        for(i=0; i<siz; i++)
        {
            vn=v[u][i];
            if(vis[vn]==0){
                q.push(vn);
                vis[vn]=1;
                //dis[vn]=dis[u]+1;
                dis2++;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll i,j,k,l,n,m,a,b,c;
    cin>>n>>m>>k;
    for(i=0; i<m; i++)
    {
        cin>>a>>b;
        v[a].pb(b);
        //v[b].pb(a);
    }
    for(i=1; i<=n; i++)
    {
            memset(vis,0,sizeof(vis));
           // memset(dis,0, sizeof dis);
            dis2=1;
            bfs(i);
            dis3=min(dis3,dis2);

    }
    cout<<dis3*k<<endl;
}
