#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
vector<ll>v[1000000];
ll dis[100000];
ll vis[100000];
ll c=0,d;

void bfs(ll s)
{
    ll i,j,vn,u;
    queue<ll>q;
    q.push(s);
    vis[s]=1;
    dis[s]=0;
    while(q.size()){
        u=q.front();
        q.pop();
        ll siz=v[u].size();
        for(i=0;i<siz;i++){
            vn=v[u][i];
            if(vis[vn]==0){
                q.push(vn);
                vis[vn]=1;
                dis[vn]=dis[u]+1;
                if(c<dis[vn]){
                    c=dis[vn];
                    d=vn;
                }
            }
        }
    }
}

int main()
{
    ll i,j,k,l,n,m,a,b;
    cin>>n;
    for(i=0;i<n-1;i++){
        cin>>a>>b;
        v[a].pb(b);
        v[b].pb(a);
    }
    bfs(1);
    memset(vis,0,sizeof(vis));
    memset(dis,0,sizeof(dis));
    bfs(d);
    cout<<c<<endl;
}

