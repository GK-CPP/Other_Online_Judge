#include<bits/stdc++.h>
using namespace std;

#define ll long long
vector<ll>v[100000];
ll vis[1000000];
ll dis[1000000];
ll ma=0,ma2=0;
ll bfs(ll s){
    ll i,j,k,vn,u,siz;
    queue<ll>q;
    q.push(s);
    dis[s]=0;
    vis[s]=1;
    while(q.size()){
        u=q.front();
        q.pop();
        siz=v[u].size();
        for(i=0;i<siz;i++){
                vn=v[u][i];
            if(vis[vn]==0){
                q.push(vn);
                vis[vn]=1;
                dis[vn]=dis[u]+1;
                ma=vn;
                ma2=max(ma2,dis[vn]);
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
        v[a].push_back(b);
        v[b].push_back(a);
    }
    bfs(1);
    memset(vis,0,sizeof(vis));
    memset(dis,0,sizeof(dis));
    bfs(ma);
    cout<<ma2<<endl;
}
