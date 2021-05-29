#include<bits/stdc++.h>
using namespace std;
#define mx 1000001
#define ll long long
ll arr[mx];
struct info
{
    ll prop, sum;
} tree[mx*4];
ll global;

ll query(ll node,ll b,ll e,ll i,ll j,ll carry = 0)
{
    if (i > e || j < b)
        return 0;
    if (b >= i and e <= j)
        return tree[node].sum + carry * (e - b + 1);
    ll Left = node << 1;
    ll Right = (node << 1) + 1;
    ll mid = (b + e) >> 1;
    ll p1 = query(Left, b, mid, i, j, carry + tree[node].prop);
    ll p2 = query(Right, mid + 1, e, i, j, carry + tree[node].prop);
    return p1 + p2;
}

void update(ll node,ll b,ll e,ll i,ll j,ll x)
{
    if (i > e || j < b)
        return;
    if (b >= i && e <= j)
    {
        tree[node].sum += ((e - b + 1) * x);
        tree[node].prop += x;
        return;
    }
    ll Left = node * 2;
    ll Right = (node * 2) + 1;
    ll mid = (b + e) / 2;
    update(Left, b, mid, i, j, x);
    update(Right, mid + 1, e, i, j, x);
    tree[node].sum = tree[Left].sum + tree[Right].sum + (e - b + 1) * tree[node].prop;
}

int main()
{

    ll t,n,q,i,j,k,l,r,ans,s,v;
    cin>>t;
    for(k=1; k<=t; k++)
    {
        for(i=0; i<3*mx; i++)
        {
            tree[i].prop=0;
            tree[i].sum=0;
        }
        cin>>n>>q;
        for(i=1; i<=q; i++)
        {
            scanf("%lld",&l);
            if(l==0)
            {
                scanf("%lld%lld%lld",&r,&v,&s);
                update(1,1,n,r,v,s);
            }
            else if(l==1)
            {
                scanf("%lld%lld",&r,&v);
                ans=query(1,1,n,r,v);
                printf("%lld\n",ans);

            }
        }
    }
}
