#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 1000001
int arr[mx];
int tree[mx * 4];
void init(int node, int b, int e)
{
    if (b == e)
    {
        tree[node] = arr[b];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node] = tree[Left] * tree[Right];
}
int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return 1;
    if (b >= i && e <= j)
        return tree[node];
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);
    return p1*p2;
}
void update(int node, int b, int e, int i, int newvalue)
{
    if (i > e || i < b)
        return;
    if (b >= i && e <= i)
    {
        //cout<<tree[node]<<" "<<newvalue<<endl;
        tree[node] = newvalue;
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, newvalue);
    update(Right, mid + 1, e, i, newvalue);
    tree[node] = tree[Left] * tree[Right];
}
int main()
{
    int n,m,i,j,k,l,a,b;
    while(cin>>n>>m)
    {
        for(i=1; i<=n; i++)
        {
            cin>>arr[i];
            if(arr[i]>0){
                arr[i]=1;
            }
            else if(arr[i]<0){
                arr[i]=-1;
            }
        }
        init(1,1,n);
        while(m--)
        {
            char ch;
            cin>>ch>>a>>b;
            if(ch=='C')
            {
                if(b>0)b=1;
                else if(b<0)b=-1;
                update(1,1,n,a,b);
            }
            else
            {
                ll ans=query(1,1,n,a,b);
                if(ans==0)
                {
                    cout<<0;
                }
                else if(ans>0)
                    cout<<'+';
                else if(ans<0)
                    cout<<'-';
            }
        }
        cout<<endl;
    }
    return 0;
}

/*************
4 6
-2 6 0 -1
C 1 10
P 1 4
C 3 7
P 2 2
C 4 -5
P 1 4
5 9
1 5 -2 4 3
P 1 2
P 1 5
C 4 -5
P 1 5
P 4 5
C 3 0
P 1 5
C 4 -5
C 4 5
***************/
