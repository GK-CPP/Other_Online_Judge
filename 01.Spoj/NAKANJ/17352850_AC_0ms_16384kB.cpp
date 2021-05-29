#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
ll a,b,c,d;
 
ll arr[10][10][10][10];
 
int dp1[8]= {1,2,1,2,-1,-2,-1,-2};
int dp2[8]= {2,1,-2,-1,2,1,-2,-1};
 
void bfs()
{
    if(arr[a][b][c][d]!=-1){
        
    }
    else if(arr[c][d][a][b]!=-1){
        int xx,yy;
        xx=a;yy=b;a=c;
        b=d;c=xx;d=yy;
    }
    else
    {
        ll x,y,p,h,temp;
        ll vis[10][10]= {};
        queue<pair<ll,pair<ll,ll> > >q;
        q.push({0,{a,b}});
        arr[a][b][a][b]=0;
        vis[a][b]=1;
        while(!q.empty())
        {
            pair<ll,pair<ll,ll> > valu;
            valu=q.front();
            q.pop();
            x=valu.second.first;
            y=valu.second.second;
            temp=valu.first;
            arr[a][b][x][y]=temp;
            for(int i=0; i<8; i++)
            {
                p=x+dp1[i];
                h=y+dp2[i];
                if(p>0 && p<9 && h>0 && h<9 && !(vis[p][h]))
                {
                    q.push({temp+1,{p,h}});
                    vis[p][h]=1;
                }
            }
        }
    }
}
 
int main()
{
    ll i,j,k,l,n,m;
 
    cin>>n;
    string st,st2;
    for(i=1; i<9; i++)
        for(j=1; j<9; j++)
            for(k=1; k<9; k++)
                for(l=1; l<9; l++)
                    arr[i][j][k][l]=-1;
    while(n--)
    {
        cin>>st>>st2;
        a=st[0]-'a'+1;
        b=st[1]-'0';
        c=st2[0]-'a'+1;
        d=st2[1]-'0';
        bfs();
        cout<<arr[a][b][c][d]<<endl;
    }
}