#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int n=1000006;
ll arr[n+4];

struct max2
{
    ll maxi,idx;
}tree[n*4],base;

void update(ll node,ll b,ll e,ll i,ll value)
{
    if(i>e || i<b)return;
    if(b==e){
        tree[node].maxi=value;
        tree[node].idx=i;
        return;
    }
    ll left=node*2;
    ll right=node*2+1;
    ll mid=(b+e)/2;
    update(left,b,mid,i,value);
    update(right,mid+1,e,i,value);
    if(tree[left].maxi>tree[right].maxi)
    {
        tree[node].maxi=tree[left].maxi;
        tree[node].idx=tree[left].idx;
    }
    else
    {
        tree[node].maxi=tree[right].maxi;
        tree[node].idx=tree[right].idx;
    }
}

max2 query(ll node,ll b,ll e,ll i,ll j)
{
    if(i>e || j<b)return base;
    if(e<=j & b>=i)return tree[node];
    ll left=node*2;
    ll right=node*2+1;
    ll mid=(b+e)/2;
    max2 ret1 = query(left,b,mid,i,j);
    max2 ret2 = query(right,mid+1,e,i,j);
    if(ret1.maxi>ret2.maxi)
        return ret1;
    else
        return ret2;
}
int main()
{
    ll i,j,k,l,n,m,a,b,inx,vlauee,s,d;
    cin>>n;
    for(k=1;k<=n;k++){
        cin>>arr[k];
        update(1,1,n,k,arr[k]);
    }
    cin>>m;
    while(m--){
        char ch;
        cin>>ch;
        if(ch=='U'){
            cin>>inx>>vlauee;
            update(1,1,n,inx,vlauee);
        }
        else{
            cin>>s>>d;
            max2 ans=query(1,1,n,s,d);
            ll mv=ans.maxi;
            ll ml=ans.idx;
            update(1,1,n,ml,0);
            ans=query(1,1,n,s,d);
            ll mv2=ans.maxi;
            cout<<mv+mv2<<endl;
            update(1,1,n,ml,mv);
        }
    }
}