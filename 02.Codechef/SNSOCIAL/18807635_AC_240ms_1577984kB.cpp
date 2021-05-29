#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,a,b,ans=0,ma,ma2,d;
ll arr[10000][10000];
ll viss[10000][10000];
ll dx[]={0,0,1,-1,-1,1,1,-1};
ll dy[]={1,-1,0,0,1,1,-1,-1};


ll vis(ll x,ll y){
    if(x<0 || y<0 || x>=n || y>=m)return 0;
    return 1;
}

void solve()
{
    ll i,j,d=0,x,y,z,siz,vn;
    queue< pair<pair<ll,ll>,ll> >q;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(ma==arr[i][j]){
                q.push({{i,j},0});
                viss[i][j]=1;
            }
        }
    }
    while(q.size()){
        x=q.front().first.first;
        y=q.front().first.second;
        d=q.front().second;
        q.pop();
        ma2=max(ma2,d);
        for(i=0;i<8;i++){
            if(vis(x+dx[i],y+dy[i]) && viss[x+dx[i]][y+dy[i]]==0){
                q.push({{x+dx[i],y+dy[i]},d+1});
                viss[x+dx[i]][y+dy[i]]=1;
            }
        }
    }

}

int main()
{
    ll i,j,k,l,t;
    cin>>t;
    while(t--)
    {
        ma=0,ma2=0;
        ans=0;
        cin>>n>>m;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>arr[i][j];
                viss[i][j]=0;
                ma=max(ma,arr[i][j]);
            }
        }
        solve();
        cout<<ma2<<endl;
    }
}
