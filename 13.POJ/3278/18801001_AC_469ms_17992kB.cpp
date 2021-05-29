#include <cstdio>
#include<stdio.h>
#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

#define ll long long
#define pb push_back
vector<ll>v[1000000];
ll vis[1000000];
ll dis[1000000];
ll maxx=100010;

ll bfs(ll n,ll m){
    ll i,j,k,u,vn,siz,ne;
    queue<ll>q;
    q.push(n);
    vis[n]=1;
    dis[n]=0;
    while(q.size()){
        u=q.front();
        q.pop();
        for(i=0;i<3;i++){
            if(i==0)ne=u-1;
            else if(i==1)ne=u+1;
            else ne=u*2;
            if(ne>maxx || ne<0)continue;
            if(vis[ne]==0){
                q.push(ne);
                vis[ne]=1;
                dis[ne]=dis[u]+1;
            }
            if(ne==m)return dis[ne];
        }
    }
}
int main()
{
    ll i,j,k,l,n,m;
    cin>>n>>m;
    ll ans=bfs(n,m);
    cout<<ans<<endl;
}
