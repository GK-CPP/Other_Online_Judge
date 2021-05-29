#include<bits/stdc++.h>
using namespace std;

#define ll long long
vector<ll>v[100000];
ll vis[1000000];
ll dis[1000000];
ll c=0;
ll bfs(ll s,ll n){
    ll i,j,k,vn,u,siz;
    queue<ll>q;
    q.push(s);
    dis[s]=0;
    vis[s]=0;
    while(q.size()){
        u=q.front();
        q.pop();
        siz=v[u].size();
        for(i=0;i<siz;i++){
                vn=v[u][i];
            if(vis[vn]==1)return 0;
            else {
                q.push(vn);
                vis[vn]=1;
                dis[vn]=dis[u]+1;

            }
        }
        c++;
    }
    if(c!=n)return 0;
    else return 1;
}

int main()
{
    ll i,j,k,l,n,m,a,b;
    cin>>n>>m;
    for(i=0;i<m;i++){
        cin>>a>>b;
        v[a].push_back(b);
        //v[b].push_back(a);
    }
    ll ans=bfs(1,n);
    //cout<<c<<endl;
    if(ans)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
